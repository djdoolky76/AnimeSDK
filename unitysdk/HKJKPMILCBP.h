#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace MoleMole::Spline { class NAPPointMeta; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HKJKPMILCBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17E4FB90)
#define HKJKPMILCBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17E4FB00)
#define HKJKPMILCBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17E50280)
#define HKJKPMILCBP_LMJHPAOCPNJ_OFFSET UNITYSDK_OFFSET(0x17E4FE80)
#define HKJKPMILCBP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E501E0)

inline static constexpr unsigned int HKJKPMILCBP_TypeDefinitionIndex = 42208;

class HKJKPMILCBP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* GOKJMIDAKIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJKPMILCBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJKPMILCBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKJKPMILCBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::MoleMole::Spline::NAPPointMeta* LMJHPAOCPNJ(::System::String* JICOHPFJHLM)
	{
		return ((::MoleMole::Spline::NAPPointMeta*(*)(::System::String*))((::PBYTE)hIl2Cpp + HKJKPMILCBP_LMJHPAOCPNJ_OFFSET))(JICOHPFJHLM);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJKPMILCBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
