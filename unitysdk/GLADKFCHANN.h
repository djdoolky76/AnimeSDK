#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GLADKFCHANN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11DBB0C0)
#define GLADKFCHANN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11DBAE60)
#define GLADKFCHANN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11DBB830)
#define GLADKFCHANN__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBB630)

inline static constexpr unsigned int GLADKFCHANN_TypeDefinitionIndex = 62202;

class GLADKFCHANN : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* OGFPEPEEHLP; // 0x18
	::CPABOPKIGAL* LOKJPILAGIC; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38
	::CPABOPKIGAL* EGCCIODCJIA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLADKFCHANN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLADKFCHANN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLADKFCHANN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLADKFCHANN_GDEOPIBNOIN_OFFSET))(this);
	}
};
