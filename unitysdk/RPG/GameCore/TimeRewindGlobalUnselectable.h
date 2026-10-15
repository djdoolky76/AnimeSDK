#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindGlobalUnselectable; }

#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB883A0)
#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB883B0)
#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB88360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindGlobalUnselectable_TypeDefinitionIndex = 20681;

	class TimeRewindGlobalUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindGlobalUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindGlobalUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
