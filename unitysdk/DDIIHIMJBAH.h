#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DDIIHIMJBAH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12BAD3D0)
#define DDIIHIMJBAH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12BAD2F0)
#define DDIIHIMJBAH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12BAD700)
#define DDIIHIMJBAH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAD610)

inline static constexpr unsigned int DDIIHIMJBAH_TypeDefinitionIndex = 49062;

class DDIIHIMJBAH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HHGILNNMNAK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIIHIMJBAH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIIHIMJBAH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DDIIHIMJBAH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIIHIMJBAH_GDEOPIBNOIN_OFFSET))(this);
	}
};
