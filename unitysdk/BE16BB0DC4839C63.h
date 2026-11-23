#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/F1B6E53C152C2519.h"

#define BE16BB0DC4839C63_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3808460)
#define BE16BB0DC4839C63__CTOR_OFFSET UNITYSDK_OFFSET(0x38086F0)

inline static constexpr unsigned int BE16BB0DC4839C63_TypeDefinitionIndex = 17860;

class BE16BB0DC4839C63 : public ::System::Object
{
public:
	::UnityEngine::F1B6E53C152C2519 BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::BE16BB0DC4839C63* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BE16BB0DC4839C63*))((::PBYTE)hIl2Cpp + BE16BB0DC4839C63_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::F1B6E53C152C2519 BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::F1B6E53C152C2519))((::PBYTE)hIl2Cpp + BE16BB0DC4839C63__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
