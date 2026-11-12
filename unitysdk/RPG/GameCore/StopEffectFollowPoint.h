#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopEffectFollowPoint; }
namespace System { class String; }

#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED36AB0)
#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED36AD0)
#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED36A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopEffectFollowPoint_TypeDefinitionIndex = 20611;

	class StopEffectFollowPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* FollowPointName; // 0x20
		::RPG::MVector3 Postion; // 0x28
		::System::Boolean IsPositionFollow; // 0x34
		::System::Boolean IsRotationFollow; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopEffectFollowPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopEffectFollowPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopEffectFollowPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopEffectFollowPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
