#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAPGDPIEBOD;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_PBAMBEGILJB_ALPFCMIKLFJ_OFFSET UNITYSDK_OFFSET(0x167FB980)
#define KFBAENHGMFB_PBAMBEGILJB__CTOR_OFFSET UNITYSDK_OFFSET(0x167FB970)

inline static constexpr unsigned int KFBAENHGMFB_PBAMBEGILJB_TypeDefinitionIndex = 78593;

class KFBAENHGMFB_PBAMBEGILJB : public ::System::Object
{
public:
	::System::Action_1<::CAPGDPIEBOD*>* DJCNCELJPOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PBAMBEGILJB__CTOR_OFFSET))(this);
	}

	::System::Void ALPFCMIKLFJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PBAMBEGILJB_ALPFCMIKLFJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
