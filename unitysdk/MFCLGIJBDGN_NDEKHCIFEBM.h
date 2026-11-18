#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MFCLGIJBDGN_NDEKHCIFEBM_DOKPHIFFAJP_OFFSET UNITYSDK_OFFSET(0x156A5330)
#define MFCLGIJBDGN_NDEKHCIFEBM__CTOR_OFFSET UNITYSDK_OFFSET(0x156A5320)

inline static constexpr unsigned int MFCLGIJBDGN_NDEKHCIFEBM_TypeDefinitionIndex = 71156;

class MFCLGIJBDGN_NDEKHCIFEBM : public ::System::Object
{
public:
	::System::String* OJBBANAIMHM; // 0x10
	::System::String* DCLOILBHFBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NDEKHCIFEBM__CTOR_OFFSET))(this);
	}

	::System::Void DOKPHIFFAJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NDEKHCIFEBM_DOKPHIFFAJP_OFFSET))(this);
	}
};
