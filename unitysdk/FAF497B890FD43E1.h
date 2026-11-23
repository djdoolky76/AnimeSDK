#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class BoxCollider; }

#define FAF497B890FD43E1_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x38664B0)
#define FAF497B890FD43E1_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38662A0)
#define FAF497B890FD43E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int FAF497B890FD43E1_TypeDefinitionIndex = 18008;

class FAF497B890FD43E1 : public ::System::Object
{
public:
	::UnityEngine::BoxCollider* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAF497B890FD43E1_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::FAF497B890FD43E1* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAF497B890FD43E1*))((::PBYTE)hIl2Cpp + FAF497B890FD43E1_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::BoxCollider* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + FAF497B890FD43E1__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
