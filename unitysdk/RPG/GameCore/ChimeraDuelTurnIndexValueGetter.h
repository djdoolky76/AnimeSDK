#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelTurnIndexValueGetter; }

#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ABC40)
#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5ABC50)
#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ABBB0)

namespace RPG::GameCore
{
	class ChimeraDuelTurnIndexValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
