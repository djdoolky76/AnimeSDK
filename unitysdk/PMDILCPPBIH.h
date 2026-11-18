#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANEAINCHGNO.h"
#include "unitysdk/OKJOHIDLNHG.h"
#include "unitysdk/System/Object.h"

class PFEOJDIJIBM;
namespace System { class String; }

#define PMDILCPPBIH_CBHGHHHODOI_OFFSET UNITYSDK_OFFSET(0x178EA9F0)
#define PMDILCPPBIH_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x178EABF0)
#define PMDILCPPBIH_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x178EA9B0)
#define PMDILCPPBIH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x178EAEC0)
#define PMDILCPPBIH_FABCPKEMFMK_OFFSET UNITYSDK_OFFSET(0x178EAAA0)
#define PMDILCPPBIH_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x178D9DE0)
#define PMDILCPPBIH_OEJAFAHIPIA_OFFSET UNITYSDK_OFFSET(0x178EAC80)
#define PMDILCPPBIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178EACD0)
#define PMDILCPPBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x178EAEB0)

inline static constexpr unsigned int PMDILCPPBIH_TypeDefinitionIndex = 62357;

class PMDILCPPBIH : public ::System::Object
{
public:
	::OKJOHIDLNHG IMGKNDIABPH; // 0x10
	::System::Int32 KFADOGCIMKJ; // 0x28
	::ANEAINCHGNO JMHCGPDPBIG; // 0x2C
	::System::Int32 HEOJMPBCJKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void CBHGHHHODOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_CBHGHHHODOI_OFFSET))(this);
	}

	::System::Void FABCPKEMFMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_FABCPKEMFMK_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void OEJAFAHIPIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_OEJAFAHIPIA_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDILCPPBIH_DPIHOJBBGLA_OFFSET))(this);
	}

	::PMDILCPPBIH* IBBLCAOMCKF(::ANEAINCHGNO CBBCJFPGBOK, ::System::Int32 BNLHPGHLKDK, ::System::Int32 DABCKBIAKHA, ::PFEOJDIJIBM* PAMCENHCPJL)
	{
		return ((::PMDILCPPBIH*(*)(::PVOID, ::ANEAINCHGNO, ::System::Int32, ::System::Int32, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + PMDILCPPBIH_IBBLCAOMCKF_OFFSET))(this, CBBCJFPGBOK, BNLHPGHLKDK, DABCKBIAKHA, PAMCENHCPJL);
	}
};
