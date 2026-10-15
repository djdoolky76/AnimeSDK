#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialLevelEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitTutorial; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTUTORIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA41D0)
#define RPG_GAMECORE_WAITTUTORIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA41E0)
#define RPG_GAMECORE_WAITTUTORIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA4190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTutorial_TypeDefinitionIndex = 24323;

	class WaitTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialLevelEvent Event; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::System::Boolean GoNextImmediately; // 0x28
		::System::Boolean BlockOnWaiting; // 0x29
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccessImmediate; // 0x30
		::System::UInt32 MaxWaitTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
