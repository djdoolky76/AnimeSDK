#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNMENBBJCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA52460)

inline static constexpr unsigned int CNMENBBJCAJ_TypeDefinitionIndex = 79650;

	class CNMENBBJCAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMENBBJCAJ_CTOR_OFFSET))(this);
		}

	};
