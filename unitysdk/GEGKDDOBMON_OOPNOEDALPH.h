#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define GEGKDDOBMON_OOPNOEDALPH_KINMLIPOMAK_OFFSET UNITYSDK_OFFSET(0x15CE03E0)
#define GEGKDDOBMON_OOPNOEDALPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE03D0)

inline static constexpr unsigned int GEGKDDOBMON_OOPNOEDALPH_TypeDefinitionIndex = 58058;

class GEGKDDOBMON_OOPNOEDALPH : public ::System::Object
{
public:
	::FJMFECAAPHD* KAICENLHIBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_OOPNOEDALPH__CTOR_OFFSET))(this);
	}

	::System::Void KINMLIPOMAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_OOPNOEDALPH_KINMLIPOMAK_OFFSET))(this);
	}
};
