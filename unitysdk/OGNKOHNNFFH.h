#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGNKOHNNFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9649E0)

inline static constexpr unsigned int OGNKOHNNFFH_TypeDefinitionIndex = 42135;

	class OGNKOHNNFFH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNKOHNNFFH_CTOR_OFFSET))(this);
		}

	};
