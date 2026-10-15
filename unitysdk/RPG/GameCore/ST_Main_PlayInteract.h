#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_PlayInteract; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA80DA0)
#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA80DB0)
#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA80D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_PlayInteract_TypeDefinitionIndex = 20144;

	class ST_Main_PlayInteract : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean ForceStartMotion; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single Duration; // 0x2C
		::System::Boolean SteerToPlayer; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
