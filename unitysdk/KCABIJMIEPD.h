#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KCABIJMIEPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C421530)
#define KCABIJMIEPD_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1C421540)

inline static constexpr unsigned int KCABIJMIEPD_TypeDefinitionIndex = 5080;

	class KCABIJMIEPD : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCABIJMIEPD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCABIJMIEPD_GET_RETURNVALUE_OFFSET))(this);
		}

	};
