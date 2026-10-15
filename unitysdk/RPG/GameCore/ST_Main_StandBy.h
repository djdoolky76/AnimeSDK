#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_StandBy; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_STANDBY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA53C30)
#define RPG_GAMECORE_ST_MAIN_STANDBY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA53C40)
#define RPG_GAMECORE_ST_MAIN_STANDBY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA53C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_StandBy_TypeDefinitionIndex = 20097;

	class ST_Main_StandBy : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18
		::System::Boolean EnterSetAnim; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* EnterParam; // 0x20
		::System::Int32 EnterIndex; // 0x28
		::System::Boolean ExitSetAnim; // 0x2C
		::System::Byte _padding1[0x3];
		::System::String* ExitParam; // 0x30
		::System::Int32 ExitIndex; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_StandBy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_StandBy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_StandBy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_StandBy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
