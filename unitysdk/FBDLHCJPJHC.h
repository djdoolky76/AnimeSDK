#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetModifierEffectVisible; }
namespace RPG::GameCore { class TaskContext; }

#define FBDLHCJPJHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15697220)
#define FBDLHCJPJHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15697250)

	class FBDLHCJPJHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierEffectVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierEffectVisible*))((::PBYTE)hIl2Cpp + FBDLHCJPJHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLHCJPJHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
