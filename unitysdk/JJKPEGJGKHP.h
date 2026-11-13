#pragma once
#include "unitysdk/unitysdk.h"
class BNFDPCPAELE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }

#define JJKPEGJGKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x17B08C80)
#define JJKPEGJGKHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B08CB0)

inline static constexpr unsigned int JJKPEGJGKHP_TypeDefinitionIndex = 59841;

	class JJKPEGJGKHP
	{
	public:
		::BNFDPCPAELE* EJJEEJENLDA; // 0x28
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BNFDPCPAELE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BNFDPCPAELE*))((::PBYTE)hIl2Cpp + JJKPEGJGKHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKPEGJGKHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
