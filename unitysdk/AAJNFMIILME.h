#pragma once
#include "unitysdk/unitysdk.h"
class CLPDEPEIOOP;
namespace RPG::GameCore { class TaskContext; }

#define AAJNFMIILME_CTOR_OFFSET UNITYSDK_OFFSET(0x18C77AC0)
#define AAJNFMIILME_ENCNOCGLJKJ_OFFSET UNITYSDK_OFFSET(0x18C77B40)
#define AAJNFMIILME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C77AF0)

inline static constexpr unsigned int AAJNFMIILME_TypeDefinitionIndex = 57629;

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
