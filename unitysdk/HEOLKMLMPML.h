#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEOLKMLMPML_CTOR_OFFSET UNITYSDK_OFFSET(0x15C63D00)

	class HEOLKMLMPML : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLKMLMPML_CTOR_OFFSET))(this);
		}

	};
