#pragma once
#include "unitysdk/unitysdk.h"
class JNKNNFGJKAK;
namespace RPG::GameCore { class TaskContext; }

#define LKLHODNGIHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB754560)
#define LKLHODNGIHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB754590)

inline static constexpr unsigned int LKLHODNGIHO_TypeDefinitionIndex = 54171;

	class LKLHODNGIHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNKNNFGJKAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNKNNFGJKAK*))((::PBYTE)hIl2Cpp + LKLHODNGIHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLHODNGIHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
