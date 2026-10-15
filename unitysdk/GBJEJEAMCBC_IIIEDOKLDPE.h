#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"
class JNFBANKKLJK;

#define GBJEJEAMCBC_IIIEDOKLDPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62ACA0)
#define GBJEJEAMCBC_IIIEDOKLDPE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C62B170)
#define GBJEJEAMCBC_IIIEDOKLDPE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C62B110)
#define GBJEJEAMCBC_IIIEDOKLDPE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C62ACB0)
#define GBJEJEAMCBC_IIIEDOKLDPE_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1C62B1B0)

inline static constexpr unsigned int GBJEJEAMCBC_IIIEDOKLDPE_TypeDefinitionIndex = 37131;

	class GBJEJEAMCBC_IIIEDOKLDPE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_IIIEDOKLDPE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LDIHJENNBEE a1, ::JNFBANKKLJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_IIIEDOKLDPE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_IIIEDOKLDPE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_IIIEDOKLDPE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_IIIEDOKLDPE_LKINLAMMGID_OFFSET))(this);
		}

	};
