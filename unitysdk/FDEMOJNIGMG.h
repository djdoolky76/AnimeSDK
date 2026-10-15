#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDEMOJNIGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x156D4D60)

	class FDEMOJNIGMG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEMOJNIGMG_CTOR_OFFSET))(this);
		}

	};
