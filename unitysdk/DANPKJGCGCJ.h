#pragma once
#include "unitysdk/unitysdk.h"
class LINCNNLGGMB;
namespace RPG::GameCore { class TaskContext; }

#define DANPKJGCGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC6010)
#define DANPKJGCGCJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFC6040)
#define DANPKJGCGCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFC6080)

	class DANPKJGCGCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LINCNNLGGMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LINCNNLGGMB*))((::PBYTE)hIl2Cpp + DANPKJGCGCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANPKJGCGCJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANPKJGCGCJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
