#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Action; }

#define BGJCOEKKMBG_HJFFFIGNMLD_EBJOCGDLAPO_OFFSET UNITYSDK_OFFSET(0x18232F90)
#define BGJCOEKKMBG_HJFFFIGNMLD__CTOR_OFFSET UNITYSDK_OFFSET(0x18232F80)

inline static constexpr unsigned int BGJCOEKKMBG_HJFFFIGNMLD_TypeDefinitionIndex = 46530;

class BGJCOEKKMBG_HJFFFIGNMLD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean GHOLINNCJCE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HJFFFIGNMLD__CTOR_OFFSET))(this);
	}

	::System::Void EBJOCGDLAPO(::MoleMole::ConfigRichtapSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HJFFFIGNMLD_EBJOCGDLAPO_OFFSET))(this, DFMKILICPFB);
	}
};
