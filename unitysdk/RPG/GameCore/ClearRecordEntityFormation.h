#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearRecordEntityFormation; }

#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6CB0)
#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B6CC0)
#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRecordEntityFormation_TypeDefinitionIndex = 22768;

	class ClearRecordEntityFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRecordEntityFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRecordEntityFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRecordEntityFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRecordEntityFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
