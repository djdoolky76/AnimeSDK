#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E945252ECE50FE4E;
namespace UnityEngine { class GameObject; }

#define F9435C4F7A4A31B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9435C4F7A4A31B9_TypeDefinitionIndex = 9591;

class F9435C4F7A4A31B9 : public ::System::Object
{
public:
	::E945252ECE50FE4E* A46FF0CFE99DDD18; // 0x10
	::UnityEngine::GameObject* B12F0F4EDEBD5F26; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9435C4F7A4A31B9__CTOR_OFFSET))(this);
	}
};
