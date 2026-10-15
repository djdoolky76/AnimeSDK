#pragma once
#include "unitysdk/unitysdk.h"
class FFOKLMNJHCC;
namespace RPG::GameCore { class TaskContext; }

#define JCNDKILCHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x165A7BB0)
#define JCNDKILCHAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165A7BE0)

inline static constexpr unsigned int JCNDKILCHAO_TypeDefinitionIndex = 52862;

	class JCNDKILCHAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFOKLMNJHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFOKLMNJHCC*))((::PBYTE)hIl2Cpp + JCNDKILCHAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNDKILCHAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
