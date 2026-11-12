#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCCAJMENCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA4A40)

inline static constexpr unsigned int LCCAJMENCKJ_TypeDefinitionIndex = 65790;

	class LCCAJMENCKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCAJMENCKJ_CTOR_OFFSET))(this);
		}

	};
