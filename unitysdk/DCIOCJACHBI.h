#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAddVisionUseCount; }
namespace RPG::GameCore { class TaskContext; }

#define DCIOCJACHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xE248710)
#define DCIOCJACHBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE248740)

	class DCIOCJACHBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + DCIOCJACHBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIOCJACHBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
