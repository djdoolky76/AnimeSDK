#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraPhaseCondition; }

#define RPG_GAMECORE_CHIMERAPHASECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE100)
#define RPG_GAMECORE_CHIMERAPHASECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ADFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseCondition_TypeDefinitionIndex = 15888;

	class ChimeraPhaseCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraPhaseConditionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamArray; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPhaseCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPhaseCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
