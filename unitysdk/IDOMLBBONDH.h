#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLAILNGPHN;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Object; }

#define IDOMLBBONDH_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15EE2F10)
#define IDOMLBBONDH_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15EE2B50)
#define IDOMLBBONDH_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15EE2F60)
#define IDOMLBBONDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE3460)
#define IDOMLBBONDH_EDMDDIAPAGE_OFFSET UNITYSDK_OFFSET(0x15EE2DB0)
#define IDOMLBBONDH_FLNILJMHDKP_OFFSET UNITYSDK_OFFSET(0x15EE2FC0)
#define IDOMLBBONDH_GOCDJDMPGDJ_OFFSET UNITYSDK_OFFSET(0x15EE2BB0)
#define IDOMLBBONDH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15EE2C60)
#define IDOMLBBONDH_IKGFCCKGMAH_OFFSET UNITYSDK_OFFSET(0x15EE3260)
#define IDOMLBBONDH_JIOLAAGJAME_OFFSET UNITYSDK_OFFSET(0x15EE3390)
#define IDOMLBBONDH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EE2CF0)
#define IDOMLBBONDH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EE29F0)
#define IDOMLBBONDH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15EE3450)

inline static constexpr unsigned int IDOMLBBONDH_TypeDefinitionIndex = 69219;

	class IDOMLBBONDH : public ::System::Object
	{
	public:
		::RPG::GameCore::ButtonListTrigger_RuntimeButton* HJCDIIOHHDA; // 0x10
		::RPG::GameCore::LevelGraphComponent* IJHMHABHIOP; // 0x18
		::FKLAILNGPHN* FHIJJAMODNB; // 0x20
		::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x28
		::System::UInt32 CLPGECODMNP; // 0x30
		::System::Boolean FJEBDGJCEMM; // 0x34
		::System::Boolean ABCIPNOGNMJ; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single CDIBGJLEABI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FKLAILNGPHN* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::FKLAILNGPHN*, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + IDOMLBBONDH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDOMLBBONDH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void EDMDDIAPAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_EDMDDIAPAGE_OFFSET))(this);
		}

		::System::Void GOCDJDMPGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_GOCDJDMPGDJ_OFFSET))(this);
		}

		::System::Void FLNILJMHDKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDOMLBBONDH_FLNILJMHDKP_OFFSET))(this, a1);
		}

		::System::Boolean IKGFCCKGMAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_IKGFCCKGMAH_OFFSET))(this);
		}

		::System::Boolean JIOLAAGJAME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_JIOLAAGJAME_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMLBBONDH_LDAMHBBILAD_OFFSET))(this);
		}

	};
