#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AGDLPBOOLBF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144D8F00)
#define AGDLPBOOLBF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144D8D50)
#define AGDLPBOOLBF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144D93F0)
#define AGDLPBOOLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x144D92B0)

inline static constexpr unsigned int AGDLPBOOLBF_TypeDefinitionIndex = 41882;

class AGDLPBOOLBF : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDLPBOOLBF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDLPBOOLBF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AGDLPBOOLBF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDLPBOOLBF_GDEOPIBNOIN_OFFSET))(this);
	}
};
