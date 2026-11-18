#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FKNKBAOGJOA;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CLPMCPLFICO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A1BBF50)
#define CLPMCPLFICO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A1BBE80)
#define CLPMCPLFICO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A1BC1E0)
#define CLPMCPLFICO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC130)

inline static constexpr unsigned int CLPMCPLFICO_TypeDefinitionIndex = 46822;

class CLPMCPLFICO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* CEBJLNNENLH; // 0x18
	::FKNKBAOGJOA* HHGILNNMNAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMCPLFICO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMCPLFICO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CLPMCPLFICO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMCPLFICO_GDEOPIBNOIN_OFFSET))(this);
	}
};
