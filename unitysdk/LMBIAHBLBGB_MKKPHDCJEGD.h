#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LMBIAHBLBGB_MKKPHDCJEGD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1637B470)
#define LMBIAHBLBGB_MKKPHDCJEGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1637B460)

inline static constexpr unsigned int LMBIAHBLBGB_MKKPHDCJEGD_TypeDefinitionIndex = 91863;

class LMBIAHBLBGB_MKKPHDCJEGD : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBIAHBLBGB_MKKPHDCJEGD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMBIAHBLBGB_MKKPHDCJEGD_LIDNPLMPHAL_OFFSET))(this, PIIPCLCCOIG);
	}
};
