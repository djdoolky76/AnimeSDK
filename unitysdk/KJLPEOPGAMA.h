#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJOCDDCPEPF;
class GEDMHFPPBHN;
class KJLPEOPGAMA;
class KKHNFGNFJFD;
class MCNEHNAAICP;
namespace RPG::GameCore { class AbilityElationEchoPointChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define KJLPEOPGAMA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB45AEE0)
#define KJLPEOPGAMA_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xB45B130)
#define KJLPEOPGAMA_CEABIFIKLNF_OFFSET UNITYSDK_OFFSET(0xB45B8C0)
#define KJLPEOPGAMA_COFEBDFNLGB_OFFSET UNITYSDK_OFFSET(0xB45B730)
#define KJLPEOPGAMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB45B110)
#define KJLPEOPGAMA_FEHGIPOELBL_OFFSET UNITYSDK_OFFSET(0xB45BAE0)
#define KJLPEOPGAMA_FPOKOABIECP_OFFSET UNITYSDK_OFFSET(0xB45B5F0)
#define KJLPEOPGAMA_GADPDFIPAJG_OFFSET UNITYSDK_OFFSET(0xB45B4A0)
#define KJLPEOPGAMA_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0xB45B340)
#define KJLPEOPGAMA_JGDHANFBBIB_OFFSET UNITYSDK_OFFSET(0xB45B7D0)
#define KJLPEOPGAMA_JNJHFLDABNP_OFFSET UNITYSDK_OFFSET(0xB45B930)
#define KJLPEOPGAMA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xB45B190)
#define KJLPEOPGAMA_KONHBGNLAOM_OFFSET UNITYSDK_OFFSET(0xB45B410)
#define KJLPEOPGAMA_MEDOGMGMEME_OFFSET UNITYSDK_OFFSET(0xB45BA10)

	class KJLPEOPGAMA : public ::System::Object
	{
	public:
		::MCNEHNAAICP* PDECIAHJGCM; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::DJOCDDCPEPF* APPIHABBCGK; // 0x20
		::KKHNFGNFJFD* GAFBGDNAEDO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_CTOR_OFFSET))(this);
		}

		static ::KJLPEOPGAMA* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KJLPEOPGAMA*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean HAFHEJANLCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_HAFHEJANLCC_OFFSET))(this, a1);
		}

		::System::Int32 KONHBGNLAOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_KONHBGNLAOM_OFFSET))(this);
		}

		::System::String* GADPDFIPAJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_GADPDFIPAJG_OFFSET))(this);
		}

		::System::Boolean FPOKOABIECP(::RPG::GameCore::AbilityElationEchoPointChange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityElationEchoPointChange*))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_FPOKOABIECP_OFFSET))(this, a1);
		}

		::System::Boolean JGDHANFBBIB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_JGDHANFBBIB_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* CEABIFIKLNF()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_CEABIFIKLNF_OFFSET))(this);
		}

		::System::Boolean JNJHFLDABNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_JNJHFLDABNP_OFFSET))(this);
		}

		::System::Boolean MEDOGMGMEME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_MEDOGMGMEME_OFFSET))(this);
		}

		::System::Boolean COFEBDFNLGB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_COFEBDFNLGB_OFFSET))(this, a1);
		}

		::System::Boolean FEHGIPOELBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLPEOPGAMA_FEHGIPOELBL_OFFSET))(this);
		}

	};
