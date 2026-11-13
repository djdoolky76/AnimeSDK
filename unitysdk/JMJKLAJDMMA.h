#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JMJKLAJDMMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1280)

inline static constexpr unsigned int JMJKLAJDMMA_TypeDefinitionIndex = 76648;

	class JMJKLAJDMMA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJKLAJDMMA_CTOR_OFFSET))(this);
		}

	};
