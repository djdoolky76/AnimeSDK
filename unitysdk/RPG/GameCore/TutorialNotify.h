#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialNotifyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialNotify; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CFA0)
#define RPG_GAMECORE_TUTORIALNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6CFB0)
#define RPG_GAMECORE_TUTORIALNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6CF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialNotify_TypeDefinitionIndex = 24350;

	class TutorialNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialNotifyType Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
