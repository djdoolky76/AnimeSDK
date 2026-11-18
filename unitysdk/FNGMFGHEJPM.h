#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FNGMFGHEJPM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14113B50)
#define FNGMFGHEJPM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14113A10)
#define FNGMFGHEJPM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14113F70)
#define FNGMFGHEJPM__CTOR_OFFSET UNITYSDK_OFFSET(0x14113E50)

inline static constexpr unsigned int FNGMFGHEJPM_TypeDefinitionIndex = 69279;

class FNGMFGHEJPM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JBOICLHFPBH; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FLHGEBLHCNC; // 0x20
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMFGHEJPM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMFGHEJPM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNGMFGHEJPM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMFGHEJPM_GDEOPIBNOIN_OFFSET))(this);
	}
};
