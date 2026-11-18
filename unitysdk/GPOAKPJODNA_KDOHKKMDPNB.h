#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define GPOAKPJODNA_KDOHKKMDPNB_ICFNNLGNJIP_OFFSET UNITYSDK_OFFSET(0x125F0DA0)
#define GPOAKPJODNA_KDOHKKMDPNB_MNKLFNNHIEN_OFFSET UNITYSDK_OFFSET(0x125F0AF0)
#define GPOAKPJODNA_KDOHKKMDPNB__CTOR_OFFSET UNITYSDK_OFFSET(0x125F0AE0)

inline static constexpr unsigned int GPOAKPJODNA_KDOHKKMDPNB_TypeDefinitionIndex = 62705;

class GPOAKPJODNA_KDOHKKMDPNB : public ::System::Object
{
public:
	::System::Action* MFEBNGPNPMA; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Single NCCDJLDKFGA; // 0x20
	::System::Single DCEOBAPNGIK; // 0x24
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x28
	::System::Boolean FCONIKPLNEC; // 0x34
	::System::Boolean OMDFDCLEOEO; // 0x35
	::System::Byte _padding0[0x2];
	::System::Single KKAMDFNMMJH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOAKPJODNA_KDOHKKMDPNB__CTOR_OFFSET))(this);
	}

	::System::Void MNKLFNNHIEN(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOAKPJODNA_KDOHKKMDPNB_MNKLFNNHIEN_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void ICFNNLGNJIP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOAKPJODNA_KDOHKKMDPNB_ICFNNLGNJIP_OFFSET))(this, NAPFALLANDL);
	}
};
