#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class CHGHIALKMFM;
class IFOEBJMEFKG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFOEBJMEFKG___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B0D0)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET UNITYSDK_OFFSET(0x1BC2BB00)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__2_OFFSET UNITYSDK_OFFSET(0x1BC2BBB0)
#define IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_G__MATCHES_4_OFFSET UNITYSDK_OFFSET(0x1BC2BCE0)

inline static constexpr unsigned int IFOEBJMEFKG___c__DisplayClass51_0_TypeDefinitionIndex = 82223;

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

		::System::Object* __TryRecommendMoldForExam_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET))(this, a1);
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
