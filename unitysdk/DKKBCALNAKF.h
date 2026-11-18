#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPAHOMDFCEH.h"
#include "unitysdk/FOCLHIFFIHK.h"
#include "unitysdk/NONPDKKBGOL.h"
#include "unitysdk/System/Object.h"

class MBNHGIMGNHE;

#define DKKBCALNAKF_AKMLFJCHJIB_OFFSET UNITYSDK_OFFSET(0x1E5E5680)
#define DKKBCALNAKF_BHLDDCBKMNH_OFFSET UNITYSDK_OFFSET(0x1E5E6230)
#define DKKBCALNAKF_BIJEIDOAFFI_OFFSET UNITYSDK_OFFSET(0x1E5E5D50)
#define DKKBCALNAKF_CCGGAJMDPEN_OFFSET UNITYSDK_OFFSET(0x1E5E5BB0)
#define DKKBCALNAKF_DKGIAMMNJKC_OFFSET UNITYSDK_OFFSET(0x1E5E6310)
#define DKKBCALNAKF_DPDLGFPMEBC_OFFSET UNITYSDK_OFFSET(0x1E5E5630)
#define DKKBCALNAKF_EAEFCPNDOML_OFFSET UNITYSDK_OFFSET(0x1E5E9620)
#define DKKBCALNAKF_KOKBEFNDDEM_OFFSET UNITYSDK_OFFSET(0x1E5E55D0)
#define DKKBCALNAKF_PPPJOBLDBIO_OFFSET UNITYSDK_OFFSET(0x1E5E9800)
#define DKKBCALNAKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E9290)
#define DKKBCALNAKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E6220)

inline static constexpr unsigned int DKKBCALNAKF_TypeDefinitionIndex = 34065;

class DKKBCALNAKF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_AGPPLIMMMGD()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DKKBCALNAKF_TypeDefinitionIndex)->GetStaticField(0x2A090);
	}
	static ::System::UInt32* StaticGet_NOAAEECCFLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DKKBCALNAKF_TypeDefinitionIndex)->GetStaticField(0x86D0);
	}
	::NONPDKKBGOL EOBJDEADDBE; // 0x10
	::System::UInt32 EAODDOOLDDF; // 0x14
	::System::UInt32 CIBHFIGMODN; // 0x18
	::System::UInt32 CECBBHKOIKA; // 0x1C
	::System::UInt32 PMMGOAJJPJB; // 0x20
	::System::Byte _padding0[0x4];
	::System::UInt64 JPJJJFCMGLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKBCALNAKF__CCTOR_OFFSET))();
	}

	::DPAHOMDFCEH AKMLFJCHJIB()
	{
		return ((::DPAHOMDFCEH(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_AKMLFJCHJIB_OFFSET))(this);
	}

	::System::Boolean DPDLGFPMEBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_DPDLGFPMEBC_OFFSET))(this);
	}

	::System::Boolean DKGIAMMNJKC(::MBNHGIMGNHE* CPNLILDAHJD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MBNHGIMGNHE*))((::PBYTE)hIl2Cpp + DKKBCALNAKF_DKGIAMMNJKC_OFFSET))(this, CPNLILDAHJD);
	}

	::System::Int64 BIJEIDOAFFI()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_BIJEIDOAFFI_OFFSET))(this);
	}

	::FOCLHIFFIHK CCGGAJMDPEN()
	{
		return ((::FOCLHIFFIHK(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_CCGGAJMDPEN_OFFSET))(this);
	}

	::System::Int64 PPPJOBLDBIO()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_PPPJOBLDBIO_OFFSET))(this);
	}

	::System::Boolean BHLDDCBKMNH(::MBNHGIMGNHE* CPNLILDAHJD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MBNHGIMGNHE*))((::PBYTE)hIl2Cpp + DKKBCALNAKF_BHLDDCBKMNH_OFFSET))(this, CPNLILDAHJD);
	}

	::System::Boolean KOKBEFNDDEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_KOKBEFNDDEM_OFFSET))(this);
	}

	::System::Boolean EAEFCPNDOML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKBCALNAKF_EAEFCPNDOML_OFFSET))(this);
	}
};
