#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KEJKAOGFPIC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17644670)
#define KEJKAOGFPIC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x176443A0)
#define KEJKAOGFPIC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17644DF0)
#define KEJKAOGFPIC__CTOR_OFFSET UNITYSDK_OFFSET(0x17644BD0)

inline static constexpr unsigned int KEJKAOGFPIC_TypeDefinitionIndex = 47075;

class KEJKAOGFPIC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* MNDLIJFICPD; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LFALBJFGKAG; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* LCFKOEAILBJ; // 0x38
	::KCMIFNGABDC_1<::System::Single>* MEKLAJABEPH; // 0x40
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x48
	::KCMIFNGABDC_1<::System::Single>* DNGOPGGJBHO; // 0x50
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* FBENCIIBNNJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJKAOGFPIC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJKAOGFPIC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KEJKAOGFPIC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJKAOGFPIC_GDEOPIBNOIN_OFFSET))(this);
	}
};
