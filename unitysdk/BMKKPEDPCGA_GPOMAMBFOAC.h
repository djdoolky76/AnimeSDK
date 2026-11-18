#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }

#define BMKKPEDPCGA_GPOMAMBFOAC_PBBCLNGGLKA_OFFSET UNITYSDK_OFFSET(0x1151E340)
#define BMKKPEDPCGA_GPOMAMBFOAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1151DFC0)

inline static constexpr unsigned int BMKKPEDPCGA_GPOMAMBFOAC_TypeDefinitionIndex = 87821;

class BMKKPEDPCGA_GPOMAMBFOAC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_GPOMAMBFOAC__CTOR_OFFSET))(this);
	}

	::System::Void PBBCLNGGLKA(::MoleMole::Config::ConfigViewObjectMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_GPOMAMBFOAC_PBBCLNGGLKA_OFFSET))(this, DFMKILICPFB);
	}
};
