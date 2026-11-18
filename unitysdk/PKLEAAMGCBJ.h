#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFAACKDKFHD.h"

namespace System { class Object; }
namespace System { class String; }

#define PKLEAAMGCBJ_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x15574570)
#define PKLEAAMGCBJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15574D20)
#define PKLEAAMGCBJ_CBLNALGHKEJ_OFFSET UNITYSDK_OFFSET(0x15574D30)
#define PKLEAAMGCBJ_CFNNJLGADIB_1_OFFSET UNITYSDK_OFFSET(0x15574640)
#define PKLEAAMGCBJ_CFNNJLGADIB_OFFSET UNITYSDK_OFFSET(0x155745A0)
#define PKLEAAMGCBJ_HDFANEKMPNN_OFFSET UNITYSDK_OFFSET(0x15574580)
#define PKLEAAMGCBJ_JIJPDHHCKDC_OFFSET UNITYSDK_OFFSET(0x15574590)
#define PKLEAAMGCBJ_JKJIHCNOJHO_OFFSET UNITYSDK_OFFSET(0x15574D50)
#define PKLEAAMGCBJ_KPCPNAKDALF_OFFSET UNITYSDK_OFFSET(0x15573C50)
#define PKLEAAMGCBJ_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x15574560)
#define PKLEAAMGCBJ_ONATTACH_OFFSET UNITYSDK_OFFSET(0x15573BC0)
#define PKLEAAMGCBJ_ONDETACH_OFFSET UNITYSDK_OFFSET(0x15573FB0)
#define PKLEAAMGCBJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15574420)
#define PKLEAAMGCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15574520)

inline static constexpr unsigned int PKLEAAMGCBJ_TypeDefinitionIndex = 80367;

class PKLEAAMGCBJ
{
public:
	::System::Object* _BMNPJKIGMIO_k__BackingField; // 0x28
	::System::Byte _padding0[0x18];
	::System::String* LDNINLGGHCG; // 0x48
	::System::Boolean _PLJEAGLLAJM_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Boolean HDFANEKMPNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_HDFANEKMPNN_OFFSET))(this);
	}

	::System::Void JIJPDHHCKDC(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_JIJPDHHCKDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CFNNJLGADIB(::System::String* KCEIKDDANLF, ::MFAACKDKFHD IENKBIFKKJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MFAACKDKFHD))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_CFNNJLGADIB_OFFSET))(this, KCEIKDDANLF, IENKBIFKKJB);
	}

	::System::Boolean CFNNJLGADIB_1(::System::UInt32 AOCOIDIMLIH, ::System::String* KCEIKDDANLF, ::MFAACKDKFHD IENKBIFKKJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::MFAACKDKFHD))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_CFNNJLGADIB_1_OFFSET))(this, AOCOIDIMLIH, KCEIKDDANLF, IENKBIFKKJB);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Boolean KPCPNAKDALF(::System::UInt32 AOCOIDIMLIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_KPCPNAKDALF_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Object* CBLNALGHKEJ()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_CBLNALGHKEJ_OFFSET))(this);
	}

	::System::Void JKJIHCNOJHO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLEAAMGCBJ_JKJIHCNOJHO_OFFSET))(this, EGEGIMGMJHN);
	}
};
