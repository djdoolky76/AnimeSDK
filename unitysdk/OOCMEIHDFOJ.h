#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define OOCMEIHDFOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFC4040)
#define OOCMEIHDFOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFC3F60)
#define OOCMEIHDFOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFC43E0)
#define OOCMEIHDFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC42F0)

inline static constexpr unsigned int OOCMEIHDFOJ_TypeDefinitionIndex = 45813;

class OOCMEIHDFOJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JCKNPKCPEFO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMEIHDFOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMEIHDFOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OOCMEIHDFOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMEIHDFOJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
