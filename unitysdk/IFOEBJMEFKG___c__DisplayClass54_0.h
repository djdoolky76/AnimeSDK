#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class FCNLPLHOACB;
class IFOEBJMEFKG;
class OFIILELJGIE;
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IFOEBJMEFKG___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EC10)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__0_OFFSET UNITYSDK_OFFSET(0x15F2FE60)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__11_OFFSET UNITYSDK_OFFSET(0x15F2FF30)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__12_OFFSET UNITYSDK_OFFSET(0x15F30030)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__5_OFFSET UNITYSDK_OFFSET(0x15F2FEE0)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__ISPROGRESSMET_15_OFFSET UNITYSDK_OFFSET(0x15F30300)
#define IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__MATCHES_14_OFFSET UNITYSDK_OFFSET(0x15F300D0)

	class IFOEBJMEFKG___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>* indexOfFitAttributeType; // 0x10
		::IFOEBJMEFKG* __4__this; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>* indexOfNotMetTrait; // 0x20
		::FCNLPLHOACB* attrProgress; // 0x28
		::CHGHIALKMFM* mold; // 0x30
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* productTraits; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__5(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__5_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__11(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__11_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__12(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__12_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_g__Matches_14(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__MATCHES_14_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_g__IsProgressMet_15(::OFIILELJGIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__ISPROGRESSMET_15_OFFSET))(this, a1);
		}

	};
