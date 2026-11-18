#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define HFGGLMAGCDO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D8B230)
#define HFGGLMAGCDO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D8B150)
#define HFGGLMAGCDO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D8B650)
#define HFGGLMAGCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8B560)

inline static constexpr unsigned int HFGGLMAGCDO_TypeDefinitionIndex = 91131;

class HFGGLMAGCDO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JLBAHAAHFCJ; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NDKFNAJFPBL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGGLMAGCDO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGGLMAGCDO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFGGLMAGCDO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGGLMAGCDO_GDEOPIBNOIN_OFFSET))(this);
	}
};
