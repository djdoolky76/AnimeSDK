#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJGEHDPFPI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPKIFGDCGBN_CTOR_OFFSET UNITYSDK_OFFSET(0x19304420)
#define IPKIFGDCGBN_GET_CAR_OFFSET UNITYSDK_OFFSET(0x193042C0)
#define IPKIFGDCGBN_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x193042E0)
#define IPKIFGDCGBN_GET_TRACKBESTTIMES_OFFSET UNITYSDK_OFFSET(0x19304300)
#define IPKIFGDCGBN_NINKMLPPAEC_OFFSET UNITYSDK_OFFSET(0x19304320)
#define IPKIFGDCGBN_PBLFFLAKGEB_OFFSET UNITYSDK_OFFSET(0x193043B0)
#define IPKIFGDCGBN_SET_CAR_OFFSET UNITYSDK_OFFSET(0x193042D0)
#define IPKIFGDCGBN_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x193042F0)
#define IPKIFGDCGBN_SET_TRACKBESTTIMES_OFFSET UNITYSDK_OFFSET(0x19304310)

inline static constexpr unsigned int IPKIFGDCGBN_TypeDefinitionIndex = 84484;

	class IPKIFGDCGBN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TrackBestTimes_k__BackingField; // 0x10
		::MDJGEHDPFPI* _Car_k__BackingField; // 0x18
		::System::UInt32 _DriverID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_CTOR_OFFSET))(this);
		}

		::MDJGEHDPFPI* get_Car()
		{
			return ((::MDJGEHDPFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_GET_CAR_OFFSET))(this);
		}

		::System::Void set_Car(::MDJGEHDPFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJGEHDPFPI*))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_SET_CAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_DriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_GET_DRIVERID_OFFSET))(this);
		}

		::System::Void set_DriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_SET_DRIVERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TrackBestTimes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_GET_TRACKBESTTIMES_OFFSET))(this);
		}

		::System::Void set_TrackBestTimes(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_SET_TRACKBESTTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 NINKMLPPAEC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_NINKMLPPAEC_OFFSET))(this, a1);
		}

		::System::Void PBLFFLAKGEB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IPKIFGDCGBN_PBLFFLAKGEB_OFFSET))(this, a1, a2);
		}

	};
