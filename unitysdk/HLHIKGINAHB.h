#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEABFKCFPNC.h"
#include "unitysdk/NLNEBDEEONP.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HLHIKGINAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D53390)

inline static constexpr unsigned int HLHIKGINAHB_TypeDefinitionIndex = 56926;

	class HLHIKGINAHB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* GLJMFKDDPLP; // 0x18
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x20
		::System::Action_1<::RPG::GameCore::GameEntity*>* IBJBPOLBLNO; // 0x28
		::RPG::GameCore::CharacterConfig* COKHBDEGLIA; // 0x30
		::System::String* JDCOLLAEGJH; // 0x38
		::NLNEBDEEONP AHKJLOJDNIC; // 0x40
		::System::Boolean EGMAKEFKKPO; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamLocationType HMNPPCEBMIG; // 0x48
		::BEABFKCFPNC NMDMOALJBLO; // 0x4C
		::System::UInt32 JIDLKIHJLFL; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHIKGINAHB_CTOR_OFFSET))(this);
		}

	};
