#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PDEBGMMGENG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A58E0)

	class PDEBGMMGENG : public ::System::Object
	{
	public:
		::System::Single EJGPHOGPEPC; // 0x10
		::System::UInt32 MGIHCDNKOLJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEBGMMGENG_CTOR_OFFSET))(this);
		}

	};
