#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLLODOABBLJ.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/ILHDJBLBBBD.h"

class KGBFLHNJHHN;

#define JDIMEODHAKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F3CA0)

inline static constexpr unsigned int JDIMEODHAKI_TypeDefinitionIndex = 16130;

class JDIMEODHAKI : public ::KLLODOABBLJ
{
public:
	::System::DateTime HJEOFHNNFPH; // 0x58
	::System::DateTime KGDMJCIGACJ; // 0x60

	::System::Void _ctor(::ILHDJBLBBBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ILHDJBLBBBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JDIMEODHAKI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}
};
