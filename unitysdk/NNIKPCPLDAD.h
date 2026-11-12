#pragma once
#include "unitysdk/unitysdk.h"
class EJPOBFLDHIA;
namespace RPG::GameCore { class TaskContext; }

#define NNIKPCPLDAD_CTOR_OFFSET UNITYSDK_OFFSET(0xC597C90)
#define NNIKPCPLDAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC597CC0)

inline static constexpr unsigned int NNIKPCPLDAD_TypeDefinitionIndex = 56890;

	class NNIKPCPLDAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJPOBFLDHIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJPOBFLDHIA*))((::PBYTE)hIl2Cpp + NNIKPCPLDAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIKPCPLDAD_ONTASKBEGIN_OFFSET))(this);
		}

	};
