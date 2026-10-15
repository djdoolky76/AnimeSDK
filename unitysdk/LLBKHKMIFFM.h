#pragma once
#include "unitysdk/unitysdk.h"
class EJDFDKMILOD;
namespace RPG::GameCore { class TaskContext; }

#define LLBKHKMIFFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7579E0)
#define LLBKHKMIFFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB757A10)
#define LLBKHKMIFFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB757A50)

inline static constexpr unsigned int LLBKHKMIFFM_TypeDefinitionIndex = 53835;

	class LLBKHKMIFFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJDFDKMILOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJDFDKMILOD*))((::PBYTE)hIl2Cpp + LLBKHKMIFFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKHKMIFFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKHKMIFFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
