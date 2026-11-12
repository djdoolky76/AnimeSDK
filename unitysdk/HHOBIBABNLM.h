#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayIconState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define HHOBIBABNLM_CTOR_OFFSET UNITYSDK_OFFSET(0x16C228F0)

inline static constexpr unsigned int HHOBIBABNLM_TypeDefinitionIndex = 56515;

	class HHOBIBABNLM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* GEGKCAOLMOH; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::GameCore::ActionDelayIconState COICNBKAKNE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBIBABNLM_CTOR_OFFSET))(this);
		}

	};
