#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MakeCharacterHUDVisible; }
namespace RPG::GameCore { class TaskContext; }

#define AODCBJMHAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x158A67E0)
#define AODCBJMHAHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A6810)

	class AODCBJMHAHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MakeCharacterHUDVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MakeCharacterHUDVisible*))((::PBYTE)hIl2Cpp + AODCBJMHAHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCBJMHAHB_ONTASKBEGIN_OFFSET))(this);
		}

	};
