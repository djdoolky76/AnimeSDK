#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"
class CelestialBodyData;
class JMOPOJEECEL;
class OrbitData;
class SolarSystemData;
class VisibilityConfig;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEKCKMDIAFL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1F26E0)
#define PEKCKMDIAFL_CHECPMPFLKO_OFFSET UNITYSDK_OFFSET(0xC1F21D0)
#define PEKCKMDIAFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F1A20)
#define PEKCKMDIAFL_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xC1F2530)
#define PEKCKMDIAFL_ELKJKBMKPCI_OFFSET UNITYSDK_OFFSET(0xC1F1E30)
#define PEKCKMDIAFL_IDFKLDPGPGJ_OFFSET UNITYSDK_OFFSET(0xC1F1CD0)
#define PEKCKMDIAFL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC1F1D50)
#define PEKCKMDIAFL_LLOBGPDAPMO_OFFSET UNITYSDK_OFFSET(0xC1F1A10)
#define PEKCKMDIAFL_LPGEDMCDNKB_OFFSET UNITYSDK_OFFSET(0xC1F25C0)
#define PEKCKMDIAFL_MHDNLFCBJNL_OFFSET UNITYSDK_OFFSET(0xC1F2660)
#define PEKCKMDIAFL_NBDLMJNCBHB_OFFSET UNITYSDK_OFFSET(0xC1F2000)

	class PEKCKMDIAFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::CelestialBodyType, ::JMOPOJEECEL*>* KBPCEOGIIFK; // 0x10
		::System::String* LGFPILJBFGB; // 0x18
		::VisibilityConfig* IBPEICLMMIP; // 0x20
		::SolarSystemData* JHEBNGOMJMA; // 0x28
		::System::Collections::Generic::List_1<::JMOPOJEECEL*>* PEGDCBNJFHB; // 0x30
		::System::Single HHKFNGHKIJI; // 0x38
		::System::Int32 IINFJDLEBOB; // 0x3C
		::System::Single OLOPGACLCLO; // 0x40
		::System::Single KJGPBILGDHK; // 0x44
		::System::Single MGHKIPANBID; // 0x48
		static ::System::Collections::Generic::List_1<::CelestialBodyType>** StaticGet_KMJABMECNPF()
		{
			return (::System::Collections::Generic::List_1<::CelestialBodyType>**)UnitySDK::FromName("", "PEKCKMDIAFL")->GetStaticField(0x6EFB0);
		}

		::System::Void _ctor(::RPG::Client::SolarSystemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SolarSystemConfig*))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEKCKMDIAFL_CCTOR_OFFSET))();
		}

		::SolarSystemData* LLOBGPDAPMO()
		{
			return ((::SolarSystemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_LLOBGPDAPMO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ELKJKBMKPCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_ELKJKBMKPCI_OFFSET))(this);
		}

		::System::Boolean IDFKLDPGPGJ(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_IDFKLDPGPGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBDLMJNCBHB(::JMOPOJEECEL* a1, ::CelestialBodyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMOPOJEECEL*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_NBDLMJNCBHB_OFFSET))(this, a1, a2);
		}

		::System::Void CHECPMPFLKO(::JMOPOJEECEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMOPOJEECEL*))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_CHECPMPFLKO_OFFSET))(this, a1);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void LPGEDMCDNKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_LPGEDMCDNKB_OFFSET))(this, a1);
		}

		::System::Void MHDNLFCBJNL(::VisibilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + PEKCKMDIAFL_MHDNLFCBJNL_OFFSET))(this, a1);
		}

	};
