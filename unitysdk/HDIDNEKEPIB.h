#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HDIDNEKEPIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A3F190)
#define HDIDNEKEPIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A3F0B0)
#define HDIDNEKEPIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A3F590)
#define HDIDNEKEPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3F4A0)

inline static constexpr unsigned int HDIDNEKEPIB_TypeDefinitionIndex = 67156;

class HDIDNEKEPIB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IOENGAEMCJL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIDNEKEPIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIDNEKEPIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDIDNEKEPIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIDNEKEPIB_GDEOPIBNOIN_OFFSET))(this);
	}
};
