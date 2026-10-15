#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDPIHJEBAEC;

#define MCGBNCFAFAL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C924C30)
#define MCGBNCFAFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924C90)

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
