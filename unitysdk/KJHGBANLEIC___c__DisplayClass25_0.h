#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOAPDPLJFOJ;
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define KJHGBANLEIC___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB44AAA0)
#define KJHGBANLEIC___C__DISPLAYCLASS25_0___GETWEBRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0xB44F650)

inline static constexpr unsigned int KJHGBANLEIC___c__DisplayClass25_0_TypeDefinitionIndex = 59595;

	class KJHGBANLEIC___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::OOAPDPLJFOJ* info; // 0x10
		::System::Boolean isIPV6; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Net::IPEndPoint* __GetWebResponse_b__1(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__DISPLAYCLASS25_0___GETWEBRESPONSE_B__1_OFFSET))(this, a1, a2, a3);
		}

	};
