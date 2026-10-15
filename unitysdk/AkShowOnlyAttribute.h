#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define AKSHOWONLYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C12B0)

	class AkShowOnlyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSHOWONLYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
