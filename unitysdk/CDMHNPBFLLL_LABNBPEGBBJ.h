#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/System/Object.h"

class KLKOCFCKHAB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CDMHNPBFLLL_LABNBPEGBBJ_DNABDBDOFPJ_OFFSET UNITYSDK_OFFSET(0x18DC6490)
#define CDMHNPBFLLL_LABNBPEGBBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6480)

inline static constexpr unsigned int CDMHNPBFLLL_LABNBPEGBBJ_TypeDefinitionIndex = 50439;

class CDMHNPBFLLL_LABNBPEGBBJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FAOMHBHONAP; // 0x10
	::KAPINBBMLDJ FKMHMOELCIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMHNPBFLLL_LABNBPEGBBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean DNABDBDOFPJ(::KLKOCFCKHAB* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::KLKOCFCKHAB*))((::PBYTE)hIl2Cpp + CDMHNPBFLLL_LABNBPEGBBJ_DNABDBDOFPJ_OFFSET))(this, EJCBEJMGFAJ);
	}
};
