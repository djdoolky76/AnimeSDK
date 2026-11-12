#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BIHGIFHFOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BC10)

inline static constexpr unsigned int BIHGIFHFOGJ_TypeDefinitionIndex = 44226;

	class BIHGIFHFOGJ : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHGIFHFOGJ_CTOR_OFFSET))(this);
		}

	};
