#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGOPCFPHAHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E46E0)

inline static constexpr unsigned int CGOPCFPHAHA_TypeDefinitionIndex = 43794;

	class CGOPCFPHAHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOPCFPHAHA_CTOR_OFFSET))(this);
		}

	};
