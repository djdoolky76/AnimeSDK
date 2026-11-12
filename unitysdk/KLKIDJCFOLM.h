#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KLKIDJCFOLM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define KLKIDJCFOLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29DD50)
#define KLKIDJCFOLM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E29DD60)
#define KLKIDJCFOLM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E29DD20)

inline static constexpr unsigned int KLKIDJCFOLM_TypeDefinitionIndex = 23664;

	class KLKIDJCFOLM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IENBBJKOCEN; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::GridFightBattleEventHintType INAHCAEDLEA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKIDJCFOLM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLKIDJCFOLM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLKIDJCFOLM*))((::PBYTE)hIl2Cpp + KLKIDJCFOLM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KLKIDJCFOLM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLKIDJCFOLM*))((::PBYTE)hIl2Cpp + KLKIDJCFOLM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
