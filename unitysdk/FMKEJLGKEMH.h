#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMKEJLGKEMH_AGJLAGMJPFP_OFFSET UNITYSDK_OFFSET(0x167D1040)
#define FMKEJLGKEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x167D1030)
#define FMKEJLGKEMH_EDEOEMBDFCM_OFFSET UNITYSDK_OFFSET(0x167D0FB0)
#define FMKEJLGKEMH_FCGFPHKDEBI_OFFSET UNITYSDK_OFFSET(0x167D1300)
#define FMKEJLGKEMH_FEPHIMHEDGL_OFFSET UNITYSDK_OFFSET(0x167D10C0)
#define FMKEJLGKEMH_OLPALFOGMBF_OFFSET UNITYSDK_OFFSET(0x167D11E0)

inline static constexpr unsigned int FMKEJLGKEMH_TypeDefinitionIndex = 67084;

	class FMKEJLGKEMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* EGGCADJJJOD; // 0x10
		::System::String* NHALJPDONCP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JOFJEIFLGBP; // 0x20
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

		::System::Boolean FEPHIMHEDGL(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_FEPHIMHEDGL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OLPALFOGMBF(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_OLPALFOGMBF_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCGFPHKDEBI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FMKEJLGKEMH_FCGFPHKDEBI_OFFSET))(this, a1, a2);
		}

	};
