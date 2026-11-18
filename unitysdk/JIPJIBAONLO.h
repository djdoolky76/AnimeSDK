#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define JIPJIBAONLO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1528E890)
#define JIPJIBAONLO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1528E6E0)
#define JIPJIBAONLO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1528ED60)
#define JIPJIBAONLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1528EC00)

inline static constexpr unsigned int JIPJIBAONLO_TypeDefinitionIndex = 85136;

class JIPJIBAONLO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* MIHICAJDIGN; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* IPCHGCIJHKM; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* MILAMDJCJPI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJIBAONLO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJIBAONLO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JIPJIBAONLO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJIBAONLO_GDEOPIBNOIN_OFFSET))(this);
	}
};
