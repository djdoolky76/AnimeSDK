#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MHMFINLCNFN.h"

class BIJIGJPHCED;
class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define ALGFLKFNMPF_BCECPBBBMMB_OFFSET UNITYSDK_OFFSET(0x12666AA0)
#define ALGFLKFNMPF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x126666A0)
#define ALGFLKFNMPF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12666480)
#define ALGFLKFNMPF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x126673B0)
#define ALGFLKFNMPF_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x12667320)
#define ALGFLKFNMPF_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x12666330)
#define ALGFLKFNMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x126670E0)

inline static constexpr unsigned int ALGFLKFNMPF_TypeDefinitionIndex = 41528;

class ALGFLKFNMPF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x28
	::HOCDHMEPPEG DJBBALOPPNE; // 0x30
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* JNJBGOHKJML; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* OLMEJLNJIDB; // 0x68
	::CPABOPKIGAL* EGCCIODCJIA; // 0x70
	::LGCNEDCMPKM IFCOAEKLHCG; // 0x78
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0xA0
	::HOCDHMEPPEG DJPMNKCDAFL; // 0xA8
	::CPABOPKIGAL* CJNEMGNJIEI; // 0xD8
	::System::Boolean HIKHJMJNHGE; // 0xE0
	::System::Byte _padding0[0x3];
	::System::Int32 OPLNELNDLAK; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BCECPBBBMMB(::BIJIGJPHCED* FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::BIJIGJPHCED*))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_BCECPBBBMMB_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_GDEOPIBNOIN_OFFSET))(this);
	}
};
