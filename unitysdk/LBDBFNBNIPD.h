#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LBDBFNBNIPD__CTOR_OFFSET UNITYSDK_OFFSET(0x126CAB80)

inline static constexpr unsigned int LBDBFNBNIPD_TypeDefinitionIndex = 47108;

class LBDBFNBNIPD : public ::System::Object
{
public:
	::System::String* HECCOOGLLEB; // 0x10
	::System::String* JIMBPBNLDHG; // 0x18
	::Foundation::AssetPath PABDGDPCMKF; // 0x20
	::System::String* OBLIPGMEKIG; // 0x30
	::System::Int32 ODPLNLMKJID; // 0x38
	::System::Int32 KEHNCKBIBFA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBFNBNIPD__CTOR_OFFSET))(this);
	}
};
