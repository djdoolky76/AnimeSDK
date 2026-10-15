#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RogueTournCollectionLoadedPostProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define JCGENLGEBMO_CTOR_OFFSET UNITYSDK_OFFSET(0x16588500)
#define JCGENLGEBMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16588530)
#define JCGENLGEBMO_PEEIPEHPOII_OFFSET UNITYSDK_OFFSET(0x16588620)

	class JCGENLGEBMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess*))((::PBYTE)hIl2Cpp + JCGENLGEBMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGENLGEBMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PEEIPEHPOII(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JCGENLGEBMO_PEEIPEHPOII_OFFSET))(this, a1);
		}

	};
