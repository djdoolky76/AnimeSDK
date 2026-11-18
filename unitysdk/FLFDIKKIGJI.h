#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FLFDIKKIGJI_DICJPNONFNO_OFFSET UNITYSDK_OFFSET(0x1410BDA0)
#define FLFDIKKIGJI_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x1410BDB0)
#define FLFDIKKIGJI_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x1410BDC0)
#define FLFDIKKIGJI_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x1410BDD0)
#define FLFDIKKIGJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1410BD90)

inline static constexpr unsigned int FLFDIKKIGJI_TypeDefinitionIndex = 58177;

class FLFDIKKIGJI : public ::System::Object
{
public:
	::System::Object* _OIKODLNEIJB_k__BackingField; // 0x10
	::System::String* _IBEDOHPILNE_k__BackingField; // 0x18
	::System::String* _BDCEHJMGEDH_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLFDIKKIGJI__CTOR_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::String* DICJPNONFNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFDIKKIGJI_DICJPNONFNO_OFFSET))(this);
	}

	::System::Void DJFKOKBPKNI(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLFDIKKIGJI_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFDIKKIGJI_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Object* PEOEBEBFIJO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFDIKKIGJI_PEOEBEBFIJO_OFFSET))(this);
	}
};
