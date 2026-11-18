#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class PMNKLBCPENN;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NDLMAGPONEF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1288C9E0)
#define NDLMAGPONEF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1288C900)
#define NDLMAGPONEF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1288CFE0)
#define NDLMAGPONEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1288CF30)

inline static constexpr unsigned int NDLMAGPONEF_TypeDefinitionIndex = 89308;

class NDLMAGPONEF : public ::MHMFINLCNFN
{
public:
	::PMNKLBCPENN* HHGILNNMNAK; // 0x28
	::KCMIFNGABDC_1<::System::String*>* CEBJLNNENLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMAGPONEF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMAGPONEF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NDLMAGPONEF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMAGPONEF_GDEOPIBNOIN_OFFSET))(this);
	}
};
