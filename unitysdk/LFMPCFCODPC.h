#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetRushBtnInteractable; }
namespace RPG::GameCore { class TaskContext; }

#define LFMPCFCODPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB685880)
#define LFMPCFCODPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6858B0)

	class LFMPCFCODPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetRushBtnInteractable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetRushBtnInteractable*))((::PBYTE)hIl2Cpp + LFMPCFCODPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPCFCODPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
