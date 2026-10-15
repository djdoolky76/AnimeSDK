#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EHFIOFCHLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50510)

	class EHFIOFCHLMN : public ::System::Object
	{
	public:
		::System::Int32 EPCDLHFFBLI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFIOFCHLMN_CTOR_OFFSET))(this);
		}

	};
