#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEABFKCFPNC.h"
#include "unitysdk/NLNEBDEEONP.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define HLHIKGINAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5FB50)

inline static constexpr unsigned int HLHIKGINAHB_TypeDefinitionIndex = 56926;

	class HLHIKGINAHB : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterConfig* COKHBDEGLIA; // 0x10
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x18
		::System::Action* GLJMFKDDPLP; // 0x20
		::System::String* JDCOLLAEGJH; // 0x28
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x30
		::System::Action* IBJBPOLBLNO; // 0x38
		::System::Boolean EGMAKEFKKPO; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamLocationType HMNPPCEBMIG; // 0x44
		::System::UInt32 JIDLKIHJLFL; // 0x48
		::NLNEBDEEONP AHKJLOJDNIC; // 0x4C
		::BEABFKCFPNC NMDMOALJBLO; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHIKGINAHB_CTOR_OFFSET))(this);
		}

	};
