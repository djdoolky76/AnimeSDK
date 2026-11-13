#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableSpecificModifierSpecialMark; }
namespace RPG::GameCore { class TaskContext; }

#define EIOLFMFJKNF_CTOR_OFFSET UNITYSDK_OFFSET(0x19AA4AD0)
#define EIOLFMFJKNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AA4B00)

inline static constexpr unsigned int EIOLFMFJKNF_TypeDefinitionIndex = 48628;

	class EIOLFMFJKNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + EIOLFMFJKNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOLFMFJKNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
