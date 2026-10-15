#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define FKNHCKKBKHA_BMFCJNAPAEA_OFFSET UNITYSDK_OFFSET(0x1C5F4B90)
#define FKNHCKKBKHA_CCAIBIFNCMC_OFFSET UNITYSDK_OFFSET(0x1C5F4C90)
#define FKNHCKKBKHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5F4D10)
#define FKNHCKKBKHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F4AA0)
#define FKNHCKKBKHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5F4AB0)
#define FKNHCKKBKHA_EDBNLPMEHNF_OFFSET UNITYSDK_OFFSET(0x1C5F4BE0)
#define FKNHCKKBKHA_FPEFOCNIECF_OFFSET UNITYSDK_OFFSET(0x1C5F4C20)
#define FKNHCKKBKHA_GET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1C5F4CF0)
#define FKNHCKKBKHA_GJPEJAAEKKG_OFFSET UNITYSDK_OFFSET(0x1C5F4B00)
#define FKNHCKKBKHA_SET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1C5F4D00)

inline static constexpr unsigned int FKNHCKKBKHA_TypeDefinitionIndex = 37336;

	class FKNHCKKBKHA : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x18
		::System::UInt64 _FightTimeStampMs_k__BackingField; // 0x20
		::System::UInt32 BGBMKBIPCNI; // 0x28
		static ::System::Single* StaticGet_LKKCBDJHAAK()
		{
			return (::System::Single*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2760);
		}

		static ::System::UInt32* StaticGet_OLLGGKAEAIE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2764);
		}

		static ::System::UInt32* StaticGet_DONFOPCJMAA()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKNHCKKBKHA")->GetStaticField(0x2768);
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
