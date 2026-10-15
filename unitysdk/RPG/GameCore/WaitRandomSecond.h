#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRandomSecond; }

#define RPG_GAMECORE_WAITRANDOMSECOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9FAD0)
#define RPG_GAMECORE_WAITRANDOMSECOND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9FAE0)
#define RPG_GAMECORE_WAITRANDOMSECOND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9FAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRandomSecond_TypeDefinitionIndex = 20025;

	class WaitRandomSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MinWaitTime; // 0x18
		::System::Single MaxWaitTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRandomSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRandomSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRandomSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRandomSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
