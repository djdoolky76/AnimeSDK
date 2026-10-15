#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGLEHLDOFPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BA2A0)

	class BGLEHLDOFPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEHLDOFPP_CTOR_OFFSET))(this);
		}

	};
