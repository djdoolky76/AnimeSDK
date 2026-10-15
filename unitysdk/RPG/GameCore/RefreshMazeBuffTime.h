#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RefreshMazeBuffTime; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHMAZEBUFFTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9769F0)
#define RPG_GAMECORE_REFRESHMAZEBUFFTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D976A00)
#define RPG_GAMECORE_REFRESHMAZEBUFFTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9769C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMazeBuffTime_TypeDefinitionIndex = 20187;

	class RefreshMazeBuffTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
