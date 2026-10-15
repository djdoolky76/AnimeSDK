#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/System/Object.h"
class JNFBANKKLJK;

#define GBJEJEAMCBC_PPCDLKECMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC970)
#define GBJEJEAMCBC_PPCDLKECMMJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C5FD260)
#define GBJEJEAMCBC_PPCDLKECMMJ_JAAPCICIHIJ_OFFSET UNITYSDK_OFFSET(0x1C5FD850)
#define GBJEJEAMCBC_PPCDLKECMMJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5FD7F0)
#define GBJEJEAMCBC_PPCDLKECMMJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C5FD460)
#define GBJEJEAMCBC_PPCDLKECMMJ_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1C5FD7A0)

inline static constexpr unsigned int GBJEJEAMCBC_PPCDLKECMMJ_TypeDefinitionIndex = 37133;

	class GBJEJEAMCBC_PPCDLKECMMJ : public ::System::Object
	{
	public:
		::LDIHJENNBEE EEFMDEHLLFI; // 0x10
		::System::Int32 HGFKELDMDMP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LDIHJENNBEE a1, ::JNFBANKKLJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_LKINLAMMGID_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JAAPCICIHIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_PPCDLKECMMJ_JAAPCICIHIJ_OFFSET))(this, a1);
		}

	};
