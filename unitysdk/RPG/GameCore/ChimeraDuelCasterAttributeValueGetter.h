#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelCasterAttributeValueGetter; }

#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59BFF0)
#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59C000)
#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59BFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCasterAttributeValueGetter_TypeDefinitionIndex = 15993;

	class ChimeraDuelCasterAttributeValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
