#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }

#define IOKFGLCBFPH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A3B770)
#define IOKFGLCBFPH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A3B720)
#define IOKFGLCBFPH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A3BF10)
#define IOKFGLCBFPH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14A3BCA0)
#define IOKFGLCBFPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3BF00)

inline static constexpr unsigned int IOKFGLCBFPH_TypeDefinitionIndex = 41829;

class IOKFGLCBFPH : public ::MHMFINLCNFN
{
public:
	// static const ::System::Int32 MCMHIPDJIED = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKFGLCBFPH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKFGLCBFPH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IOKFGLCBFPH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKFGLCBFPH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean KGNEJKNNODJ(::System::Int32 HKHHHJHCGKL, ::System::String*& COKLIFNBJDI, ::System::Single& PNOAJCNMHPD, ::System::Single& CBHDNKNHGBF, ::System::Single& ECMOEENIHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + IOKFGLCBFPH_KGNEJKNNODJ_OFFSET))(this, HKHHHJHCGKL, COKLIFNBJDI, PNOAJCNMHPD, CBHDNKNHGBF, ECMOEENIHME);
	}
};
