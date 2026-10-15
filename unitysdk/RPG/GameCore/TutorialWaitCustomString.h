#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitCustomString.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialWaitCustomString; }

#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6EA00)
#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6EA10)
#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialWaitCustomString_TypeDefinitionIndex = 24376;

	class TutorialWaitCustomString : public ::RPG::GameCore::WaitCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialWaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialWaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
