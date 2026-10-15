#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordEntityFormationIndex; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973BD0)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973BE0)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordEntityFormationIndex_TypeDefinitionIndex = 23700;

	class RecordEntityFormationIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordEntityFormationIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordEntityFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordEntityFormationIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordEntityFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
