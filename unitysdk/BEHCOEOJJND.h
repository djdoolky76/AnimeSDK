#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LHCGANEGALN.h"

#define BEHCOEOJJND_LLCPLICBCCF_OFFSET UNITYSDK_OFFSET(0x143D1930)
#define BEHCOEOJJND__CTOR_OFFSET UNITYSDK_OFFSET(0x143D1E40)

inline static constexpr unsigned int BEHCOEOJJND_TypeDefinitionIndex = 55959;

class BEHCOEOJJND : public ::System::Object
{
public:
	::System::Int32 KFOHOLOGNDI; // 0x10
	::System::Int32 DGGKJKBPFID; // 0x14
	::System::Int32 KKADMLJGECD; // 0x18
	::System::Int16 HDFDKAMKLHG; // 0x1C
	::System::Int16 GOKKAFOMBFD; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHCOEOJJND__CTOR_OFFSET))(this);
	}

	::System::Void LLCPLICBCCF(::LHCGANEGALN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LHCGANEGALN&))((::PBYTE)hIl2Cpp + BEHCOEOJJND_LLCPLICBCCF_OFFSET))(this, AAOCANGHBDG);
	}
};
