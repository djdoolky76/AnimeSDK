#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropInteractionTrigger.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class IINMGKKBIME;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define PPMNNDCCGIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC38DA20)
#define PPMNNDCCGIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC38CF70)
#define PPMNNDCCGIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC38D090)
#define PPMNNDCCGIP_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC38D270)
#define PPMNNDCCGIP_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC38D480)
#define PPMNNDCCGIP_FLELNHONPHB_OFFSET UNITYSDK_OFFSET(0xC38D5D0)
#define PPMNNDCCGIP_KDAMHPHLBKK_OFFSET UNITYSDK_OFFSET(0xC38D2E0)
#define PPMNNDCCGIP_MGOMLAEAIAC_OFFSET UNITYSDK_OFFSET(0xC38D170)
#define PPMNNDCCGIP_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xC38D4E0)
#define PPMNNDCCGIP__TICKCD_OFFSET UNITYSDK_OFFSET(0xC38D520)

inline static constexpr unsigned int PPMNNDCCGIP_TypeDefinitionIndex = 57525;

	class PPMNNDCCGIP : public ::RPG::GameCore::PropInteractionTrigger
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IJLODCCJMFH; // 0xD0
		::RPG::GameCore::PropInteractionTrigger_ButtonParam* PJDOOHMAJEJ; // 0xD8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KIIOOGNDFPM; // 0xE0
		::RPG::GameCore::PropInteractionTrigger_ButtonParam* PNCCMJKGPAK; // 0xE8
		::System::Single MIFCMKJDOOM; // 0xF0
		::System::Single KLADNOMNBJJ; // 0xF4
		::System::UInt32 JJBOPOPCOCH; // 0xF8
		static ::System::String** StaticGet_JKMABBEGEAH()
		{
			return (::System::String**)UnitySDK::FromName("", "PPMNNDCCGIP")->GetStaticField(0xE1D0);
		}

		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::IINMGKKBIME* a3, ::IINMGKKBIME* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::IINMGKKBIME*, ::IINMGKKBIME*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPMNNDCCGIP_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}

		::System::Void KDAMHPHLBKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_KDAMHPHLBKK_OFFSET))(this);
		}

		::System::Void MGOMLAEAIAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_MGOMLAEAIAC_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPMNNDCCGIP__TICKCD_OFFSET))(this, a1);
		}

		::System::Void FLELNHONPHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPMNNDCCGIP_FLELNHONPHB_OFFSET))(this, a1);
		}

	};
