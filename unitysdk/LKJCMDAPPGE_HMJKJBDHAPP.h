#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { class Action; }

#define LKJCMDAPPGE_HMJKJBDHAPP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x184FD3F0)
#define LKJCMDAPPGE_HMJKJBDHAPP__CTOR_OFFSET UNITYSDK_OFFSET(0x184FD3E0)

inline static constexpr unsigned int LKJCMDAPPGE_HMJKJBDHAPP_TypeDefinitionIndex = 78009;

class LKJCMDAPPGE_HMJKJBDHAPP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCMDAPPGE_HMJKJBDHAPP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigZipLineSubSystem* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineSubSystem*))((::PBYTE)hIl2Cpp + LKJCMDAPPGE_HMJKJBDHAPP_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
