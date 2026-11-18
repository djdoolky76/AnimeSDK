#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
class LLEMDHGFDKG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJPBECKLALM_BBIOFKNMNPH_OFFSET UNITYSDK_OFFSET(0x1EB46140)
#define EJPBECKLALM_BCEMKGKKOIO_OFFSET UNITYSDK_OFFSET(0x1EB3A4B0)
#define EJPBECKLALM_DKCBBCIDNBH_OFFSET UNITYSDK_OFFSET(0x1EB3A470)
#define EJPBECKLALM_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB45DF0)
#define EJPBECKLALM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB45BF0)
#define EJPBECKLALM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EB45FC0)
#define EJPBECKLALM_PEOFJHEELFN_OFFSET UNITYSDK_OFFSET(0x1EB45E70)
#define EJPBECKLALM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB45F40)

inline static constexpr unsigned int EJPBECKLALM_TypeDefinitionIndex = 96544;

class EJPBECKLALM : public ::MHOBPPAJKIL
{
public:
	::LLEMDHGFDKG* AAOCANGHBDG; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* LEIPFBINHPG; // 0x20
	::System::Single HLMJGDACAOA; // 0x28
	::System::Boolean BPEGEMNPAOG; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single GHEHJCHLOOF; // 0x30
	::System::Int32 IKHAMEJGHIH; // 0x34
	::System::Single DKLHMJFIBPE; // 0x38
	::System::Single KKJKPJEGKJC; // 0x3C
	::System::Int32 HDAKCLPDNBB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPBECKLALM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + EJPBECKLALM_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPBECKLALM_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void BCEMKGKKOIO(::System::UInt32 MJAEGNMGHHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJPBECKLALM_BCEMKGKKOIO_OFFSET))(this, MJAEGNMGHHH);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJPBECKLALM_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PEOFJHEELFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPBECKLALM_PEOFJHEELFN_OFFSET))(this);
	}

	::System::Void DKCBBCIDNBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPBECKLALM_DKCBBCIDNBH_OFFSET))(this);
	}

	::System::Void BBIOFKNMNPH(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJPBECKLALM_BBIOFKNMNPH_OFFSET))(this, BKLGNCBNEGM);
	}
};
