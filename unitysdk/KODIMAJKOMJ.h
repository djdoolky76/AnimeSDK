#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KODIMAJKOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B1ED0)

inline static constexpr unsigned int KODIMAJKOMJ_TypeDefinitionIndex = 25484;

	class KODIMAJKOMJ : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODIMAJKOMJ_CTOR_OFFSET))(this);
		}

	};
