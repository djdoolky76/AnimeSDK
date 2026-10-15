#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGFHDEOIOKG.h"
#include "unitysdk/System/Object.h"

#define OKCMNGIELDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995250)

	class OKCMNGIELDI : public ::System::Object
	{
	public:
		::DGFHDEOIOKG BKEIHICLIKK; // 0x10
		::DGFHDEOIOKG ADCOPNEMJDB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCMNGIELDI_CTOR_OFFSET))(this);
		}

	};
