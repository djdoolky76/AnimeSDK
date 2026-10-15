#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IOHKECJHIFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16502C90)
#define IOHKECJHIFA_GET_LOADINGTRANSITION_OFFSET UNITYSDK_OFFSET(0x16502C80)

inline static constexpr unsigned int IOHKECJHIFA_TypeDefinitionIndex = 76060;

	class IOHKECJHIFA : public ::System::Object
	{
	public:
		::System::Boolean _LoadingTransition_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOHKECJHIFA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_LoadingTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHKECJHIFA_GET_LOADINGTRANSITION_OFFSET))(this);
		}

	};
