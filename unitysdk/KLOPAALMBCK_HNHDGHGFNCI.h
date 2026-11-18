#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KLOPAALMBCK;

#define KLOPAALMBCK_HNHDGHGFNCI_LOENBLGJBJO_OFFSET UNITYSDK_OFFSET(0x1FEE0ED0)
#define KLOPAALMBCK_HNHDGHGFNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE0C20)

inline static constexpr unsigned int KLOPAALMBCK_HNHDGHGFNCI_TypeDefinitionIndex = 96590;

class KLOPAALMBCK_HNHDGHGFNCI : public ::System::Object
{
public:
	::KLOPAALMBCK* KLHPEBKNIFB; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOPAALMBCK_HNHDGHGFNCI__CTOR_OFFSET))(this);
	}

	::System::Void LOENBLGJBJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOPAALMBCK_HNHDGHGFNCI_LOENBLGJBJO_OFFSET))(this);
	}
};
