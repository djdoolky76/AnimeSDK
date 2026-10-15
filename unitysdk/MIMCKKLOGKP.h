#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define MIMCKKLOGKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB95E7A0)
#define MIMCKKLOGKP_EQUALS_OFFSET UNITYSDK_OFFSET(0xB95E6F0)
#define MIMCKKLOGKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB95E750)

inline static constexpr unsigned int MIMCKKLOGKP_TypeDefinitionIndex = 60088;

	class MIMCKKLOGKP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCKKLOGKP_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MIMCKKLOGKP_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MIMCKKLOGKP_GETHASHCODE_OFFSET))(this, a1);
		}

	};
