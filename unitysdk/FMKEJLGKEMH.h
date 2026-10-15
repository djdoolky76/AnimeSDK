#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMKEJLGKEMH_AGJLAGMJPFP_OFFSET UNITYSDK_OFFSET(0x15860C80)
#define FMKEJLGKEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15860C70)
#define FMKEJLGKEMH_EDEOEMBDFCM_OFFSET UNITYSDK_OFFSET(0x15860BF0)

	class FMKEJLGKEMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JOFJEIFLGBP; // 0x10
		::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* EGGCADJJJOD; // 0x18
		::System::String* NHALJPDONCP; // 0x20
		::System::String* NGPMDMBFNKA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_CTOR_OFFSET))(this);
		}

		static ::FMKEJLGKEMH* EDEOEMBDFCM(::System::String* a1)
		{
			return ((::FMKEJLGKEMH*(*)(::System::String*))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_EDEOEMBDFCM_OFFSET))(a1);
		}

		static ::FMKEJLGKEMH* AGJLAGMJPFP(::System::String* a1)
		{
			return ((::FMKEJLGKEMH*(*)(::System::String*))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_AGJLAGMJPFP_OFFSET))(a1);
		}

	};
