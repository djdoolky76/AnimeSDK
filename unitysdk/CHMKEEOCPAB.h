#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBMCGPOLJHO.h"

#define CHMKEEOCPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CB60)
#define CHMKEEOCPAB_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1C54CB40)
#define CHMKEEOCPAB_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1C54CB50)

	class CHMKEEOCPAB : public ::LBMCGPOLJHO
	{
	public:
		::System::UInt32 _OrderID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKEEOCPAB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKEEOCPAB_GET_ORDERID_OFFSET))(this);
		}

		::System::Void set_OrderID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHMKEEOCPAB_SET_ORDERID_OFFSET))(this, a1);
		}

	};
