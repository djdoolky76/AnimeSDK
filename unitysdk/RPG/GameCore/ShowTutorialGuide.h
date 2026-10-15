#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialGuide; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE65B0)
#define RPG_GAMECORE_SHOWTUTORIALGUIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE65C0)
#define RPG_GAMECORE_SHOWTUTORIALGUIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE6580)

namespace RPG::GameCore
{
	class ShowTutorialGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GuideID; // 0x18
		::System::Boolean WaitForExit; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* Param; // 0x20
		::System::Boolean SkipIfAlreadySeen; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
