#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGIMDEOHDHK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCCLCFGOFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EB3A0)
#define PCCLCFGOFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7EB2E0)
#define PCCLCFGOFEE_EFJBMCLFKOI_OFFSET UNITYSDK_OFFSET(0x1C7EB0D0)
#define PCCLCFGOFEE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C7EAB90)
#define PCCLCFGOFEE_LBEBOHNBCKL_OFFSET UNITYSDK_OFFSET(0x1C7EB1B0)
#define PCCLCFGOFEE_PECPDOBKAKP_OFFSET UNITYSDK_OFFSET(0x1C7EB240)

	class PCCLCFGOFEE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BGIMDEOHDHK*>* KHLEPFGIKMP; // 0x10
		::System::Collections::Generic::List_1<::BGIMDEOHDHK*>* OBCHNKJCPCI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void EFJBMCLFKOI(::BGIMDEOHDHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGIMDEOHDHK*))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_EFJBMCLFKOI_OFFSET))(this, a1);
		}

		::System::Void LBEBOHNBCKL(::BGIMDEOHDHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGIMDEOHDHK*))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_LBEBOHNBCKL_OFFSET))(this, a1);
		}

		::System::Void PECPDOBKAKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_PECPDOBKAKP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLCFGOFEE_DISPOSE_OFFSET))(this);
		}

	};
