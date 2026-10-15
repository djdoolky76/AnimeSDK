#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFAGEHPLMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70ECA0)

inline static constexpr unsigned int KFAGEHPLMJB_TypeDefinitionIndex = 36405;

	class KFAGEHPLMJB : public ::System::Object
	{
	public:
		::System::Boolean AMPNCBEFLNJ; // 0x10
		::System::Boolean BHKINGNEKCO; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single LDNPEIDDIDI; // 0x14
		::System::Int32 OLKHDHGNABP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAGEHPLMJB_CTOR_OFFSET))(this);
		}

	};
