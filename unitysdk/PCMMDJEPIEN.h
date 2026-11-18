#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
template <typename T> class KCMIFNGABDC_1;

#define PCMMDJEPIEN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16001730)
#define PCMMDJEPIEN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16001650)
#define PCMMDJEPIEN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16001D30)
#define PCMMDJEPIEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16001C40)

inline static constexpr unsigned int PCMMDJEPIEN_TypeDefinitionIndex = 52675;

class PCMMDJEPIEN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JPJHAJKJOHN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* GCBJEOAEIBC; // 0x30
	::System::Action_1<::System::EventArgs*>* MGAKJHJAGJI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMDJEPIEN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMDJEPIEN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCMMDJEPIEN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMDJEPIEN_GDEOPIBNOIN_OFFSET))(this);
	}
};
