#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class FCNLPLHOACB;
class IFOEBJMEFKG;
class OFIILELJGIE;
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFOEBJMEFKG___C__DISPLAYCLASS52_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EBF0)
#define IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__0_OFFSET UNITYSDK_OFFSET(0x15F2F820)
#define IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__6_OFFSET UNITYSDK_OFFSET(0x15F2F8A0)
#define IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__ISPROGRESSMET_9_OFFSET UNITYSDK_OFFSET(0x15F2F9E0)
#define IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__MATCHES_8_OFFSET UNITYSDK_OFFSET(0x15F2F940)

inline static constexpr unsigned int IFOEBJMEFKG___c__DisplayClass52_0_TypeDefinitionIndex = 79449;

	class IFOEBJMEFKG___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::IFOEBJMEFKG* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>* indexOfNotMetAttributeType; // 0x18
		::FCNLPLHOACB* attrProgress; // 0x20
		::CHGHIALKMFM* mold; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS52_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryRecommendMoldForAttrNotMetOnly_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__0_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__6(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__6_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrNotMetOnly_g__Matches_8(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__MATCHES_8_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrNotMetOnly_g__IsProgressMet_9(::OFIILELJGIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__ISPROGRESSMET_9_OFFSET))(this, a1);
		}

	};
