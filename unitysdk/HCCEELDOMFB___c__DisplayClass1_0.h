#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define HCCEELDOMFB___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAC760)
#define HCCEELDOMFB___C__DISPLAYCLASS1_0__PINGBYUDPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1DDADBB0)

inline static constexpr unsigned int HCCEELDOMFB___c__DisplayClass1_0_TypeDefinitionIndex = 43965;

	class HCCEELDOMFB___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* ipEndPoints; // 0x10
		::System::Action* onCompleted; // 0x18
		::System::UInt64 timeout; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCEELDOMFB___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _PingByUdpAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCEELDOMFB___C__DISPLAYCLASS1_0__PINGBYUDPASYNC_B__0_OFFSET))(this);
		}

	};
