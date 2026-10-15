#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_RecordGuardPosition; }

#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA865B0)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA865C0)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA864F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RecordGuardPosition_TypeDefinitionIndex = 20107;

	class ST_Side_RecordGuardPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
