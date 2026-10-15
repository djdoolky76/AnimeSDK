#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandCancelLift; }

#define RPG_GAMECORE_SWITCHHANDCANCELLIFT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13F90)
#define RPG_GAMECORE_SWITCHHANDCANCELLIFT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB13FA0)
#define RPG_GAMECORE_SWITCHHANDCANCELLIFT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCancelLift_TypeDefinitionIndex = 20964;

	class SwitchHandCancelLift : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCancelLift* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCancelLift*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCancelLift* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCancelLift*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
