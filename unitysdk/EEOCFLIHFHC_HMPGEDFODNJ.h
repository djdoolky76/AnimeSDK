#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect; }
namespace System { class Action; }

#define EEOCFLIHFHC_HMPGEDFODNJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16992C50)
#define EEOCFLIHFHC_HMPGEDFODNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16992C40)

inline static constexpr unsigned int EEOCFLIHFHC_HMPGEDFODNJ_TypeDefinitionIndex = 49472;

class EEOCFLIHFHC_HMPGEDFODNJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_HMPGEDFODNJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigDigibooEffect* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDigibooEffect*))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_HMPGEDFODNJ_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
