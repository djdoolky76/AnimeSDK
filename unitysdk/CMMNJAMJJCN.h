#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class ECCKLFIHNOH;
class KKIJDPKIIKL;

#define CMMNJAMJJCN_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0xDA3C340)
#define CMMNJAMJJCN_BNHOEGMIPDL_OFFSET UNITYSDK_OFFSET(0xDA3C2A0)
#define CMMNJAMJJCN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3C5A0)
#define CMMNJAMJJCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA3BFF0)
#define CMMNJAMJJCN_FDEFNMJBGML_OFFSET UNITYSDK_OFFSET(0xDA3C0F0)
#define CMMNJAMJJCN_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xDA3C500)
#define CMMNJAMJJCN_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xDA3C540)
#define CMMNJAMJJCN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA3C260)
#define CMMNJAMJJCN_TICK_OFFSET UNITYSDK_OFFSET(0xDA3C140)

	class CMMNJAMJJCN : public ::GELIALJDFBL
	{
	public:
		::KKIJDPKIIKL* ALDDFNIAIKP; // 0x18
		::System::Boolean IBBDBCCMBII; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BNHOEGMIPDL(::ECCKLFIHNOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKLFIHNOH*))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_BNHOEGMIPDL_OFFSET))(this, a1);
		}

		::System::Void FDEFNMJBGML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_FDEFNMJBGML_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_BLBGBLLHDAB_OFFSET))(this, a1);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMMNJAMJJCN_LKIFDCACLOK_OFFSET))(this, a1);
		}

	};
