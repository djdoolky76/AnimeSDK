#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class TextDynamicParamExpr; }

#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81640)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB81650)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB81720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDynamicParamExpr_TypeDefinitionIndex = 17011;

	class TextDynamicParamExpr : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Expr; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextDynamicParamExpr* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextDynamicParamExpr*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextDynamicParamExpr* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextDynamicParamExpr*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
