#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define BHIOFPIHHDL_CTOR_OFFSET UNITYSDK_OFFSET(0x151FB370)
#define BHIOFPIHHDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x151FB2C0)
#define BHIOFPIHHDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x151FB320)

inline static constexpr unsigned int BHIOFPIHHDL_TypeDefinitionIndex = 58813;

	class BHIOFPIHHDL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIOFPIHHDL_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + BHIOFPIHHDL_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + BHIOFPIHHDL_GETHASHCODE_OFFSET))(this, a1);
		}

	};
