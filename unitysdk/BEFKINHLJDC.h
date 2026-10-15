#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHCOBFJNNJB.h"
#include "unitysdk/System/Object.h"

#define BEFKINHLJDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B84D0)

inline static constexpr unsigned int BEFKINHLJDC_TypeDefinitionIndex = 42242;

	class BEFKINHLJDC : public ::System::Object
	{
	public:
		::MHCOBFJNNJB EFEFEJJCGHL; // 0x10
		::MHCOBFJNNJB DJBEBONPFDC; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFKINHLJDC_CTOR_OFFSET))(this);
		}

	};
