#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetViewModeEnabled; }
namespace RPG::GameCore { class TaskContext; }

#define EHAKMACGEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1549D350)
#define EHAKMACGEEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1549D380)

inline static constexpr unsigned int EHAKMACGEEA_TypeDefinitionIndex = 58590;

	class EHAKMACGEEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetViewModeEnabled* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetViewModeEnabled*))((::PBYTE)hIl2Cpp + EHAKMACGEEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAKMACGEEA_ONTASKBEGIN_OFFSET))(this);
		}

	};
