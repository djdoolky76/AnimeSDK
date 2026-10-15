#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtCharacterMotionParam; }

#define RPG_GAMECORE_RTCHARACTERMOTIONPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA58BB0)
#define RPG_GAMECORE_RTCHARACTERMOTIONPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4C6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterMotionParam_TypeDefinitionIndex = 17651;

	class RtCharacterMotionParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint WalkSpeed; // 0x10
		::RPG::GameCore::FixPoint RunSpeed; // 0x18
		::RPG::GameCore::FixPoint FastRunSpeed; // 0x20
		::RPG::GameCore::FixPoint RunStartSpeed; // 0x28
		::RPG::GameCore::FixPoint RunStartAcc; // 0x30
		::RPG::GameCore::FixPoint RunStopSpeed; // 0x38
		::RPG::GameCore::FixPoint RunStopAcc; // 0x40
		::RPG::GameCore::FixPoint RunStartTime; // 0x48
		::RPG::GameCore::FixPoint RunStopTime; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERMOTIONPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCharacterMotionParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCharacterMotionParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERMOTIONPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
