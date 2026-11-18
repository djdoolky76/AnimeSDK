#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HFJMGFBNLLC__CTOR_OFFSET UNITYSDK_OFFSET(0x17E46F70)

inline static constexpr unsigned int HFJMGFBNLLC_TypeDefinitionIndex = 89273;

class HFJMGFBNLLC : public ::System::Object
{
public:
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single NKIJPLLGLKH; // 0x18
	::System::Boolean ECNOEHAKCMG; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single BIOGBPMINKI; // 0x20
	::System::Single IPIIBJKFDNB; // 0x24
	::System::Single KADFILKGMGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJMGFBNLLC__CTOR_OFFSET))(this);
	}
};
