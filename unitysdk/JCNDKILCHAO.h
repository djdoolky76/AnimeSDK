#pragma once
#include "unitysdk/unitysdk.h"
class FFOKLMNJHCC;
namespace RPG::GameCore { class TaskContext; }

#define JCNDKILCHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16598840)
#define JCNDKILCHAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16598870)

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
