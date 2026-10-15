#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class IFOEBJMEFKG;
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFOEBJMEFKG___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EB80)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET UNITYSDK_OFFSET(0x15F2F590)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__2_OFFSET UNITYSDK_OFFSET(0x15F2F640)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_G__MATCHES_4_OFFSET UNITYSDK_OFFSET(0x15F2F770)

	class IFOEBJMEFKG___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* placedCountOfChip; // 0x10
		::CHGHIALKMFM* recommendMold; // 0x18
		::IFOEBJMEFKG* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Object* __TryRecommendMoldForExam_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET))(this, a1);
		}

		::CHGHIALKMFM* __TryRecommendMoldForExam_b__2(::System::Object* a1)
		{
			return ((::CHGHIALKMFM*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForExam_g__Matches_4(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_G__MATCHES_4_OFFSET))(this, a1);
		}

	};
