#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLFMHDAMODH_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x125D7360)
#define GLFMHDAMODH_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x125D74E0)
#define GLFMHDAMODH__CTOR_OFFSET UNITYSDK_OFFSET(0x125D7420)

inline static constexpr unsigned int GLFMHDAMODH_TypeDefinitionIndex = 69904;

class GLFMHDAMODH : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ANKBLKBMDOK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFMHDAMODH__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFMHDAMODH_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFMHDAMODH_KHJELIBOECB_OFFSET))(this);
	}
};
