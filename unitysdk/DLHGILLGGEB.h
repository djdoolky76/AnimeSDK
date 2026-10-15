#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockTargetHP; }

#define DLHGILLGGEB_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A0710)
#define DLHGILLGGEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8A0740)

inline static constexpr unsigned int DLHGILLGGEB_TypeDefinitionIndex = 55793;

	class DLHGILLGGEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockTargetHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockTargetHP*))((::PBYTE)hIl2Cpp + DLHGILLGGEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHGILLGGEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
