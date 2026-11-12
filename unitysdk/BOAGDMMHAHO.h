#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define BOAGDMMHAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC767CA0)
#define BOAGDMMHAHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC767CD0)

inline static constexpr unsigned int BOAGDMMHAHO_TypeDefinitionIndex = 59104;

	class BOAGDMMHAHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddStreamingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddStreamingSource*))((::PBYTE)hIl2Cpp + BOAGDMMHAHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOAGDMMHAHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
