#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAAJDIINGCI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAAJDIINGCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BADFAC0)
#define NAAJDIINGCI_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BADFAA0)
#define NAAJDIINGCI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1BADFF60)
#define NAAJDIINGCI_HDLGFFJBALO_OFFSET UNITYSDK_OFFSET(0x1BAE0060)
#define NAAJDIINGCI_MKECGDEBNLD_OFFSET UNITYSDK_OFFSET(0x1BADFB70)
#define NAAJDIINGCI_MNNDHEAENDB_OFFSET UNITYSDK_OFFSET(0x1BAE0000)
#define NAAJDIINGCI_OPPINOGEEKH_OFFSET UNITYSDK_OFFSET(0x1BAE0120)
#define NAAJDIINGCI_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BADFAB0)

inline static constexpr unsigned int NAAJDIINGCI_TypeDefinitionIndex = 66058;

	class NAAJDIINGCI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PLGNDCKACCN; // 0x10
		static ::NAAJDIINGCI** StaticGet__Instance_k__BackingField()
		{
			return (::NAAJDIINGCI**)UnitySDK::FromName("", "NAAJDIINGCI")->GetStaticField(0x14F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAJDIINGCI_CTOR_OFFSET))(this);
		}

		static ::NAAJDIINGCI* get_Instance()
		{
			return ((::NAAJDIINGCI*(*)())((::PBYTE)hIl2Cpp + NAAJDIINGCI_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::NAAJDIINGCI* a1)
		{
			return ((::System::Void(*)(::NAAJDIINGCI*))((::PBYTE)hIl2Cpp + NAAJDIINGCI_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAJDIINGCI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean MNNDHEAENDB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAAJDIINGCI_MNNDHEAENDB_OFFSET))(this, a1);
		}

		::System::Boolean HDLGFFJBALO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NAAJDIINGCI_HDLGFFJBALO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OPPINOGEEKH(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAAJDIINGCI_OPPINOGEEKH_OFFSET))(this, a1);
		}

		::System::Void MKECGDEBNLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAJDIINGCI_MKECGDEBNLD_OFFSET))(this);
		}

	};
