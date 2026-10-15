#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABHLDDDNFLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8779F0)

	class ABHLDDDNFLB : public ::System::Object
	{
	public:
		::System::UInt32 HCDEOKNIGKG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHLDDDNFLB_CTOR_OFFSET))(this);
		}

	};
