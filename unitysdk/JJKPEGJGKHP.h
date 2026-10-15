#pragma once
#include "unitysdk/unitysdk.h"
class BNFDPCPAELE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }

#define JJKPEGJGKHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB207C00)
#define JJKPEGJGKHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB207C30)

	class JJKPEGJGKHP
	{
	public:
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x28
		::BNFDPCPAELE* EJJEEJENLDA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BNFDPCPAELE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BNFDPCPAELE*))((::PBYTE)hIl2Cpp + JJKPEGJGKHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKPEGJGKHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
