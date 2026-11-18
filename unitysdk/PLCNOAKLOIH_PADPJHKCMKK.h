#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_PADPJHKCMKK_EICDBBPDNFM_OFFSET UNITYSDK_OFFSET(0x1D630460)
#define PLCNOAKLOIH_PADPJHKCMKK_JGDIFNGKAGA_OFFSET UNITYSDK_OFFSET(0x1D630470)
#define PLCNOAKLOIH_PADPJHKCMKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D630450)

inline static constexpr unsigned int PLCNOAKLOIH_PADPJHKCMKK_TypeDefinitionIndex = 89227;

class PLCNOAKLOIH_PADPJHKCMKK : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_PADPJHKCMKK__CTOR_OFFSET))(this);
	}

	::System::Void EICDBBPDNFM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_PADPJHKCMKK_EICDBBPDNFM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void JGDIFNGKAGA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_PADPJHKCMKK_JGDIFNGKAGA_OFFSET))(this, BHDNBGLCNOM);
	}
};
