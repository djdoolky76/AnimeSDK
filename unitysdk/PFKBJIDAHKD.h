#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PFKBJIDAHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDD8C0)

inline static constexpr unsigned int PFKBJIDAHKD_TypeDefinitionIndex = 28888;

class PFKBJIDAHKD : public ::System::Object
{
public:
	// static const ::System::UInt64 HILAHDENIBJ = 0x6A1168B1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKBJIDAHKD__CTOR_OFFSET))(this);
	}
};
