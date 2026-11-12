#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtInsertSkill; }
namespace RPG::GameCore { class TaskContext; }

#define PKLCOOHLBEH_CTOR_OFFSET UNITYSDK_OFFSET(0xCBFF5C0)
#define PKLCOOHLBEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCBFF5F0)

inline static constexpr unsigned int PKLCOOHLBEH_TypeDefinitionIndex = 55093;

	class PKLCOOHLBEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtInsertSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + PKLCOOHLBEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLCOOHLBEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
