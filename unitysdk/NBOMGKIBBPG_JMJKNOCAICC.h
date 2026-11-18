#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }

#define NBOMGKIBBPG_JMJKNOCAICC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x120F2780)
#define NBOMGKIBBPG_JMJKNOCAICC__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2770)

inline static constexpr unsigned int NBOMGKIBBPG_JMJKNOCAICC_TypeDefinitionIndex = 93021;

class NBOMGKIBBPG_JMJKNOCAICC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_JMJKNOCAICC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUICoopTeam3D* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_JMJKNOCAICC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
