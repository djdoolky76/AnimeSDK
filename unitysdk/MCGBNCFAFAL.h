#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDPIHJEBAEC;

#define MCGBNCFAFAL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8F6820)
#define MCGBNCFAFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F6880)

inline static constexpr unsigned int MCGBNCFAFAL_TypeDefinitionIndex = 43372;

	class MCGBNCFAFAL : public ::System::Object
	{
	public:
		::PDPIHJEBAEC* GJBOKLDCKEG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGBNCFAFAL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGBNCFAFAL_CLEAR_OFFSET))(this);
		}

	};
