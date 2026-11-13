#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBEPBMJMBNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B81F200)

inline static constexpr unsigned int MBEPBMJMBNI_TypeDefinitionIndex = 56703;

	class MBEPBMJMBNI : public ::System::Object
	{
	public:
		::System::Single MNANHJGEOOF; // 0x10
		::System::Single OJBECGIFBBJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEPBMJMBNI_CTOR_OFFSET))(this);
		}

	};
