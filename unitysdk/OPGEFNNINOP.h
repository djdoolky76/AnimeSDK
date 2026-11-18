#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define OPGEFNNINOP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F94CE0)
#define OPGEFNNINOP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F94900)
#define OPGEFNNINOP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F95990)
#define OPGEFNNINOP_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16F959A0)
#define OPGEFNNINOP_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16F94720)
#define OPGEFNNINOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F95690)

inline static constexpr unsigned int OPGEFNNINOP_TypeDefinitionIndex = 56986;

class OPGEFNNINOP : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* PFEHJDIGJHN; // 0x0
	::KCMIFNGABDC_1<::System::Single>* PFOOBOOOKAB; // 0x28
	::CPABOPKIGAL* DIIMPPOAGAE; // 0x30
	::KCMIFNGABDC_1<::System::Single>* DOLNCCCEPKN; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* KCAOAKAJLHJ; // 0x48
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* CMLBAJLABEE; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x60
	::KCMIFNGABDC_1<::System::Int32>* EOMHKBLHFCE; // 0x68
	::KCMIFNGABDC_1<::System::Int32>* NECKLFDHFNC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OPGEFNNINOP_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OPGEFNNINOP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OPGEFNNINOP_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
