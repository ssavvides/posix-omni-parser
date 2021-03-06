#ifndef SYSCALLS_FUNCTIONS_H_INCLUDED
#define SYSCALLS_FUNCTIONS_H_INCLUDED

int open_rdonly(char*);
int open_rdwr(char*);

int execute_accept();
int execute_accept4();
int execute_access();
int execute_acct();
int execute_add_key();
int execute_adjtimex();
int execute_afs_syscall();
int execute_alarm();
int execute_alloc_hugepages();
int execute_bdflush();
int execute_bind();
int execute_break();
int execute_brk();
int execute_cacheflush();
int execute_capget();
int execute_capset();
int execute_chdir();
int execute_chmod();
int execute_chown();
int execute_chown32();
int execute_chroot();
int execute_clock_getres();
int execute_clock_gettime();
int execute_clock_nanosleep();
int execute_clock_settime();
int execute_clone();
int execute_close();
int execute_connect();
int execute_creat();
int execute_create_module();
int execute_delete_module();
int execute_dup();
int execute_dup2();
int execute_dup3();
int execute_epoll_create();
int execute_epoll_create1();
int execute_epoll_ctl();
int execute_epoll_pwait();
int execute_epoll_wait();
int execute_eventfd();
int execute_eventfd2();
int execute_execve();
int execute_exit();
int execute_exit_group();
int execute_faccessat();
int execute_fadvise64();
int execute_fadvise64_64();
int execute_fallocate();
int execute_fchdir();
int execute_fchmod();
int execute_fchmodat();
int execute_fchown();
int execute_fchown32();
int execute_fchownat();
int execute_fcntl();
int execute_fcntl64();
int execute_fdatasync();
int execute_fgetxattr();
int execute_flistxattr();
int execute_flock();
int execute_fork();
int execute_free_hugepages();
int execute_fremovexattr();
int execute_fsetxattr();
int execute_fstat();
int execute_fstat64();
int execute_fstatat64();
int execute_fstatvfs();
int execute_fstatvfs64();
int execute_fsync();
int execute_ftime();
int execute_ftruncate();
int execute_ftruncate64();
int execute_futex();
int execute_futimesat();
int execute_get_kernel_syms();
int execute_get_mempolicy();
int execute_get_robust_list();
int execute_get_thread_area();
int execute_getcpu();
int execute_getcwd();
int execute_getdents();
int execute_getdents64();
int execute_getegid();
int execute_getegid32();
int execute_geteuid();
int execute_geteuid32();
int execute_getgid();
int execute_getgid32();
int execute_getgroups();
int execute_getgroups32();
int execute_getitimer();
int execute_getpeername();
int execute_getpagesize();
int execute_getpgid();
int execute_getpgrp();
int execute_getpid();
int execute_getpmsg();
int execute_getppid();
int execute_getpriority();
int execute_getresgid();
int execute_getresgid32();
int execute_getresuid();
int execute_getresuid32();
int execute_getrlimit();
int execute_getrusage();
int execute_getsid();
int execute_getsockname();
int execute_getsockopt();
int execute_gettid();
int execute_gettimeofday();
int execute_getuid();
int execute_getuid32();
int execute_getxattr();
int execute_gtty();
int execute_idle();
int execute_init_module();
int execute_inotify_add_watch();
int execute_inotify_init();
int execute_inotify_init1();
int execute_inotify_rm_watch();
int execute_io_cancel();
int execute_io_destroy();
int execute_io_getevents();
int execute_io_setup();
int execute_io_submit();
int execute_ioctl();
int execute_ioperm();
int execute_iopl();
int execute_ioprio_get();
int execute_ioprio_set();
int execute_ipc();
int execute_kexec_load();
int execute_keyctl();
int execute_kill();
int execute_lchown();
int execute_lchown32();
int execute_lgetxattr();
int execute_link();
int execute_linkat();
int execute_listen();
int execute_listxattr();
int execute_llistxattr();
int execute_lock();
int execute_lookup_dcookie();
int execute_lremovexattr();
int execute_lseek();
int execute_lsetxattr();
int execute_lstat();
int execute_lstat64();
int execute_madvise();
int execute_madvise1();
int execute_mbind();
int execute_migrate_pages();
int execute_mincore();
int execute_mkdir();
int execute_mkdirat();
int execute_mknod();
int execute_mknodat();
int execute_mlock();
int execute_mlockall();
int execute_mmap();
int execute_mmap2();
int execute_modify_ldt();
int execute_mount();
int execute_move_pages();
int execute_mprotect();
int execute_mpx();
int execute_mq_getsetattr();
int execute_mq_notify();
int execute_mq_open();
int execute_mq_timedreceive();
int execute_mq_timedsend();
int execute_mq_unlink();
int execute_mremap();
int execute_msgctl();
int execute_msgget();
int execute_msgrcv();
int execute_msgsnd();
int execute_msync();
int execute_munlock();
int execute_munlockall();
int execute_munmap();
int execute_nanosleep();
int execute_nfsservctl();
int execute_nice();
int execute_oldfstat();
int execute_oldlstat();
int execute_oldolduname();
int execute_oldstat();
int execute_olduname();
int execute_open();
int execute_openat();
int execute_pause();
int execute_pciconfig_iobase();
int execute_pciconfig_read();
int execute_pciconfig_write();
int execute_perf_event_open();
int execute_personality();
int execute_phys();
int execute_pipe();
int execute_pipe2();
int execute_pivot_root();
int execute_poll();
int execute_ppoll();
int execute_prctl();
int execute_pread64();
int execute_preadv();
int execute_prlimit();
int execute_prof();
int execute_profil();
int execute_pselect6();
int execute_ptrace();
int execute_putpmsg();
int execute_pwrite64();
int execute_pwritev();
int execute_query_module();
int execute_quotactl();
int execute_read();
int execute_readahead();
int execute_readdir();
int execute_readlink();
int execute_readlinkat();
int execute_readv();
int execute_reboot();
int execute_recv();
int execute_recvfrom();
int execute_recvmsg();
int execute_recvmmsg();
int execute_remap_file_pages();
int execute_removexattr();
int execute_rename();
int execute_renameat();
int execute_request_key();
int execute_restart_syscall();
int execute_rmdir();
int execute_rt_sigaction();
int execute_rt_sigpending();
int execute_rt_sigprocmask();
int execute_rt_sigqueueinfo();
int execute_rt_sigreturn();
int execute_rt_sigsuspend();
int execute_rt_sigtimedwait();
int execute_rt_tgsigqueueinfo();
int execute_sched_get_priority_max();
int execute_sched_get_priority_min();
int execute_sched_getaffinity();
int execute_sched_getparam();
int execute_sched_getscheduler();
int execute_sched_rr_get_interval();
int execute_sched_setaffinity();
int execute_sched_setparam();
int execute_sched_setscheduler();
int execute_sched_yield();
int execute_security();
int execute_select();
int execute_semctl();
int execute_semget();
int execute_semop();
int execute_semtimedop();
int execute_send();
int execute_sendfile();
int execute_sendfile64();
int execute_sendmsg();
int execute_sendto();
int execute_set_mempolicy();
int execute_set_robust_list();
int execute_set_thread_area();
int execute_set_tid_address();
int execute_set_zone_reclaim();
int execute_setdomainname();
int execute_setfsgid();
int execute_setfsgid32();
int execute_setfsuid();
int execute_setfsuid32();
int execute_setgid();
int execute_setgid32();
int execute_setgroups();
int execute_setgroups32();
int execute_sethostname();
int execute_setitimer();
int execute_setpgid();
int execute_setpriority();
int execute_setregid();
int execute_setregid32();
int execute_setresgid();
int execute_setresgid32();
int execute_setresuid();
int execute_setresuid32();
int execute_setreuid();
int execute_setreuid32();
int execute_setrlimit();
int execute_setsid();
int execute_setsockopt();
int execute_settimeofday();
int execute_setuid();
int execute_setuid32();
int execute_setup();
int execute_setxattr();
int execute_sgetmask();
int execute_shmat();
int execute_shmctl();
int execute_shmdt();
int execute_shmget();
int execute_shutdown();
int execute_sigaction();
int execute_sigaltstack();
int execute_signal();
int execute_signalfd();
int execute_signalfd4();
int execute_sigpending();
int execute_sigprocmask();
int execute_sigreturn();
int execute_sigsuspend();
int execute_socket();
int execute_socketcall();
int execute_socketpair();
int execute_splice();
int execute_spu_create();
int execute_spu_run();
int execute_ssetmask();
int execute_stat();
int execute_stat64();
int execute_statvfs();
int execute_statvfs64();
int execute_stime();
int execute_stty();
int execute_subpage_prot();
int execute_swapoff();
int execute_swapon();
int execute_symlink();
int execute_symlinkat();
int execute_sync();
int execute_sync_file_range();
int execute_sync_file_range2();
int execute_sysfs();
int execute_sysinfo();
int execute_syslog();
int execute_tee();
int execute_tgkill();
int execute_time();
int execute_timer_create();
int execute_timer_delete();
int execute_timer_getoverrun();
int execute_timer_gettime();
int execute_timer_settime();
int execute_timerfd_create();
int execute_timerfd_gettime();
int execute_timerfd_settime();
int execute_times();
int execute_tkill();
int execute_truncate();
int execute_truncate64();
int execute_tuxcall();
int execute_ugetrlimit();
int execute_ulimit();
int execute_umask();
int execute_umount();
int execute_umount2();
int execute_uname();
int execute_unlink();
int execute_unlinkat();
int execute_unshare();
int execute_uselib();
int execute_ustat();
int execute_utime();
int execute_utimensat();
int execute_utimes();
int execute_vfork();
int execute_vhangup();
int execute_vm86old();
int execute_vmsplice();
int execute_vserver();
int execute_wait4();
int execute_waitid();
int execute_waitpid();
int execute_write();
int execute_writev();

#endif
