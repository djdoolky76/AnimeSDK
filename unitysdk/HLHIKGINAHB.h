#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEABFKCFPNC.h"
#include "unitysdk/FCKHMPJOLFA.h"
#include "unitysdk/NLNEBDEEONP.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HLHIKGINAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB9370)

inline static constexpr unsigned int HLHIKGINAHB_TypeDefinitionIndex = 58150;

	class HLHIKGINAHB : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* GLJMFKDDPLP; // 0x10
		::RPG::GameCore::CharacterConfig* COKHBDEGLIA; // 0x18
		::System::Action_1<::RPG::GameCore::GameEntity*>* IBJBPOLBLNO; // 0x20
		::FCKHMPJOLFA GINFOPOAKHK; // 0x28
		::System::String* JDCOLLAEGJH; // 0x48
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x50
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x58
		::NLNEBDEEONP AHKJLOJDNIC; // 0x60
		::BEABFKCFPNC NMDMOALJBLO; // 0x64
		::RPG::GameCore::TeamLocationType HMNPPCEBMIG; // 0x6C
		::System::UInt32 JIDLKIHJLFL; // 0x70
		::System::Boolean EGMAKEFKKPO; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHIKGINAHB_CTOR_OFFSET))(this);
		}

	};
