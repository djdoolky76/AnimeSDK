#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraDynamicValueGetter; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59C3B0)
#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59C3C0)
#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59C360)

namespace RPG::GameCore
{
	class ChimeraDuelChimeraDynamicValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::String* BaseKey; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
