#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDKNGJGGMOI.h"
class MNBNFBAMKKI;
namespace System { class String; }

#define IJPEDBMAMDM_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x16480FD0)
#define IJPEDBMAMDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16480DC0)
#define IJPEDBMAMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x16480DB0)
#define IJPEDBMAMDM_KPBNLOAFBFC_OFFSET UNITYSDK_OFFSET(0x16480DD0)
#define IJPEDBMAMDM_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x16481250)
#define IJPEDBMAMDM_MMGHDKPGNNF_OFFSET UNITYSDK_OFFSET(0x16480E20)
#define IJPEDBMAMDM_ODGBJHIDJKD_OFFSET UNITYSDK_OFFSET(0x16480EC0)
#define IJPEDBMAMDM_OPNMHPIECDB_OFFSET UNITYSDK_OFFSET(0x164811F0)

inline static constexpr unsigned int IJPEDBMAMDM_TypeDefinitionIndex = 71731;

	class IJPEDBMAMDM : public ::System::Object
	{
	public:
		::System::String* GJELMKNIJCM; // 0x10
		// static const ::System::String* MEELDHMNNDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_CTOR_1_OFFSET))(this, a1);
		}

		::System::String* KPBNLOAFBFC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_KPBNLOAFBFC_OFFSET))(this);
		}

		::System::Boolean MMGHDKPGNNF(::MNBNFBAMKKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_MMGHDKPGNNF_OFFSET))(this, a1);
		}

		::IDKNGJGGMOI ODGBJHIDJKD(::MNBNFBAMKKI* a1)
		{
			return ((::IDKNGJGGMOI(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_ODGBJHIDJKD_OFFSET))(this, a1);
		}

		::System::Int32 CJDNCBHLOGD(::MNBNFBAMKKI* a1, ::MNBNFBAMKKI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MNBNFBAMKKI*, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_CJDNCBHLOGD_OFFSET))(this, a1, a2);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Int32 OPNMHPIECDB(::RPG::GameCore::EnumStatusType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + IJPEDBMAMDM_OPNMHPIECDB_OFFSET))(this, a1);
		}

	};
