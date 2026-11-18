#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }

#define GOCPPECPBJB_NLFDIKCECMB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x17A0A0B0)
#define GOCPPECPBJB_NLFDIKCECMB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0A0A0)

inline static constexpr unsigned int GOCPPECPBJB_NLFDIKCECMB_TypeDefinitionIndex = 84824;

class GOCPPECPBJB_NLFDIKCECMB : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCPPECPBJB_NLFDIKCECMB__CTOR_OFFSET))(this);
	}

	::System::Void FLIAEJGDMLI(::MoleMole::Config::ConfigAttackDistanceAttenuation* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackDistanceAttenuation*))((::PBYTE)hIl2Cpp + GOCPPECPBJB_NLFDIKCECMB_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}
};
