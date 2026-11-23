#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"

namespace UnityEngine { class FAED0374422E783A; }

#define ACCE8E2D254895A9_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x18BF480)
#define ACCE8E2D254895A9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BF5C0)
#define ACCE8E2D254895A9__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF570)

inline static constexpr unsigned int ACCE8E2D254895A9_TypeDefinitionIndex = 1356;

class ACCE8E2D254895A9 : public ::A375536B9B082594
{
public:
	::System::Boolean BA660FF8245E2FAF; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single A09BDFB58F03FB5D; // 0x14
	::System::Boolean BAD658C8AA0844D2; // 0x18
	::System::Byte _padding1[0x3];
	::System::Single F2F03FA56C3B12AA; // 0x1C
	::System::Boolean F86CE46C4E82C941; // 0x20
	::System::Byte _padding2[0x3];
	::System::Single B4B7032B61434697; // 0x24
	::System::Boolean B9B18A371473E9B1; // 0x28
	::System::Byte _padding3[0x7];
	::UnityEngine::FAED0374422E783A* B5D51338938426A0; // 0x30
	::System::Boolean B8B1EA96A8DFB8CD; // 0x38

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCE8E2D254895A9_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCE8E2D254895A9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::ACCE8E2D254895A9* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::ACCE8E2D254895A9*))((::PBYTE)hIl2Cpp + ACCE8E2D254895A9__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
