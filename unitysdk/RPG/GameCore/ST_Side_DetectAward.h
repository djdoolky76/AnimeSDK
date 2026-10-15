#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_DetectAward; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_DETECTAWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82920)
#define RPG_GAMECORE_ST_SIDE_DETECTAWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA82970)
#define RPG_GAMECORE_ST_SIDE_DETECTAWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA828B0)

namespace RPG::GameCore
{
	class ST_Side_DetectAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single DetectRadius; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DetectAiEvent; // 0x20
		::System::String* VariableOnFindTrotter; // 0x28
		::System::String* VariableOnFindTreature; // 0x30
		::System::Single SampleRadiusOverride; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_DetectAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_DetectAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_DetectAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_DetectAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
