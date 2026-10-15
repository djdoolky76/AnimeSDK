#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReduceStanceRatio; }
namespace RPG::GameCore { class TaskContext; }

#define JJLPDFFKDBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2087B0)
#define JJLPDFFKDBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2087E0)

	class JJLPDFFKDBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReduceStanceRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReduceStanceRatio*))((::PBYTE)hIl2Cpp + JJLPDFFKDBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPDFFKDBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
