#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LJGMINPMINH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD4321C0)
#define LJGMINPMINH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD431F50)
#define LJGMINPMINH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD4329F0)
#define LJGMINPMINH_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xD432960)
#define LJGMINPMINH_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xD431E00)
#define LJGMINPMINH__CTOR_OFFSET UNITYSDK_OFFSET(0xD432780)

inline static constexpr unsigned int LJGMINPMINH_TypeDefinitionIndex = 64598;

class LJGMINPMINH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HLMGLKNCLOB; // 0x28
	::KCMIFNGABDC_1<::System::String*>* DNDKLICPDIH; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* GAKIDDIKBLD; // 0x38
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* LGOOKHKCNBP; // 0x48
	::KCMIFNGABDC_1<::System::String*>* HHGLDOKNPCK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGMINPMINH__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LJGMINPMINH_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGMINPMINH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJGMINPMINH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LJGMINPMINH_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGMINPMINH_GDEOPIBNOIN_OFFSET))(this);
	}
};
