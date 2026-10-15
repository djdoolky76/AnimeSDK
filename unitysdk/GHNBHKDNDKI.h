#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GHNBHKDNDKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2E60)
#define GHNBHKDNDKI_GET_PARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F2E70)

inline static constexpr unsigned int GHNBHKDNDKI_TypeDefinitionIndex = 5084;

	class GHNBHKDNDKI : public ::System::Attribute
	{
	public:
		::System::Boolean _ParameterValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHNBHKDNDKI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ParameterValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNBHKDNDKI_GET_PARAMETERVALUE_OFFSET))(this);
		}

	};
