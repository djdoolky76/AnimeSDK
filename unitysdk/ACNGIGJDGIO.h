#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGGHACLFONG.h"
#include "unitysdk/System/Object.h"

#define ACNGIGJDGIO_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x144BD300)
#define ACNGIGJDGIO_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x144BD340)
#define ACNGIGJDGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x144BD3B0)

inline static constexpr unsigned int ACNGIGJDGIO_TypeDefinitionIndex = 80643;

class ACNGIGJDGIO : public ::System::Object
{
public:
	::System::Boolean LLAALPEHJLK; // 0x10
	::System::Boolean HFBPONNNLBA; // 0x11
	::System::Byte _padding0[0x2];
	::KGGHACLFONG BBCEFEECMGI; // 0x14
	::System::Int32 HLBKHEFJAPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNGIGJDGIO__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNGIGJDGIO_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNGIGJDGIO_ILEEFLAOOOM_OFFSET))(this);
	}
};
