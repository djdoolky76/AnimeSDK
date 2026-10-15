#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class GMGGBIBGMLE;
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CEALHGGGHKK_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xC777670)
#define CEALHGGGHKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC776A50)
#define CEALHGGGHKK_DDDMPAJFHIK_OFFSET UNITYSDK_OFFSET(0xC776F30)
#define CEALHGGGHKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC776C60)
#define CEALHGGGHKK_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC776ED0)
#define CEALHGGGHKK_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC7774A0)
#define CEALHGGGHKK_DOONTICK_OFFSET UNITYSDK_OFFSET(0xC777510)
#define CEALHGGGHKK_EDMDDIAPAGE_OFFSET UNITYSDK_OFFSET(0xC7775A0)
#define CEALHGGGHKK_EHGDMFJAOBJ_OFFSET UNITYSDK_OFFSET(0xC776E70)
#define CEALHGGGHKK_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7778F0)
#define CEALHGGGHKK_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC7778B0)
#define CEALHGGGHKK_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xC7778D0)
#define CEALHGGGHKK_GOCDJDMPGDJ_OFFSET UNITYSDK_OFFSET(0xC776DA0)
#define CEALHGGGHKK_KEBDLHMGHBA_OFFSET UNITYSDK_OFFSET(0xC776D20)
#define CEALHGGGHKK_MMDOBEBJEBD_OFFSET UNITYSDK_OFFSET(0xC776A40)
#define CEALHGGGHKK_MOCEGECGGHH_OFFSET UNITYSDK_OFFSET(0xC776B60)
#define CEALHGGGHKK_PNPOGJHEEPG_OFFSET UNITYSDK_OFFSET(0xC777820)
#define CEALHGGGHKK_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC777900)
#define CEALHGGGHKK_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC7778C0)
#define CEALHGGGHKK_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0xC7778E0)

inline static constexpr unsigned int CEALHGGGHKK_TypeDefinitionIndex = 68554;

	class CEALHGGGHKK : public ::EDLDHDMLJDH
	{
	public:
		::RPG::Client::MonoCurveTriggerManager* KGCNPIEDOCA; // 0xA0
		::RPG::GameCore::PropInteractionTrigger_ButtonParam* EDNNMHBJOBK; // 0xA8
		::RPG::GameCore::GameEntity* BOMFAKPMHMI; // 0xB0
		::System::String* _IconPath_k__BackingField; // 0xB8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC0
		::GMGGBIBGMLE* BGDDKFHKAKM; // 0xC8
		::System::UInt32 _RuntimeID_k__BackingField; // 0xD0
		::System::Boolean NEFHBJGFADL; // 0xD4
		::System::Boolean KIAFGDOOKHL; // 0xD5
		::System::Boolean EPBLHFIDDEI; // 0xD6
		::System::Byte _padding0[0x1];
		::System::Single EIDFFKGFFIO; // 0xD8
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _TextID_k__BackingField; // 0xE0
		// static const ::System::Object JKOJMLHLCEL; // 0x0
		::System::Void _ctor(::RPG::Client::MonoCurveTriggerManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::OptionTriggerInfo* a3, ::GMGGBIBGMLE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveTriggerManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::OptionTriggerInfo*, ::GMGGBIBGMLE*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::PropInteractionTrigger_ButtonParam* MMDOBEBJEBD()
		{
			return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_MMDOBEBJEBD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_DISPOSE_OFFSET))(this);
		}

		::System::Void KEBDLHMGHBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_KEBDLHMGHBA_OFFSET))(this);
		}

		::System::Void EHGDMFJAOBJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_EHGDMFJAOBJ_OFFSET))(this, a1);
		}

		::System::Void MOCEGECGGHH(::RPG::GameCore::OptionTriggerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTriggerInfo*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_MOCEGECGGHH_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CEALHGGGHKK_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEALHGGGHKK_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void DDDMPAJFHIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_DDDMPAJFHIK_OFFSET))(this);
		}

		::System::Void EDMDDIAPAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_EDMDDIAPAGE_OFFSET))(this);
		}

		::System::Void GOCDJDMPGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_GOCDJDMPGDJ_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Boolean PNPOGJHEEPG(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_PNPOGJHEEPG_OFFSET))(this, a1);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEALHGGGHKK_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_SET_TEXTID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEALHGGGHKK_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEALHGGGHKK_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
