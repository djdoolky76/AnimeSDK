#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CEMMGHAFEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC09BC0)
#define CEMMGHAFEGO_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1DC09BB0)

	class CEMMGHAFEGO : public ::System::Attribute
	{
	public:
		::System::Int32 _Order_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEMMGHAFEGO_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMMGHAFEGO_GET_ORDER_OFFSET))(this);
		}

	};
