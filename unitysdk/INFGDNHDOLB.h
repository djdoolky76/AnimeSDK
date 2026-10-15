#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CAHKKMIFGGB.h"
class HBIAKFCLCIG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INFGDNHDOLB_CHFGBNFJEMA_OFFSET UNITYSDK_OFFSET(0x164EB600)
#define INFGDNHDOLB_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x164EB4D0)
#define INFGDNHDOLB_CTOR_OFFSET UNITYSDK_OFFSET(0x164EB7A0)

	class INFGDNHDOLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBIAKFCLCIG*>* FDHOAEDHKCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGDNHDOLB_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + INFGDNHDOLB_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

		::HBIAKFCLCIG* CHFGBNFJEMA(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::HBIAKFCLCIG*(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + INFGDNHDOLB_CHFGBNFJEMA_OFFSET))(this, a1, a2);
		}

	};
