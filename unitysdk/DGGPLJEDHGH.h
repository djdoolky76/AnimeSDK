#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotSetHudActive; }
namespace RPG::GameCore { class TaskContext; }

#define DGGPLJEDHGH_CTOR_OFFSET UNITYSDK_OFFSET(0xE84A160)
#define DGGPLJEDHGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE84A190)

inline static constexpr unsigned int DGGPLJEDHGH_TypeDefinitionIndex = 58749;

	class DGGPLJEDHGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetHudActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetHudActive*))((::PBYTE)hIl2Cpp + DGGPLJEDHGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLJEDHGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
