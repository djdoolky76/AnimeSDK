#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleChimeraDuelValueGetter; }

#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE9810)
#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE9820)
#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE9700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleChimeraDuelValueGetter_TypeDefinitionIndex = 15992;

	class SimpleChimeraDuelValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
