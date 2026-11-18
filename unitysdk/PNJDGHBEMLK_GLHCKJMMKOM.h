#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PNJDGHBEMLK_GIEAHCDAOKN;

#define PNJDGHBEMLK_GLHCKJMMKOM_MMNFBEAMDEE_OFFSET UNITYSDK_OFFSET(0x13729250)
#define PNJDGHBEMLK_GLHCKJMMKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x13729240)

inline static constexpr unsigned int PNJDGHBEMLK_GLHCKJMMKOM_TypeDefinitionIndex = 64982;

class PNJDGHBEMLK_GLHCKJMMKOM : public ::System::Object
{
public:
	::PNJDGHBEMLK_GIEAHCDAOKN* FGBNBFHOKAA; // 0x10
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GLHCKJMMKOM__CTOR_OFFSET))(this);
	}

	::System::Void MMNFBEAMDEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GLHCKJMMKOM_MMNFBEAMDEE_OFFSET))(this);
	}
};
