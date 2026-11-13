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

#define HLHIKGINAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x198A0C70)

inline static constexpr unsigned int HLHIKGINAHB_TypeDefinitionIndex = 58150;

	class HLHIKGINAHB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x10
		::FCKHMPJOLFA GINFOPOAKHK; // 0x18
		::System::Action_1<::RPG::GameCore::GameEntity*>* GLJMFKDDPLP; // 0x38
		::RPG::GameCore::CharacterConfig* COKHBDEGLIA; // 0x40
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x48
		::System::String* JDCOLLAEGJH; // 0x50
		::System::Action_1<::RPG::GameCore::GameEntity*>* IBJBPOLBLNO; // 0x58
		::System::UInt32 JIDLKIHJLFL; // 0x60
		::BEABFKCFPNC NMDMOALJBLO; // 0x64
		::RPG::GameCore::TeamLocationType HMNPPCEBMIG; // 0x6C
		::System::Boolean EGMAKEFKKPO; // 0x70
		::System::Byte _padding0[0x3];
		::NLNEBDEEONP AHKJLOJDNIC; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHIKGINAHB_CTOR_OFFSET))(this);
		}

	};
