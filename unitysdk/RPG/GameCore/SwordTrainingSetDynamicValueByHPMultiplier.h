#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByHPMultiplier; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F360)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1F370)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByHPMultiplier_TypeDefinitionIndex = 22600;

	class SwordTrainingSetDynamicValueByHPMultiplier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
