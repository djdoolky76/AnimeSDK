#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace System { class String; }

#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70480)
#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70490)
#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_PlayInteractOnPoint_TypeDefinitionIndex = 20064;

	class SO_PlayInteractOnPoint : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::Boolean ForceStartMotion; // 0x18
		::System::Boolean ForceAtPosition; // 0x19
		::System::Boolean AlignRotation; // 0x1A
		::System::Byte _padding0[0x5];
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single Duration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
