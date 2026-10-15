#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetSignedAngleByTarget; }
namespace RPG::GameCore { class TaskContext; }

#define GIIKJEKEAOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A3C180)
#define GIIKJEKEAOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3C260)

	class GIIKJEKEAOH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSignedAngleByTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSignedAngleByTarget*))((::PBYTE)hIl2Cpp + GIIKJEKEAOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIKJEKEAOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
