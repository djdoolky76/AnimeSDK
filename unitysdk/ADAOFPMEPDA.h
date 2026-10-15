#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADAOFPMEPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877F10)

	class ADAOFPMEPDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAOFPMEPDA_CTOR_OFFSET))(this);
		}

	};
