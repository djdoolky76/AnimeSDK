#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PHPLBNIMFBD;
namespace UnityEngine::Events { class UnityAction; }

#define PHPLBNIMFBD_KPFNOIKFFLK_FJHPJEDNJKG_OFFSET UNITYSDK_OFFSET(0x1C2A7B30)
#define PHPLBNIMFBD_KPFNOIKFFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7B20)

inline static constexpr unsigned int PHPLBNIMFBD_KPFNOIKFFLK_TypeDefinitionIndex = 53133;

class PHPLBNIMFBD_KPFNOIKFFLK : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* BDLKAKKCAII; // 0x10
	::PHPLBNIMFBD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_KPFNOIKFFLK__CTOR_OFFSET))(this);
	}

	::System::Void FJHPJEDNJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_KPFNOIKFFLK_FJHPJEDNJKG_OFFSET))(this);
	}
};
