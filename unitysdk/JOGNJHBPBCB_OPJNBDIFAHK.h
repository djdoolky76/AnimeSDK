#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEEFEEEFNOM.h"
#include "unitysdk/System/Object.h"

class NNIDEJCAIHF;
namespace System { template <typename T> class Predicate_1; }

#define JOGNJHBPBCB_OPJNBDIFAHK_CCHHDKCMJCK_OFFSET UNITYSDK_OFFSET(0x13CD3000)
#define JOGNJHBPBCB_OPJNBDIFAHK_FJNEPBPBAEG_OFFSET UNITYSDK_OFFSET(0x13CD30B0)
#define JOGNJHBPBCB_OPJNBDIFAHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD2FF0)

inline static constexpr unsigned int JOGNJHBPBCB_OPJNBDIFAHK_TypeDefinitionIndex = 87373;

class JOGNJHBPBCB_OPJNBDIFAHK : public ::System::Object
{
public:
	::NNIDEJCAIHF* HMMMOCJAEOA; // 0x10
	::System::Predicate_1<::GEEFEEEFNOM>* DLMJCFBENGB; // 0x18
	::System::Predicate_1<::GEEFEEEFNOM>* AMHGBGMOMLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGNJHBPBCB_OPJNBDIFAHK__CTOR_OFFSET))(this);
	}

	::System::Boolean CCHHDKCMJCK(::GEEFEEEFNOM EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEEFEEEFNOM))((::PBYTE)hIl2Cpp + JOGNJHBPBCB_OPJNBDIFAHK_CCHHDKCMJCK_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Boolean FJNEPBPBAEG(::GEEFEEEFNOM EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEEFEEEFNOM))((::PBYTE)hIl2Cpp + JOGNJHBPBCB_OPJNBDIFAHK_FJNEPBPBAEG_OFFSET))(this, EJCBEJMGFAJ);
	}
};
