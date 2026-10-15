#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityComparerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparer; }

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570350)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D570360)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeComparer_TypeDefinitionIndex = 15932;

	class ChimeraDuelEntityAttributeComparer : public ::RPG::GameCore::ChimeraDuelEntityComparerBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
