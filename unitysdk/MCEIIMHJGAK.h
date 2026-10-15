#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCEIIMHJGAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924C20)

	class MCEIIMHJGAK : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEIIMHJGAK_CTOR_OFFSET))(this);
		}

	};
