#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableRogueTitanBless; }
namespace RPG::GameCore { class TaskContext; }

#define OHPKLNDNPEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE75D30)
#define OHPKLNDNPEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE75D60)

inline static constexpr unsigned int OHPKLNDNPEA_TypeDefinitionIndex = 55004;

	class OHPKLNDNPEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableRogueTitanBless* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableRogueTitanBless*))((::PBYTE)hIl2Cpp + OHPKLNDNPEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPKLNDNPEA_ONTASKBEGIN_OFFSET))(this);
		}

	};
