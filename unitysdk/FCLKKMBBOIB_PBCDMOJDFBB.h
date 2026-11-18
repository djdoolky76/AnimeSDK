#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }

#define FCLKKMBBOIB_PBCDMOJDFBB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11ABF7A0)
#define FCLKKMBBOIB_PBCDMOJDFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x11ABF790)

inline static constexpr unsigned int FCLKKMBBOIB_PBCDMOJDFBB_TypeDefinitionIndex = 64061;

class FCLKKMBBOIB_PBCDMOJDFBB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLKKMBBOIB_PBCDMOJDFBB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*))((::PBYTE)hIl2Cpp + FCLKKMBBOIB_PBCDMOJDFBB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
