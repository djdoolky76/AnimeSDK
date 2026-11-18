#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define POFKFKEHGHE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x194BB1A0)
#define POFKFKEHGHE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x194BAE80)
#define POFKFKEHGHE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x194BB900)
#define POFKFKEHGHE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x194BB990)
#define POFKFKEHGHE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x194BAD90)
#define POFKFKEHGHE__CTOR_OFFSET UNITYSDK_OFFSET(0x194BB680)

inline static constexpr unsigned int POFKFKEHGHE_TypeDefinitionIndex = 62713;

class POFKFKEHGHE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AFFJLOEPLFI; // 0x18
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x30
	::CPABOPKIGAL* DGLPCINAMAC; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* NCOGBILBLHO; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JABMGCCFGBE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKFKEHGHE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + POFKFKEHGHE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKFKEHGHE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + POFKFKEHGHE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKFKEHGHE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + POFKFKEHGHE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
