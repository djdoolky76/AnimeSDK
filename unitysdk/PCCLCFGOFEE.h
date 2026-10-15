#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGIMDEOHDHK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCCLCFGOFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BD230)
#define PCCLCFGOFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7BD170)
#define PCCLCFGOFEE_EFJBMCLFKOI_OFFSET UNITYSDK_OFFSET(0x1C7BCF60)
#define PCCLCFGOFEE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C7BCA20)
#define PCCLCFGOFEE_LBEBOHNBCKL_OFFSET UNITYSDK_OFFSET(0x1C7BD040)
#define PCCLCFGOFEE_PECPDOBKAKP_OFFSET UNITYSDK_OFFSET(0x1C7BD0D0)

inline static constexpr unsigned int PCCLCFGOFEE_TypeDefinitionIndex = 37116;

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
