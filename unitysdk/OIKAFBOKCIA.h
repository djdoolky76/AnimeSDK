#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define OIKAFBOKCIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995120)

	class OIKAFBOKCIA : public ::System::Object
	{
	public:
		::System::ValueTuple LBMFPCIBMAC; // 0x10
		::System::UInt32 JCAEANLAGMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKAFBOKCIA_CTOR_OFFSET))(this);
		}

	};
