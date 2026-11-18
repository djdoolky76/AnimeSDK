#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGCOBNECDL.h"
#include "unitysdk/NEDGGFHGKCM.h"

namespace System { class String; }

#define IHKKJBNMOGP_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x197C84D0)
#define IHKKJBNMOGP_MPCABDNEKJE_OFFSET UNITYSDK_OFFSET(0x197C84E0)
#define IHKKJBNMOGP__CTOR_OFFSET UNITYSDK_OFFSET(0x197C84C0)

inline static constexpr unsigned int IHKKJBNMOGP_TypeDefinitionIndex = 68137;

class IHKKJBNMOGP : public ::NEDGGFHGKCM
{
public:
	::System::Int32 _CKHAHKOJJBL_k__BackingField; // 0x20

	::System::Void _ctor(::CPGCOBNECDL OBNIAHNMHPF, ::System::String* HIAIKHDFCLN, ::System::Int32 APGMPFJEIHF)
	{
		return ((::System::Void(*)(::PVOID, ::CPGCOBNECDL, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + IHKKJBNMOGP__CTOR_OFFSET))(this, OBNIAHNMHPF, HIAIKHDFCLN, APGMPFJEIHF);
	}

	::System::Int32 MLBLHAFPBHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKKJBNMOGP_MLBLHAFPBHE_OFFSET))(this);
	}

	::System::Void MPCABDNEKJE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHKKJBNMOGP_MPCABDNEKJE_OFFSET))(this, EGEGIMGMJHN);
	}
};
