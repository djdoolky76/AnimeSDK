#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterShowSummonUI; }
namespace RPG::GameCore { class TaskContext; }

#define OHHMHLLFAFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE64530)
#define OHHMHLLFAFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE64560)

inline static constexpr unsigned int OHHMHLLFAFB_TypeDefinitionIndex = 58533;

	class OHHMHLLFAFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + OHHMHLLFAFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHMHLLFAFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
