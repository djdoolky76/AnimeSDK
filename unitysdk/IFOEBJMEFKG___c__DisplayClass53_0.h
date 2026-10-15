#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class IFOEBJMEFKG;
class OFIILELJGIE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IFOEBJMEFKG___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EC00)
#define IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__1_OFFSET UNITYSDK_OFFSET(0x15F2FA20)
#define IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__7_OFFSET UNITYSDK_OFFSET(0x15F2FA70)
#define IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__8_OFFSET UNITYSDK_OFFSET(0x15F2FAF0)
#define IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_G__ISPROGRESSMET_12_OFFSET UNITYSDK_OFFSET(0x15F2FDB0)
#define IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_G__MATCHES_11_OFFSET UNITYSDK_OFFSET(0x15F2FBF0)

	class IFOEBJMEFKG___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::IFOEBJMEFKG* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>* indexOfNotMetTrait; // 0x18
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* productTraits; // 0x20
		::CHGHIALKMFM* mold; // 0x28
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* targetAttributeTypes; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__1(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__7(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__7_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForTraitNotMetOnly_b__8(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__8_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_g__Matches_11(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_G__MATCHES_11_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_g__IsProgressMet_12(::OFIILELJGIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS53_0___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_G__ISPROGRESSMET_12_OFFSET))(this, a1);
		}

	};
