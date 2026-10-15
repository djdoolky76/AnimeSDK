#pragma once
#include "unitysdk/unitysdk.h"
class FMJLHIPCIPJ;
namespace RPG::GameCore { class TaskContext; }

#define CIFJAJCNHAB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF6E4C0)
#define CIFJAJCNHAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF6E4F0)

	class CIFJAJCNHAB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FMJLHIPCIPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FMJLHIPCIPJ*))((::PBYTE)hIl2Cpp + CIFJAJCNHAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFJAJCNHAB_ONTASKBEGIN_OFFSET))(this);
		}

	};
