#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FSVFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FSVFilterHoyoTagExpression; }

#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8D670)
#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC8D680)
#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC8D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVFilterHoyoTagExpression_TypeDefinitionIndex = 17572;

	class FSVFilterHoyoTagExpression : public ::RPG::GameCore::FSVFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FSVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FSVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FSVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FSVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
