#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class PlanetFesAvatarStopMove; }
namespace RPG::GameCore { class TaskContext; }

#define DMOADKDEKDG_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC1B10)
#define DMOADKDEKDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEC1B40)

inline static constexpr unsigned int DMOADKDEKDG_TypeDefinitionIndex = 58258;

	class DMOADKDEKDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesAvatarStopMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesAvatarStopMove*))((::PBYTE)hIl2Cpp + DMOADKDEKDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOADKDEKDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
