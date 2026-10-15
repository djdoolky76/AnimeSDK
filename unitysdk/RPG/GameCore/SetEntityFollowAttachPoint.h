#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CIBPNBHDDHD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityFollowAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA83040)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA83050)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA83000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityFollowAttachPoint_TypeDefinitionIndex = 22723;

	class SetEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SelfAttachPoint; // 0x20
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::GameCore::CharacterVisiblityFollowFlag VisibilityFollow; // 0x38
		::System::Boolean EnableTransmitVisible; // 0x3A
		::System::Boolean DisableWhenAttachTargetInvisible; // 0x3B
		::System::Boolean UseAttachedTargetScale; // 0x3C
		::System::Byte _padding0[0x3];
		::CIBPNBHDDHD* SmoothFollow; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
