#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/System/Object.h"
class JNFBANKKLJK;

#define GBJEJEAMCBC_OHFFBKIBFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC960)
#define GBJEJEAMCBC_OHFFBKIBFNL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C5FD0F0)
#define GBJEJEAMCBC_OHFFBKIBFNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5FD090)
#define GBJEJEAMCBC_OHFFBKIBFNL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C5FCE30)
#define GBJEJEAMCBC_OHFFBKIBFNL_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1C5FD210)

inline static constexpr unsigned int GBJEJEAMCBC_OHFFBKIBFNL_TypeDefinitionIndex = 37132;

	class GBJEJEAMCBC_OHFFBKIBFNL : public ::System::Object
	{
	public:
		::LDIHJENNBEE EEFMDEHLLFI; // 0x10
		::System::Single HBDJCFFDGDD; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_OHFFBKIBFNL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LDIHJENNBEE a1, ::JNFBANKKLJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_OHFFBKIBFNL_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_OHFFBKIBFNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_OHFFBKIBFNL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_OHFFBKIBFNL_LKINLAMMGID_OFFSET))(this);
		}

	};
