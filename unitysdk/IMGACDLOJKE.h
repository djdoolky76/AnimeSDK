#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMGACDLOJKE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x13AAC4B0)
#define IMGACDLOJKE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x13AAC640)
#define IMGACDLOJKE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAC540)

inline static constexpr unsigned int IMGACDLOJKE_TypeDefinitionIndex = 85987;

class IMGACDLOJKE : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OJMIDFNDHBG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMGACDLOJKE__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMGACDLOJKE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMGACDLOJKE_KHJELIBOECB_OFFSET))(this);
	}
};
