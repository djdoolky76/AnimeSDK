#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FNPGFHGFFGL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142B39B0)
#define FNPGFHGFFGL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x142B3750)
#define FNPGFHGFFGL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x142B4600)
#define FNPGFHGFFGL__CTOR_OFFSET UNITYSDK_OFFSET(0x142B4400)

inline static constexpr unsigned int FNPGFHGFFGL_TypeDefinitionIndex = 56317;

class FNPGFHGFFGL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HPEFMJFCIHN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* GIOKEGBJHFH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x38
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPGFHGFFGL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_GDEOPIBNOIN_OFFSET))(this);
	}
};
