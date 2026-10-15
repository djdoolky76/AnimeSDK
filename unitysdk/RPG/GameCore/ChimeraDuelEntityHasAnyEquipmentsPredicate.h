#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityHasAnyEquipmentsPredicate; }

#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0060)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0070)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A0010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityHasAnyEquipmentsPredicate_TypeDefinitionIndex = 15920;

	class ChimeraDuelEntityHasAnyEquipmentsPredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::Il2CppArray<::System::UInt32>* ParticularEquipments; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
