#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AHOGODBGMKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15500820)
#define AHOGODBGMKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15500670)
#define AHOGODBGMKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15500D00)
#define AHOGODBGMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15500BA0)

inline static constexpr unsigned int AHOGODBGMKE_TypeDefinitionIndex = 57342;

class AHOGODBGMKE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* KDDPFONACHD; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* LBMCIJDADJM; // 0x30
	::KCMIFNGABDC_1<::System::String*>* MINHHMOMAGM; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MALFOLLJKOL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOGODBGMKE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOGODBGMKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AHOGODBGMKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOGODBGMKE_GDEOPIBNOIN_OFFSET))(this);
	}
};
