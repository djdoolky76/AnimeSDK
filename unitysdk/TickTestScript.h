#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BDLKAHNBCCM;
namespace UnityEngine { class Animator; }

#define TICKTESTSCRIPT_START_OFFSET UNITYSDK_OFFSET(0x1C6BFCA0)
#define TICKTESTSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BFDB0)

inline static constexpr unsigned int TickTestScript_TypeDefinitionIndex = 42757;

class TickTestScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single tickThreshold; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::Animator* animator; // 0x20
	::BDLKAHNBCCM* tickObject; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TICKTESTSCRIPT__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TICKTESTSCRIPT_START_OFFSET))(this);
	}
};
