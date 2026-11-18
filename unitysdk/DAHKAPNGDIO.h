#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DAHKAPNGDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1831EFE0)

inline static constexpr unsigned int DAHKAPNGDIO_TypeDefinitionIndex = 49727;

class DAHKAPNGDIO : public ::System::Object
{
public:
	::System::Int32 MAJCABLAAAC; // 0x10
	::UnityEngine::Vector3 OLCHHAMMOCL; // 0x14
	::System::Int32 CKELOFDFEEM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHKAPNGDIO__CTOR_OFFSET))(this);
	}
};
