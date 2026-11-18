#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HONMEMGPJBC;

#define JNJDDELLIAH_IJOMOFJNJED_AOHIGGHPKEA_OFFSET UNITYSDK_OFFSET(0x1309F5D0)
#define JNJDDELLIAH_IJOMOFJNJED__CTOR_OFFSET UNITYSDK_OFFSET(0x1309F5C0)

inline static constexpr unsigned int JNJDDELLIAH_IJOMOFJNJED_TypeDefinitionIndex = 52337;

class JNJDDELLIAH_IJOMOFJNJED : public ::System::Object
{
public:
	::System::Int32 OPNJBIKDJBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_IJOMOFJNJED__CTOR_OFFSET))(this);
	}

	::System::Void AOHIGGHPKEA(::HONMEMGPJBC* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::HONMEMGPJBC*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_IJOMOFJNJED_AOHIGGHPKEA_OFFSET))(this, PIIPCLCCOIG);
	}
};
