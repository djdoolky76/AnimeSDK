#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotAddPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define HOHLLMPIKFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAAD30)
#define HOHLLMPIKFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DAAD60)

inline static constexpr unsigned int HOHLLMPIKFD_TypeDefinitionIndex = 58745;

	class HOHLLMPIKFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotAddPickupCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotAddPickupCount*))((::PBYTE)hIl2Cpp + HOHLLMPIKFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHLLMPIKFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
