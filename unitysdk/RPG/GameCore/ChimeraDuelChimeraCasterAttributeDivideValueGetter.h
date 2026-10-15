#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelChimeraCasterAttributeDivideValueGetter; }

#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59C230)
#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59C240)
#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59C1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraCasterAttributeDivideValueGetter_TypeDefinitionIndex = 15925;

	class ChimeraDuelChimeraCasterAttributeDivideValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelValueGetter* DivideValueGetter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
