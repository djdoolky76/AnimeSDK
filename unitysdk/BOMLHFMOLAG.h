#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetConfineFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define BOMLHFMOLAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC195B60)
#define BOMLHFMOLAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC195B90)

inline static constexpr unsigned int BOMLHFMOLAG_TypeDefinitionIndex = 52493;

	class BOMLHFMOLAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + BOMLHFMOLAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMLHFMOLAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
