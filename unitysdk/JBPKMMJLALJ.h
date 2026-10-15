#pragma once
#include "unitysdk/unitysdk.h"
class OIAFHFJLJHH;
namespace RPG::GameCore { class TaskContext; }

#define JBPKMMJLALJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16577010)
#define JBPKMMJLALJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16577040)

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
