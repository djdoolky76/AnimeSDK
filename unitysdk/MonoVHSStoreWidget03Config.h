#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MONOVHSSTOREWIDGET03CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170EEF50)

inline static constexpr unsigned int MonoVHSStoreWidget03Config_TypeDefinitionIndex = 49776;

class MonoVHSStoreWidget03Config : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 ChangeFrame; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* AnimationName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVHSSTOREWIDGET03CONFIG__CTOR_OFFSET))(this);
	}
};
