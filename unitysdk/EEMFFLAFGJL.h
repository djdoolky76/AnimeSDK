#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayerForceWalk; }
namespace RPG::GameCore { class TaskContext; }

#define EEMFFLAFGJL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3DC20)
#define EEMFFLAFGJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A3DC50)

inline static constexpr unsigned int EEMFFLAFGJL_TypeDefinitionIndex = 58290;

	class EEMFFLAFGJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerForceWalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + EEMFFLAFGJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMFFLAFGJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
