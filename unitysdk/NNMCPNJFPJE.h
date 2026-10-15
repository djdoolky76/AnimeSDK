#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNMCPNJFPJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCC290)

	class NNMCPNJFPJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMCPNJFPJE_CTOR_OFFSET))(this);
		}

	};
