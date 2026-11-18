#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PNJDGHBEMLK_PAHOLFKGJDG;

#define PNJDGHBEMLK_PDAHMFMIAPC_CFBOFNPCDFI_OFFSET UNITYSDK_OFFSET(0x194BA3F0)
#define PNJDGHBEMLK_PDAHMFMIAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x194BA3E0)

inline static constexpr unsigned int PNJDGHBEMLK_PDAHMFMIAPC_TypeDefinitionIndex = 64967;

class PNJDGHBEMLK_PDAHMFMIAPC : public ::System::Object
{
public:
	::PNJDGHBEMLK_PAHOLFKGJDG* FGBNBFHOKAA; // 0x10
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PDAHMFMIAPC__CTOR_OFFSET))(this);
	}

	::System::Void CFBOFNPCDFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PDAHMFMIAPC_CFBOFNPCDFI_OFFSET))(this);
	}
};
