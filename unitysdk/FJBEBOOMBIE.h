#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FJBEBOOMBIE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x191CA290)
#define FJBEBOOMBIE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x191CA080)
#define FJBEBOOMBIE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x191CA480)
#define FJBEBOOMBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x191CA2E0)

inline static constexpr unsigned int FJBEBOOMBIE_TypeDefinitionIndex = 76251;

class FJBEBOOMBIE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PMGGBCOCMKL; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LKDIIKADDBB; // 0x38
	::KCMIFNGABDC_1<::System::String*>* JCACKMABDMN; // 0x40
	::KCMIFNGABDC_1<::MoleMole::Config::Spline_WayPoint>* HHMPFIANODF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBEBOOMBIE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBEBOOMBIE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FJBEBOOMBIE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBEBOOMBIE_GDEOPIBNOIN_OFFSET))(this);
	}
};
