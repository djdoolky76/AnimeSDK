#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DACFIOIMGBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2E40)
#define DACFIOIMGBK_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F2E50)

inline static constexpr unsigned int DACFIOIMGBK_TypeDefinitionIndex = 5081;

	class DACFIOIMGBK : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DACFIOIMGBK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACFIOIMGBK_GET_RETURNVALUE_OFFSET))(this);
		}

	};
