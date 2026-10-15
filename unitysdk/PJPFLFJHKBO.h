#pragma once
#include "unitysdk/unitysdk.h"
class EJOCPHPCKDL;
namespace RPG::GameCore { class TaskContext; }

#define PJPFLFJHKBO_CTOR_OFFSET UNITYSDK_OFFSET(0xC29E470)
#define PJPFLFJHKBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC29E4A0)

	class PJPFLFJHKBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJOCPHPCKDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJOCPHPCKDL*))((::PBYTE)hIl2Cpp + PJPFLFJHKBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPFLFJHKBO_ONTASKBEGIN_OFFSET))(this);
		}

	};
