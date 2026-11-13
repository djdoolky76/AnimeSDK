#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define OJPAEPEJBGP_CTOR_OFFSET UNITYSDK_OFFSET(0x194CE180)
#define OJPAEPEJBGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x194CE1B0)

inline static constexpr unsigned int OJPAEPEJBGP_TypeDefinitionIndex = 54396;

	class OJPAEPEJBGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomString*))((::PBYTE)hIl2Cpp + OJPAEPEJBGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPAEPEJBGP_ONTASKBEGIN_OFFSET))(this);
		}

	};
