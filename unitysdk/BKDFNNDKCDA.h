#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBILAKDENF.h"
namespace RPG::GameCore { class BattleSingleClickQTEConfig; }
namespace RPG::GameCore { class TaskContext; }

#define BKDFNNDKCDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ADE70)

inline static constexpr unsigned int BKDFNNDKCDA_TypeDefinitionIndex = 56192;

	class BKDFNNDKCDA : public ::GIBILAKDENF
	{
	public:
		::System::Boolean HNDKDLMDKBJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::BattleSingleClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleSingleClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BKDFNNDKCDA_CTOR_OFFSET))(this, a1, a2);
		}

	};
