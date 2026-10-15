#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterNavigateFollow; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D573A30)
#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D573A40)
#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5739F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNavigateFollow_TypeDefinitionIndex = 20856;

	class CharacterNavigateFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x28
		::System::Single FollowDistance; // 0x2C
		::System::Boolean WaitUntilFinish; // 0x30
		::System::Boolean AvoidOthers; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterNavigateFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterNavigateFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterNavigateFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterNavigateFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
