#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BADJDJOAFBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AFFB0)

	class BADJDJOAFBM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADJDJOAFBM_CTOR_OFFSET))(this);
		}

	};
