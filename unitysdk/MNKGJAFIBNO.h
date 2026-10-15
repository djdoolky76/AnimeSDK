#pragma once
#include "unitysdk/unitysdk.h"
class GIKHELDPFIA;
namespace RPG::GameCore { class TaskContext; }

#define MNKGJAFIBNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0FFA0)
#define MNKGJAFIBNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0FFD0)

inline static constexpr unsigned int MNKGJAFIBNO_TypeDefinitionIndex = 52827;

	class MNKGJAFIBNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GIKHELDPFIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GIKHELDPFIA*))((::PBYTE)hIl2Cpp + MNKGJAFIBNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKGJAFIBNO_ONTASKBEGIN_OFFSET))(this);
		}

	};
