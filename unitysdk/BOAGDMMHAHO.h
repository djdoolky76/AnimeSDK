#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define BOAGDMMHAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE6EA0)
#define BOAGDMMHAHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDE6ED0)

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
