#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BHHAAIPKDCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A410)

	class BHHAAIPKDCP : public ::System::Object
	{
	public:
		::System::UInt32 NIDFIGFJJLL; // 0x10
		::System::UInt32 MODDEFGHOCD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHAAIPKDCP_CTOR_OFFSET))(this);
		}

	};
