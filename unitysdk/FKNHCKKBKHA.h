#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define FKNHCKKBKHA_BMFCJNAPAEA_OFFSET UNITYSDK_OFFSET(0x1D7A44F0)
#define FKNHCKKBKHA_CCAIBIFNCMC_OFFSET UNITYSDK_OFFSET(0x1D7A45F0)
#define FKNHCKKBKHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7A4670)
#define FKNHCKKBKHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A4400)
#define FKNHCKKBKHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7A4410)
#define FKNHCKKBKHA_EDBNLPMEHNF_OFFSET UNITYSDK_OFFSET(0x1D7A4540)
#define FKNHCKKBKHA_FPEFOCNIECF_OFFSET UNITYSDK_OFFSET(0x1D7A4580)
#define FKNHCKKBKHA_GET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1D7A4650)
#define FKNHCKKBKHA_GJPEJAAEKKG_OFFSET UNITYSDK_OFFSET(0x1D7A4460)
#define FKNHCKKBKHA_SET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1D7A4660)

inline static constexpr unsigned int FKNHCKKBKHA_TypeDefinitionIndex = 38264;

	class FKNHCKKBKHA : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::UInt32 BGBMKBIPCNI; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 _FightTimeStampMs_k__BackingField; // 0x28
		static ::System::UInt32* StaticGet_OLLGGKAEAIE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2FE0);
		}

		static ::System::Single* StaticGet_LKKCBDJHAAK()
		{
			return (::System::Single*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2FE4);
		}

		static ::System::UInt32* StaticGet_DONFOPCJMAA()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2FE8);
		}

		::System::Void _ctor(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNHCKKBKHA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_DISPOSE_OFFSET))(this);
		}

		::System::UInt64 GJPEJAAEKKG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_GJPEJAAEKKG_OFFSET))(this);
		}

		::System::Void BMFCJNAPAEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_BMFCJNAPAEA_OFFSET))(this, a1);
		}

		::System::UInt32 EDBNLPMEHNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_EDBNLPMEHNF_OFFSET))(this);
		}

		::System::Void FPEFOCNIECF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_FPEFOCNIECF_OFFSET))(this, a1);
		}

		::System::UInt64 CCAIBIFNCMC(::System::Int32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_CCAIBIFNCMC_OFFSET))(this, a1);
		}

		::System::UInt64 get_FightTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_GET_FIGHTTIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_FightTimeStampMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FKNHCKKBKHA_SET_FIGHTTIMESTAMPMS_OFFSET))(this, a1);
		}

	};
