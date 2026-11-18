#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define ONOOKOPBJHP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x12954120)
#define ONOOKOPBJHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129540B0)
#define ONOOKOPBJHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12953C20)
#define ONOOKOPBJHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12954BF0)
#define ONOOKOPBJHP_HECEOFNCALM_OFFSET UNITYSDK_OFFSET(0x12954B10)
#define ONOOKOPBJHP_HLMBPFDDLJO_OFFSET UNITYSDK_OFFSET(0x12954C80)
#define ONOOKOPBJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x129547E0)

inline static constexpr unsigned int ONOOKOPBJHP_TypeDefinitionIndex = 71511;

class ONOOKOPBJHP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* EDGAAHNGNCB; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* LIJNOAPJPEA; // 0x20
	::KCMIFNGABDC_1<::System::Single>* EPKJKHKFLGK; // 0x28
	::KCMIFNGABDC_1<::System::String*>* AMDPEEPELAP; // 0x30
	::KCMIFNGABDC_1<::System::Single>* OBCKMKOPAJD; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* NGPNIBFNPLK; // 0x40
	::KCMIFNGABDC_1<::System::Single>* OFLJKKKKLFK; // 0x48
	::CPABOPKIGAL* MMFNFINOFPN; // 0x50
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x58
	::KCMIFNGABDC_1<::System::Boolean>* MKPJHCKPMHF; // 0x60
	::KCMIFNGABDC_1<::System::Single>* DCJCPJMOMDI; // 0x68
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOOKOPBJHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Action* HECEOFNCALM(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::String* PMMOBMKAHPI)
	{
		return ((::System::Action*(*)(::PVOID, ::LGCNEDCMPKM&, ::System::String*))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_HECEOFNCALM_OFFSET))(this, BKBGPKNGNMF, PMMOBMKAHPI);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void HLMBPFDDLJO(::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ, ::System::String* PMMOBMKAHPI)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_HLMBPFDDLJO_OFFSET))(GDMNDDJHBDJ, PMMOBMKAHPI);
	}
};
