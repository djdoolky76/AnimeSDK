#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFAIALMGAMH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A42D70)

	class EFAIALMGAMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAIALMGAMH_CTOR_OFFSET))(this);
		}

	};
