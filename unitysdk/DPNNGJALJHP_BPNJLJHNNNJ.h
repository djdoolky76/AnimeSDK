#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHMCOCIIDOK.h"
#include "unitysdk/System/Object.h"

class DKGMJNOADGM;
class DPNNGJALJHP;
namespace System { class Action; }

#define DPNNGJALJHP_BPNJLJHNNNJ_ELLJAFGODAC_OFFSET UNITYSDK_OFFSET(0x132AA720)
#define DPNNGJALJHP_BPNJLJHNNNJ_JCBAPDPPCNI_OFFSET UNITYSDK_OFFSET(0x132AA6F0)
#define DPNNGJALJHP_BPNJLJHNNNJ_LCGONNBJFEK_OFFSET UNITYSDK_OFFSET(0x132AA5D0)
#define DPNNGJALJHP_BPNJLJHNNNJ_MBBJNEJIEHO_OFFSET UNITYSDK_OFFSET(0x132AA600)
#define DPNNGJALJHP_BPNJLJHNNNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x132AA5C0)

inline static constexpr unsigned int DPNNGJALJHP_BPNJLJHNNNJ_TypeDefinitionIndex = 55458;

class DPNNGJALJHP_BPNJLJHNNNJ : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::DKGMJNOADGM* MBEEKMNLPNL; // 0x18
	::DPNNGJALJHP* KLHPEBKNIFB; // 0x20
	::System::Action* KAKAEMACNPB; // 0x28
	::EHMCOCIIDOK HNOPAJLDCFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_BPNJLJHNNNJ__CTOR_OFFSET))(this);
	}

	::System::Void LCGONNBJFEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_BPNJLJHNNNJ_LCGONNBJFEK_OFFSET))(this);
	}

	::System::Void MBBJNEJIEHO(::System::Boolean FCHAEFIKLND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPNNGJALJHP_BPNJLJHNNNJ_MBBJNEJIEHO_OFFSET))(this, FCHAEFIKLND);
	}

	::System::Void JCBAPDPPCNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_BPNJLJHNNNJ_JCBAPDPPCNI_OFFSET))(this);
	}

	::System::Void ELLJAFGODAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_BPNJLJHNNNJ_ELLJAFGODAC_OFFSET))(this);
	}
};
