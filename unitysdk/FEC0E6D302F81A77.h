#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define FEC0E6D302F81A77__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FEC0E6D302F81A77_TypeDefinitionIndex = 17976;

class FEC0E6D302F81A77 : public ::System::Object
{
public:
	::UnityEngine::GameObject* E323ADE051A22B22; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEC0E6D302F81A77__CTOR_OFFSET))(this);
	}
};
