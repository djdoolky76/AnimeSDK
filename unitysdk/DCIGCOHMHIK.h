#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCIGCOHMHIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B16EE40)
#define DCIGCOHMHIK_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x1B16EE20)
#define DCIGCOHMHIK_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x1B16EE30)

inline static constexpr unsigned int DCIGCOHMHIK_TypeDefinitionIndex = 50772;

	class DCIGCOHMHIK : public ::System::Object
	{
	public:
		::System::Boolean _Handled_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIGCOHMHIK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIGCOHMHIK_GET_HANDLED_OFFSET))(this);
		}

		::System::Void set_Handled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCIGCOHMHIK_SET_HANDLED_OFFSET))(this, a1);
		}

	};
