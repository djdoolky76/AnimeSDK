#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HDEFECLFLGG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149FEC50)
#define HDEFECLFLGG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149FEB00)
#define HDEFECLFLGG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149FF3D0)
#define HDEFECLFLGG__CTOR_OFFSET UNITYSDK_OFFSET(0x149FF280)

inline static constexpr unsigned int HDEFECLFLGG_TypeDefinitionIndex = 83703;

class HDEFECLFLGG : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* CNLPAJOEMNI; // 0x30
	::KCMIFNGABDC_1<::MoleMole::BubbleGroupPlayGraphContent*>* HHCIMPHLDMH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDEFECLFLGG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_GDEOPIBNOIN_OFFSET))(this);
	}
};
