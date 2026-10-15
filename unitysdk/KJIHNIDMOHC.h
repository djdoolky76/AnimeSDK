#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomStringV2; }
namespace RPG::GameCore { class TaskContext; }

#define KJIHNIDMOHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB458A60)
#define KJIHNIDMOHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB458A90)

	class KJIHNIDMOHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomStringV2*))((::PBYTE)hIl2Cpp + KJIHNIDMOHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHNIDMOHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
