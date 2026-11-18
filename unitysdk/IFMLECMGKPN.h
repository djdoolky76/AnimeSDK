#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define IFMLECMGKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1013B870)

inline static constexpr unsigned int IFMLECMGKPN_TypeDefinitionIndex = 59831;

class IFMLECMGKPN : public ::System::Object
{
public:
	::System::String* CPICDNJODHI; // 0x10
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x18
	::UnityEngine::Vector3 INCPJOAOHKH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMLECMGKPN__CTOR_OFFSET))(this);
	}
};
