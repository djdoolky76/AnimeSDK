#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDGMAFPHJKH.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/KMKGILGDJLC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KJHGEEHLEJP_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x85CF60)

inline static constexpr unsigned int KJHGEEHLEJP_TypeDefinitionIndex = 93640;

struct alignas(4) KJHGEEHLEJP
{
	::BDGMAFPHJKH JAICKFPPOEO; // 0x10
	::System::Int32 CLACNEMIOBA; // 0x14
	::JGLIFHIAIEH MALHGAFHLNK; // 0x18
	::System::Int32 ICEGFHFAEKN; // 0x20
	::KMKGILGDJLC ENAMJFJBEHO; // 0x24
	::System::UInt32 AOGNNJLKHGL; // 0x28

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGEEHLEJP_JGGHNLBNKHA_OFFSET))(this);
	}
};
