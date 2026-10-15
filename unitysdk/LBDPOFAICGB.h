#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBDPOFAICGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FBF90)

	class LBDPOFAICGB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPOFAICGB_CTOR_OFFSET))(this);
		}

	};
