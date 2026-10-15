#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGDNGNMHBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98D030)

	class OGDNGNMHBIN : public ::System::Object
	{
	public:
		::System::Int32 LGJHFLOINHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDNGNMHBIN_CTOR_OFFSET))(this);
		}

	};
