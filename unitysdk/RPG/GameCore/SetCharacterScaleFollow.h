#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterScaleFollow; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6DBE0)
#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6DBF0)
#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6DBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterScaleFollow_TypeDefinitionIndex = 22651;

	class SetCharacterScaleFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20
		::System::String* FollowAttachPoint; // 0x28
		::System::Boolean OutlineWidthScaleFollow; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Multiplier; // 0x38
		::System::Boolean LateUpDateFollow; // 0x40
		::System::Boolean StopFollow; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterScaleFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterScaleFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterScaleFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterScaleFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
