#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B0B7E60A111F056C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B0B7E60A111F056C_TypeDefinitionIndex = 20443;

class B0B7E60A111F056C : public ::System::Object
{
public:
	::UnityEngine::Vector3 B78356FBC32D74BD; // 0x10
	::UnityEngine::Vector3 EB211B01816ACA79; // 0x1C
	::UnityEngine::Vector3 BE38C169EB1E684C; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0B7E60A111F056C__CTOR_OFFSET))(this);
	}
};
