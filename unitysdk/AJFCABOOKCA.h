#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJFCABOOKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C58B9B0)

	class AJFCABOOKCA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFCABOOKCA_CTOR_OFFSET))(this);
		}

	};
