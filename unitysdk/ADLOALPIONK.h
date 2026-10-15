#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ADLOALPIONK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAD190)

inline static constexpr unsigned int ADLOALPIONK_TypeDefinitionIndex = 25036;

	class ADLOALPIONK : public ::System::Attribute
	{
	public:
		::System::Boolean KOINDGMMIAP; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLOALPIONK_CTOR_OFFSET))(this, a1);
		}

	};
