#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MMPCDCNMGJM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151EBF70)
#define MMPCDCNMGJM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151EBE30)
#define MMPCDCNMGJM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151EC1E0)
#define MMPCDCNMGJM__CTOR_OFFSET UNITYSDK_OFFSET(0x151EC0E0)

inline static constexpr unsigned int MMPCDCNMGJM_TypeDefinitionIndex = 73987;

class MMPCDCNMGJM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::CPABOPKIGAL* HMNPNEALHEH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPCDCNMGJM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPCDCNMGJM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MMPCDCNMGJM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPCDCNMGJM_GDEOPIBNOIN_OFFSET))(this);
	}
};
