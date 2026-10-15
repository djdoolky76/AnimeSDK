#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetHP; }
namespace RPG::GameCore { class TaskContext; }

#define OJKEDGMMCID_CTOR_OFFSET UNITYSDK_OFFSET(0xBEBDBC0)
#define OJKEDGMMCID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEBDBF0)

	class OJKEDGMMCID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetHP*))((::PBYTE)hIl2Cpp + OJKEDGMMCID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKEDGMMCID_ONTASKBEGIN_OFFSET))(this);
		}

	};
