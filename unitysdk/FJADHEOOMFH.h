#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IKCABGHHMOB;
class KLBOFKGJABG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJADHEOOMFH_CTOR_OFFSET UNITYSDK_OFFSET(0x157B49B0)
#define FJADHEOOMFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157B4AF0)
#define FJADHEOOMFH_EBMCFBKFLHB_1_OFFSET UNITYSDK_OFFSET(0x157B5250)
#define FJADHEOOMFH_EBMCFBKFLHB_OFFSET UNITYSDK_OFFSET(0x157B4DA0)
#define FJADHEOOMFH_EFBNOLEECCA_OFFSET UNITYSDK_OFFSET(0x157B51C0)
#define FJADHEOOMFH_GPGKDIPNIFL_OFFSET UNITYSDK_OFFSET(0x157B4EF0)
#define FJADHEOOMFH_HPDOOFODBHK_OFFSET UNITYSDK_OFFSET(0x157B52A0)
#define FJADHEOOMFH_KAHKIAALIJK_OFFSET UNITYSDK_OFFSET(0x157B5E80)
#define FJADHEOOMFH_MGNMILDDCHB_OFFSET UNITYSDK_OFFSET(0x157B4B80)
#define FJADHEOOMFH_PCONDAPOAFH_OFFSET UNITYSDK_OFFSET(0x157B6180)

	class FJADHEOOMFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::KLBOFKGJABG*>* HAHJCBCGBDL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* BJKFOIHIPPF; // 0x18
		::System::Single JDHLINNDIJD; // 0x20
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJADHEOOMFH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJADHEOOMFH_DISPOSE_OFFSET))(this);
		}

		::System::Void MGNMILDDCHB(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJADHEOOMFH_MGNMILDDCHB_OFFSET))(this, a1, a2);
		}

		::System::Void GPGKDIPNIFL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FJADHEOOMFH_GPGKDIPNIFL_OFFSET))(this, a1);
		}

		::System::Void EFBNOLEECCA(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FJADHEOOMFH_EFBNOLEECCA_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 EBMCFBKFLHB(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJADHEOOMFH_EBMCFBKFLHB_OFFSET))(this, a1);
		}

		static ::System::UInt64 EBMCFBKFLHB_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FJADHEOOMFH_EBMCFBKFLHB_1_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::IKCABGHHMOB*>* HPDOOFODBHK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::List_1<::IKCABGHHMOB*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJADHEOOMFH_HPDOOFODBHK_OFFSET))(this, a1);
		}

		::System::Void KAHKIAALIJK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJADHEOOMFH_KAHKIAALIJK_OFFSET))(this, a1);
		}

		::System::Single PCONDAPOAFH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FJADHEOOMFH_PCONDAPOAFH_OFFSET))(this);
		}

	};
