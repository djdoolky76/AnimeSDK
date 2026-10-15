#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNpcRide; }
namespace RPG::GameCore { class TaskContext; }

#define GHEAPPDMEIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A184F0)
#define GHEAPPDMEIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A18520)

	class GHEAPPDMEIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcRide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcRide*))((::PBYTE)hIl2Cpp + GHEAPPDMEIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEAPPDMEIJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
