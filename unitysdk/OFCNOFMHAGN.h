#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OFCNOFMHAGN_HIEPJINIGFN_OFFSET UNITYSDK_OFFSET(0x129257C0)
#define OFCNOFMHAGN_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x12925670)
#define OFCNOFMHAGN_MDMKMKAKEMA_OFFSET UNITYSDK_OFFSET(0x12925690)
#define OFCNOFMHAGN_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x129257E0)
#define OFCNOFMHAGN__CTOR_OFFSET UNITYSDK_OFFSET(0x12925680)

inline static constexpr unsigned int OFCNOFMHAGN_TypeDefinitionIndex = 45470;

class OFCNOFMHAGN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x18

	::System::Void _ctor(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFCNOFMHAGN__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCNOFMHAGN_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void MDMKMKAKEMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCNOFMHAGN_MDMKMKAKEMA_OFFSET))(this);
	}

	::System::Void HIEPJINIGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCNOFMHAGN_HIEPJINIGFN_OFFSET))(this);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFCNOFMHAGN_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}
};
