#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DEBUGTEXTATLASSETTER_START_OFFSET UNITYSDK_OFFSET(0x200438A0)
#define DEBUGTEXTATLASSETTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20043A90)
#define DEBUGTEXTATLASSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x20043AD0)

inline static constexpr unsigned int DebugTextAtlasSetter_TypeDefinitionIndex = 96714;

class DebugTextAtlasSetter : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER_UPDATE_OFFSET))(this);
	}
};
