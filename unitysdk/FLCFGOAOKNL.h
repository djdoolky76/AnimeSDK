#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OODEOHIDMEG;

#define FLCFGOAOKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA710E0)

inline static constexpr unsigned int FLCFGOAOKNL_TypeDefinitionIndex = 43789;

	class FLCFGOAOKNL : public ::System::Object
	{
	public:
		::OODEOHIDMEG* EJJOKPFJBDE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCFGOAOKNL_CTOR_OFFSET))(this);
		}

	};
