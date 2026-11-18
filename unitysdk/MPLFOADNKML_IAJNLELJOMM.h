#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }

#define MPLFOADNKML_IAJNLELJOMM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11A325E0)
#define MPLFOADNKML_IAJNLELJOMM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A325D0)

inline static constexpr unsigned int MPLFOADNKML_IAJNLELJOMM_TypeDefinitionIndex = 61169;

class MPLFOADNKML_IAJNLELJOMM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFOADNKML_IAJNLELJOMM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUICamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*))((::PBYTE)hIl2Cpp + MPLFOADNKML_IAJNLELJOMM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
