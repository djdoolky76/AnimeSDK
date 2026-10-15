#pragma once
#include "unitysdk/unitysdk.h"
class CLPDEPEIOOP;
namespace RPG::GameCore { class TaskContext; }

#define AAJNFMIILME_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8EB0)
#define AAJNFMIILME_ENCNOCGLJKJ_OFFSET UNITYSDK_OFFSET(0xB0C8F30)
#define AAJNFMIILME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C8EE0)

	class AAJNFMIILME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CLPDEPEIOOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CLPDEPEIOOP*))((::PBYTE)hIl2Cpp + AAJNFMIILME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNFMIILME_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ENCNOCGLJKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNFMIILME_ENCNOCGLJKJ_OFFSET))(this);
		}

	};
