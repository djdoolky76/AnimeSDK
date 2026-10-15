#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeValueGetter; }

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5720F0)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D572100)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5720A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeValueGetter_TypeDefinitionIndex = 15923;

	class ChimeraDuelEntityAttributeValueGetter : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
