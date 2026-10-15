#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FSVFilterExpression; }

#define RPG_GAMECORE_FSVFILTEREXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D667FF0)
#define RPG_GAMECORE_FSVFILTEREXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D668000)
#define RPG_GAMECORE_FSVFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D667EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVFilterExpression_TypeDefinitionIndex = 17403;

	class FSVFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FSVFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FSVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FSVFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FSVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
