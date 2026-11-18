#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LIIPPIELCMA_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F380B90)

inline static constexpr unsigned int LIIPPIELCMA_Settings_TypeDefinitionIndex = 8633;

class LIIPPIELCMA_Settings : public ::System::Object
{
public:
	::System::Boolean supportsGyroscope; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 gravity; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPPIELCMA_SETTINGS__CTOR_OFFSET))(this);
	}
};
