#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_MoveAlongPath; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7F540)
#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7F550)
#define RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7F510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_MoveAlongPath_TypeDefinitionIndex = 20102;

	class ST_Main_MoveAlongPath : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x18
		::System::Boolean StanceUseVariable; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* StanceVariableName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVEALONGPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
