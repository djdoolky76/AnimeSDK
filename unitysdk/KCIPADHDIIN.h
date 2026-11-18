#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KCIPADHDIIN_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x130AE2C0)
#define KCIPADHDIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x130AE300)

inline static constexpr unsigned int KCIPADHDIIN_TypeDefinitionIndex = 51424;

class KCIPADHDIIN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIPADHDIIN__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIPADHDIIN_FCMNHLDLJCI_OFFSET))(this);
	}
};
