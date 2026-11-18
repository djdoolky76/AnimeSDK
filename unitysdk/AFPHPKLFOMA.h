#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define AFPHPKLFOMA_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1264C480)
#define AFPHPKLFOMA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1264C410)
#define AFPHPKLFOMA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1264C2C0)
#define AFPHPKLFOMA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1264C720)
#define AFPHPKLFOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1264C590)

inline static constexpr unsigned int AFPHPKLFOMA_TypeDefinitionIndex = 64007;

class AFPHPKLFOMA : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* PLGLOCJNPLC; // 0x30
	::CPABOPKIGAL* BOHNBOELHDG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPHPKLFOMA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPHPKLFOMA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AFPHPKLFOMA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPHPKLFOMA_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AFPHPKLFOMA_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
