#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FICMMDGCBOK__CTOR_OFFSET UNITYSDK_OFFSET(0x140F9A60)

inline static constexpr unsigned int FICMMDGCBOK_TypeDefinitionIndex = 91421;

class FICMMDGCBOK : public ::System::Object
{
public:
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::System::Int32 APKIKLPPHEA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICMMDGCBOK__CTOR_OFFSET))(this);
	}
};
