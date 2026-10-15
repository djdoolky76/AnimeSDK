#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HHPEBHHMKDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7F580)

inline static constexpr unsigned int HHPEBHHMKDJ_TypeDefinitionIndex = 25005;

	class HHPEBHHMKDJ : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPEBHHMKDJ_CTOR_OFFSET))(this);
		}

	};
