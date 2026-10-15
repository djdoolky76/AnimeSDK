#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define GJPBCNIIEOB_DAANLMPPDMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A7FDC0)

inline static constexpr unsigned int GJPBCNIIEOB_DAANLMPPDMD_TypeDefinitionIndex = 71264;

	class GJPBCNIIEOB_DAANLMPPDMD : public ::System::Object
	{
	public:
		::System::Action* IMIFPFCINJK; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_DAANLMPPDMD_CTOR_OFFSET))(this);
		}

	};
