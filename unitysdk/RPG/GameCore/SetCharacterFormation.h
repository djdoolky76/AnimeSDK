#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetCharacterFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A810)
#define RPG_GAMECORE_SETCHARACTERFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9A880)
#define RPG_GAMECORE_SETCHARACTERFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9A770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterFormation_TypeDefinitionIndex = 22643;

	class SetCharacterFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Boolean UpdateInfo; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::CharacterFormationType Type; // 0x24
		::RPG::MVector3 FixedPos; // 0x28
		::System::Single FixedYawAngle; // 0x34
		::RPG::GameCore::DynamicFloat* TeamFormationIndex; // 0x38
		::System::String* AnchorAreaPath; // 0x40
		::System::String* AnchorName; // 0x48
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x50
		::RPG::MVector3 FollowOffset; // 0x58
		::System::Single FollowAngleOffset; // 0x64
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x68
		::System::Boolean DelyRefresh; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
