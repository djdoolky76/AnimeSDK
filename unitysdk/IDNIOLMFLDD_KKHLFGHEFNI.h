#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDNIOLMFLDD;

#define IDNIOLMFLDD_KKHLFGHEFNI_CCLIDECGBCE_OFFSET UNITYSDK_OFFSET(0xEA17D60)
#define IDNIOLMFLDD_KKHLFGHEFNI__CTOR_OFFSET UNITYSDK_OFFSET(0xEA17D50)

inline static constexpr unsigned int IDNIOLMFLDD_KKHLFGHEFNI_TypeDefinitionIndex = 38331;

class IDNIOLMFLDD_KKHLFGHEFNI : public ::System::Object
{
public:
	::IDNIOLMFLDD* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_KKHLFGHEFNI__CTOR_OFFSET))(this);
	}

	::System::Void CCLIDECGBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_KKHLFGHEFNI_CCLIDECGBCE_OFFSET))(this);
	}
};
