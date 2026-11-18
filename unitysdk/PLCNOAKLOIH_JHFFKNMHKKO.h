#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_JHFFKNMHKKO_DGJAHNBKHAL_OFFSET UNITYSDK_OFFSET(0x1A7F8ED0)
#define PLCNOAKLOIH_JHFFKNMHKKO_LAOJONMJMME_OFFSET UNITYSDK_OFFSET(0x1A7F8EC0)
#define PLCNOAKLOIH_JHFFKNMHKKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8EB0)

inline static constexpr unsigned int PLCNOAKLOIH_JHFFKNMHKKO_TypeDefinitionIndex = 89223;

class PLCNOAKLOIH_JHFFKNMHKKO : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JHFFKNMHKKO__CTOR_OFFSET))(this);
	}

	::System::Void LAOJONMJMME(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JHFFKNMHKKO_LAOJONMJMME_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DGJAHNBKHAL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JHFFKNMHKKO_DGJAHNBKHAL_OFFSET))(this, BHDNBGLCNOM);
	}
};
