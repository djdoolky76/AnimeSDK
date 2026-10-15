#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearEntityFollowAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588740)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588750)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityFollowAttachPoint_TypeDefinitionIndex = 23642;

	class ClearEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
