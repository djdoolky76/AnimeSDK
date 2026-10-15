#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MarkAwardTargetUsed; }
namespace RPG::GameCore { class TaskContext; }

#define EHOKNKBHALG_CTOR_OFFSET UNITYSDK_OFFSET(0x154BA9A0)
#define EHOKNKBHALG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154BA9D0)

inline static constexpr unsigned int EHOKNKBHALG_TypeDefinitionIndex = 58208;

	class EHOKNKBHALG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarkAwardTargetUsed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarkAwardTargetUsed*))((::PBYTE)hIl2Cpp + EHOKNKBHALG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOKNKBHALG_ONTASKBEGIN_OFFSET))(this);
		}

	};
