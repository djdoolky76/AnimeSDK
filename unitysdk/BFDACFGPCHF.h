#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFDACFGPCHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB160770)

inline static constexpr unsigned int BFDACFGPCHF_TypeDefinitionIndex = 80437;

	class BFDACFGPCHF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDACFGPCHF_CTOR_OFFSET))(this);
		}

	};
