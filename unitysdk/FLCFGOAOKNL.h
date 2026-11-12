#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OODEOHIDMEG;

#define FLCFGOAOKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC34A70)

inline static constexpr unsigned int FLCFGOAOKNL_TypeDefinitionIndex = 44864;

	class FLCFGOAOKNL : public ::System::Object
	{
	public:
		::OODEOHIDMEG* EJJOKPFJBDE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCFGOAOKNL_CTOR_OFFSET))(this);
		}

	};
