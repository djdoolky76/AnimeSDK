#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGOPCFPHAHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA653D0)

inline static constexpr unsigned int CGOPCFPHAHA_TypeDefinitionIndex = 44869;

	class CGOPCFPHAHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOPCFPHAHA_CTOR_OFFSET))(this);
		}

	};
