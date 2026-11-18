#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPCJLIDIOHL;

#define KFGCLOPEGJO_EHGBOCFHPHO_AEPHIJEKFLE_OFFSET UNITYSDK_OFFSET(0x1515ABF0)
#define KFGCLOPEGJO_EHGBOCFHPHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1515ABE0)

inline static constexpr unsigned int KFGCLOPEGJO_EHGBOCFHPHO_TypeDefinitionIndex = 78961;

class KFGCLOPEGJO_EHGBOCFHPHO : public ::System::Object
{
public:
	::LPCJLIDIOHL* JFDEHHMKLFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_EHGBOCFHPHO__CTOR_OFFSET))(this);
	}

	::System::Boolean AEPHIJEKFLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_EHGBOCFHPHO_AEPHIJEKFLE_OFFSET))(this);
	}
};
