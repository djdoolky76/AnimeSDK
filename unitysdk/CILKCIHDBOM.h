#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CILKCIHDBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E4A50)

inline static constexpr unsigned int CILKCIHDBOM_TypeDefinitionIndex = 42346;

	class CILKCIHDBOM : public ::System::Object
	{
	public:
		::System::Single EGDEOHCENHC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKCIHDBOM_CTOR_OFFSET))(this);
		}

	};
