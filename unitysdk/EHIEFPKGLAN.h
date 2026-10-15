#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDKHADGLIPJ;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleConditionEvaluator; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHIEFPKGLAN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA506A0)
#define EHIEFPKGLAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50750)

inline static constexpr unsigned int EHIEFPKGLAN_TypeDefinitionIndex = 41985;

	class EHIEFPKGLAN : public ::System::Object
	{
	public:
		::System::String* OGOCEHKOEGP; // 0x10
		::RPG::GameCore::ChimeraBattleConditionEvaluator* EKIJFPIPCKF; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*>* FMFPFOJNGIH; // 0x20
		::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* JFKJFLLFEPJ; // 0x28
		::KDKHADGLIPJ* BKMIDNJKMBO; // 0x30
		::System::Int32 LAMLAOOJAPO; // 0x38
		::System::UInt32 LFKOCKPILLI; // 0x3C
		::System::Int32 CCEGPIGBPKC; // 0x40
		::System::UInt32 ILOHGDCGKFA; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIEFPKGLAN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIEFPKGLAN_CLEAR_OFFSET))(this);
		}

	};
