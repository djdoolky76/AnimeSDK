#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLNCBOGAMFG_PlayerMotionUnreliableReason.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLNCBOGAMFG_GJNPOMCKPNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18681C70)
#define DLNCBOGAMFG_GJNPOMCKPNJ_DAPPBDOIOKG_OFFSET UNITYSDK_OFFSET(0x186839E0)
#define DLNCBOGAMFG_GJNPOMCKPNJ_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x18682ED0)
#define DLNCBOGAMFG_GJNPOMCKPNJ_LANKJCGAEML_OFFSET UNITYSDK_OFFSET(0x18683A40)
#define DLNCBOGAMFG_GJNPOMCKPNJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x18684710)

inline static constexpr unsigned int DLNCBOGAMFG_GJNPOMCKPNJ_TypeDefinitionIndex = 67724;

	class DLNCBOGAMFG_GJNPOMCKPNJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JKHOIOHEEHA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GJNPOMCKPNJ_CTOR_OFFSET))(this);
		}

		::System::Void LANKJCGAEML(::DLNCBOGAMFG_PlayerMotionUnreliableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLNCBOGAMFG_PlayerMotionUnreliableReason))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GJNPOMCKPNJ_LANKJCGAEML_OFFSET))(this, a1);
		}

		::System::Void DAPPBDOIOKG(::DLNCBOGAMFG_PlayerMotionUnreliableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLNCBOGAMFG_PlayerMotionUnreliableReason))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GJNPOMCKPNJ_DAPPBDOIOKG_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GJNPOMCKPNJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GJNPOMCKPNJ_HIDEJDELEEB_OFFSET))(this);
		}

	};
