#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICBHGLKDANP.h"
#include "unitysdk/System/Object.h"

#define GLMDFAPBLJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA83810)

inline static constexpr unsigned int GLMDFAPBLJL_TypeDefinitionIndex = 42269;

	class GLMDFAPBLJL : public ::System::Object
	{
	public:
		::ICBHGLKDANP IHPOJNBBDPB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDFAPBLJL_CTOR_OFFSET))(this);
		}

	};
