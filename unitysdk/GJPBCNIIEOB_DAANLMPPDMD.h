#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GJPBCNIIEOB_DAANLMPPDMD_CTOR_OFFSET UNITYSDK_OFFSET(0x169BCD10)

inline static constexpr unsigned int GJPBCNIIEOB_DAANLMPPDMD_TypeDefinitionIndex = 73241;

	class GJPBCNIIEOB_DAANLMPPDMD : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* IMIFPFCINJK; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_DAANLMPPDMD_CTOR_OFFSET))(this);
		}

	};
