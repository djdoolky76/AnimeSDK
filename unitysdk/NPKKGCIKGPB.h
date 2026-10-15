#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPKKGCIKGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3AED0)

	class NPKKGCIKGPB : public ::System::Object
	{
	public:
		::System::Int64 CLLLKOCPFCC; // 0x10
		::System::Int64 GEEJIGDIELL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKKGCIKGPB_CTOR_OFFSET))(this);
		}

	};
