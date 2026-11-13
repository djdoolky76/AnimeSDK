#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLAILNGPHN;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Object; }

#define IDOMLBBONDH_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1779B320)
#define IDOMLBBONDH_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1779AF60)
#define IDOMLBBONDH_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1779B370)
#define IDOMLBBONDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1779B870)
#define IDOMLBBONDH_EDMDDIAPAGE_OFFSET UNITYSDK_OFFSET(0x1779B1C0)
#define IDOMLBBONDH_FLNILJMHDKP_OFFSET UNITYSDK_OFFSET(0x1779B3D0)
#define IDOMLBBONDH_GOCDJDMPGDJ_OFFSET UNITYSDK_OFFSET(0x1779AFC0)
#define IDOMLBBONDH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1779B070)
#define IDOMLBBONDH_IKGFCCKGMAH_OFFSET UNITYSDK_OFFSET(0x1779B670)
#define IDOMLBBONDH_JIOLAAGJAME_OFFSET UNITYSDK_OFFSET(0x1779B7A0)
#define IDOMLBBONDH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1779B100)
#define IDOMLBBONDH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1779AE00)
#define IDOMLBBONDH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1779B860)

inline static constexpr unsigned int IDOMLBBONDH_TypeDefinitionIndex = 71173;

	class IDOMLBBONDH : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* IJHMHABHIOP; // 0x10
		::RPG::GameCore::ButtonListTrigger_RuntimeButton* HJCDIIOHHDA; // 0x18
		::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x20
		::FKLAILNGPHN* FHIJJAMODNB; // 0x28
		::System::Single CDIBGJLEABI; // 0x30
		::System::UInt32 CLPGECODMNP; // 0x34
		::System::Boolean ABCIPNOGNMJ; // 0x38
		::System::Boolean FJEBDGJCEMM; // 0x39
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
