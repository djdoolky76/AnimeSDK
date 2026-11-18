#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define EDBDJENIDEO_FDDBBHFFHDK_KINMLIPOMAK_OFFSET UNITYSDK_OFFSET(0x158943B0)
#define EDBDJENIDEO_FDDBBHFFHDK__CTOR_OFFSET UNITYSDK_OFFSET(0x158943A0)

inline static constexpr unsigned int EDBDJENIDEO_FDDBBHFFHDK_TypeDefinitionIndex = 90360;

class EDBDJENIDEO_FDDBBHFFHDK : public ::System::Object
{
public:
	::FJMFECAAPHD* KAICENLHIBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_FDDBBHFFHDK__CTOR_OFFSET))(this);
	}

	::System::Void KINMLIPOMAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_FDDBBHFFHDK_KINMLIPOMAK_OFFSET))(this);
	}
};
