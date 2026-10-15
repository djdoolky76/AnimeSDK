#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackAIUpperGroupForSpecified; }
namespace RPG::GameCore { class TaskContext; }

#define CBBLJFGGDBD_CTOR_OFFSET UNITYSDK_OFFSET(0xC49E950)
#define CBBLJFGGDBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC49E980)

	class CBBLJFGGDBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAIUpperGroupForSpecified*))((::PBYTE)hIl2Cpp + CBBLJFGGDBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBLJFGGDBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
