#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System { class String; }

#define JOMBFOOBAJL__CTOR_OFFSET UNITYSDK_OFFSET(0x19471BC0)

inline static constexpr unsigned int JOMBFOOBAJL_TypeDefinitionIndex = 84256;

class JOMBFOOBAJL : public ::System::Object
{
public:
	::System::Action* CBDBDDFEPEK; // 0x10
	::MoleMole::Config::ConfigUIAnimationFunctionSet* BHAEFMIJLIM; // 0x18
	::System::String* DCJCHGOGLMF; // 0x20
	::MoleMole::Config::UISpecialNumGroup* MPEIIAMLNLE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMBFOOBAJL__CTOR_OFFSET))(this);
	}
};
