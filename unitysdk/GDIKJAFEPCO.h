#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RogueWolfGunRandomCase; }
namespace RPG::GameCore { class TaskContext; }

#define GDIKJAFEPCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1599D080)
#define GDIKJAFEPCO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1599D0B0)

	class GDIKJAFEPCO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueWolfGunRandomCase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueWolfGunRandomCase*))((::PBYTE)hIl2Cpp + GDIKJAFEPCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKJAFEPCO_ONTASKBEGIN_OFFSET))(this);
		}

	};
