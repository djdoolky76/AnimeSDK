#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FKNKBAOGJOA;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CALNBKKBHEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10E26FB0)
#define CALNBKKBHEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10E26ED0)
#define CALNBKKBHEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10E272B0)
#define CALNBKKBHEP__CTOR_OFFSET UNITYSDK_OFFSET(0x10E27200)

inline static constexpr unsigned int CALNBKKBHEP_TypeDefinitionIndex = 88549;

class CALNBKKBHEP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28
	::FKNKBAOGJOA* HIDBCHPGMCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNBKKBHEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNBKKBHEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CALNBKKBHEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNBKKBHEP_GDEOPIBNOIN_OFFSET))(this);
	}
};
