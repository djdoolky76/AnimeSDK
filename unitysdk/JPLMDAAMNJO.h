#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JPLMDAAMNJO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13AE6F50)
#define JPLMDAAMNJO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13AE6E70)
#define JPLMDAAMNJO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13AE71B0)
#define JPLMDAAMNJO__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE70C0)

inline static constexpr unsigned int JPLMDAAMNJO_TypeDefinitionIndex = 79238;

class JPLMDAAMNJO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* IHLDIOOCHEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLMDAAMNJO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLMDAAMNJO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JPLMDAAMNJO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLMDAAMNJO_GDEOPIBNOIN_OFFSET))(this);
	}
};
