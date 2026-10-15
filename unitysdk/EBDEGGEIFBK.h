#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAdvCharacterResidentEffectVisible; }
namespace RPG::GameCore { class TaskContext; }

#define EBDEGGEIFBK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CECC40)
#define EBDEGGEIFBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CECC70)

	class EBDEGGEIFBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + EBDEGGEIFBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDEGGEIFBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
