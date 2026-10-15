#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FCVFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FCVFilterHoyoTagExpression; }

#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D667E50)
#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D667E60)
#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D667E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FCVFilterHoyoTagExpression_TypeDefinitionIndex = 17401;

	class FCVFilterHoyoTagExpression : public ::RPG::GameCore::FCVFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FCVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FCVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FCVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FCVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
