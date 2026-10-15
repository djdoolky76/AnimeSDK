#pragma once
#include "unitysdk/unitysdk.h"
class AGPCKNGHOAH;
namespace RPG::GameCore { class TaskContext; }

#define JNCAKKOJEFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2726F0)
#define JNCAKKOJEFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB272720)

inline static constexpr unsigned int JNCAKKOJEFK_TypeDefinitionIndex = 54792;

	class JNCAKKOJEFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AGPCKNGHOAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AGPCKNGHOAH*))((::PBYTE)hIl2Cpp + JNCAKKOJEFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCAKKOJEFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
