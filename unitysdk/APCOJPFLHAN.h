#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
class MPJKPJAIOEM;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define APCOJPFLHAN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF77EBB0)
#define APCOJPFLHAN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF77E8E0)
#define APCOJPFLHAN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF77F220)
#define APCOJPFLHAN_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xF77F230)
#define APCOJPFLHAN_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xF77E6D0)
#define APCOJPFLHAN__CTOR_OFFSET UNITYSDK_OFFSET(0xF77F030)

inline static constexpr unsigned int APCOJPFLHAN_TypeDefinitionIndex = 92177;

class APCOJPFLHAN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NNPHKPPCIJL; // 0x28
	::MPJKPJAIOEM* GEPDFLONKOF; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* IMNEKEINNGK; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* MCOHIAOBMAH; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x48
	::KCMIFNGABDC_1<::System::Int32>* EBOFLJIGJFD; // 0x50
	::KCMIFNGABDC_1<::System::String*>* MHMKLMKLHIG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCOJPFLHAN__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + APCOJPFLHAN_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCOJPFLHAN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APCOJPFLHAN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCOJPFLHAN_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + APCOJPFLHAN_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
