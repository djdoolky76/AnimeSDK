#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Object; }

#define NEJLIGKNHCC_GONOHDPNHKO_BDHDNDHLOHG_OFFSET UNITYSDK_OFFSET(0xBB67F20)
#define NEJLIGKNHCC_GONOHDPNHKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB67D90)
#define NEJLIGKNHCC_GONOHDPNHKO_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xBB672A0)
#define NEJLIGKNHCC_GONOHDPNHKO_GDOOKLDIKJP_OFFSET UNITYSDK_OFFSET(0xBB67E60)
#define NEJLIGKNHCC_GONOHDPNHKO_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xBB662E0)
#define NEJLIGKNHCC_GONOHDPNHKO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBB65690)
#define NEJLIGKNHCC_GONOHDPNHKO_NLDLDIJHIBF_OFFSET UNITYSDK_OFFSET(0xBB67E70)

	class NEJLIGKNHCC_GONOHDPNHKO : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<::System::Int64, ::System::Object*>* KHBICBDBAPC; // 0x10
		::System::Int32 JMCEABGIEGA; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 GBGOAGBNJGB; // 0x20
		::System::Int64 OAAMCJNIAME; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_HIDEJDELEEB_OFFSET))(this);
		}

		::Collections::Pooled::PooledDictionary_2<::System::Int64, ::System::Object*>* GDOOKLDIKJP()
		{
			return ((::Collections::Pooled::PooledDictionary_2<::System::Int64, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_GDOOKLDIKJP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::System::Int64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void BDHDNDHLOHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_BDHDNDHLOHG_OFFSET))(this);
		}

		static ::System::UInt64 NLDLDIJHIBF(::System::Int64 a1)
		{
			return ((::System::UInt64(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_GONOHDPNHKO_NLDLDIJHIBF_OFFSET))(a1);
		}

	};
