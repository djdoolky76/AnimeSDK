#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }

#define EKCONHFMHGI_HAOCNNNJMMD_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x154B69C0)
#define EKCONHFMHGI_HAOCNNNJMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x154B69B0)

inline static constexpr unsigned int EKCONHFMHGI_HAOCNNNJMMD_TypeDefinitionIndex = 81897;

class EKCONHFMHGI_HAOCNNNJMMD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCONHFMHGI_HAOCNNNJMMD__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::MarcelConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MarcelConfig*))((::PBYTE)hIl2Cpp + EKCONHFMHGI_HAOCNNNJMMD_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};
