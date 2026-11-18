#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PKMAPPGHGBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178E32F0)
#define PKMAPPGHGBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178E3140)
#define PKMAPPGHGBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178E35E0)
#define PKMAPPGHGBI__CTOR_OFFSET UNITYSDK_OFFSET(0x178E34A0)

inline static constexpr unsigned int PKMAPPGHGBI_TypeDefinitionIndex = 38859;

class PKMAPPGHGBI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* HMNPNEALHEH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* KLEGIBJNMFA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMAPPGHGBI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMAPPGHGBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKMAPPGHGBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMAPPGHGBI_GDEOPIBNOIN_OFFSET))(this);
	}
};
