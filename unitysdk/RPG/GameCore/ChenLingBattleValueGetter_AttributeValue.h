#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_AttributeValue; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55BDB0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55BDC0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55BD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_AttributeValue_TypeDefinitionIndex = 15802;

	class ChenLingBattleValueGetter_AttributeValue : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
