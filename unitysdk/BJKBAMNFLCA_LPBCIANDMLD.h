#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { class String; }

#define BJKBAMNFLCA_LPBCIANDMLD_IBLNIAIFOHL_OFFSET UNITYSDK_OFFSET(0x10E081D0)
#define BJKBAMNFLCA_LPBCIANDMLD__CTOR_OFFSET UNITYSDK_OFFSET(0x10E081C0)

inline static constexpr unsigned int BJKBAMNFLCA_LPBCIANDMLD_TypeDefinitionIndex = 41570;

class BJKBAMNFLCA_LPBCIANDMLD : public ::System::Object
{
public:
	::System::String* ODFGKBEFELF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::JJPDGONFBFB* LJBPECKCCEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LPBCIANDMLD__CTOR_OFFSET))(this);
	}

	::System::Void IBLNIAIFOHL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LPBCIANDMLD_IBLNIAIFOHL_OFFSET))(this, BHDNBGLCNOM);
	}
};
