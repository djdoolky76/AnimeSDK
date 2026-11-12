#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDPIHJEBAEC;

#define MCGBNCFAFAL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAE6150)
#define MCGBNCFAFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE61B0)

inline static constexpr unsigned int MCGBNCFAFAL_TypeDefinitionIndex = 44353;

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
