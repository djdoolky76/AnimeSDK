#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCNOCKMHBHE_FBJPGHOBCFL;
namespace System { class String; }

#define OCNOCKMHBHE_KFAODDKDBCK_LFDEDHBPPOM_OFFSET UNITYSDK_OFFSET(0xE1471B0)
#define OCNOCKMHBHE_KFAODDKDBCK__CTOR_OFFSET UNITYSDK_OFFSET(0xE145B70)

inline static constexpr unsigned int OCNOCKMHBHE_KFAODDKDBCK_TypeDefinitionIndex = 89192;

class OCNOCKMHBHE_KFAODDKDBCK : public ::System::Object
{
public:
	::OCNOCKMHBHE_FBJPGHOBCFL* FGBNBFHOKAA; // 0x10
	::System::String* DCFDCJNNEGB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_KFAODDKDBCK__CTOR_OFFSET))(this);
	}

	::System::Void LFDEDHBPPOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_KFAODDKDBCK_LFDEDHBPPOM_OFFSET))(this);
	}
};
