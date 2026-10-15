#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetOverrideColliderCamera; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE7B0)
#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABE7C0)
#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABE780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetOverrideColliderCamera_TypeDefinitionIndex = 22396;

	class SetOverrideColliderCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ColliderCameraName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetOverrideColliderCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetOverrideColliderCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetOverrideColliderCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetOverrideColliderCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
