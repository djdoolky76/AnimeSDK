#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KGOKOIOGBND;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define AGHNPLMPGLE_BPDGMAOEAFD_OFFSET UNITYSDK_OFFSET(0xCF32E30)
#define AGHNPLMPGLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF32AE0)
#define AGHNPLMPGLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF32BC0)

inline static constexpr unsigned int AGHNPLMPGLE_TypeDefinitionIndex = 55422;

	class AGHNPLMPGLE
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KGOKOIOGBND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KGOKOIOGBND*))((::PBYTE)hIl2Cpp + AGHNPLMPGLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHNPLMPGLE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint BPDGMAOEAFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGHNPLMPGLE_BPDGMAOEAFD_OFFSET))(this, a1);
		}

	};
