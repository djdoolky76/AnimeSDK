#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EDIODBIGJAA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x106305F0)
#define EDIODBIGJAA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10630560)
#define EDIODBIGJAA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x106307E0)
#define EDIODBIGJAA__CTOR_OFFSET UNITYSDK_OFFSET(0x10630740)

inline static constexpr unsigned int EDIODBIGJAA_TypeDefinitionIndex = 52369;

class EDIODBIGJAA : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* BHLBMHNAIOH; // 0x0
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIODBIGJAA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIODBIGJAA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EDIODBIGJAA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIODBIGJAA_GDEOPIBNOIN_OFFSET))(this);
	}
};
