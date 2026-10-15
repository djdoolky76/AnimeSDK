#pragma once
#include "unitysdk/unitysdk.h"
class OIAFHFJLJHH;
namespace RPG::GameCore { class TaskContext; }

#define JBPKMMJLALJ_CTOR_OFFSET UNITYSDK_OFFSET(0x165690C0)
#define JBPKMMJLALJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165690F0)

inline static constexpr unsigned int JBPKMMJLALJ_TypeDefinitionIndex = 54168;

	class JBPKMMJLALJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OIAFHFJLJHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OIAFHFJLJHH*))((::PBYTE)hIl2Cpp + JBPKMMJLALJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPKMMJLALJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
