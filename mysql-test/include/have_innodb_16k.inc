if (`SELECT /*+SET_VAR(use_secondary_engine=OFF)*/ COUNT(*) = 0 FROM performance_schema.global_status WHERE LOWER(variable_name) = 'innodb_page_size' AND variable_value = 16384`)
{
  --skip Test requires InnoDB with page size equal to 16k.
}
