#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NpcPossession; }
namespace RPG::GameCore { class TaskContext; }

#define FNKMIJADCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1586C240)
#define FNKMIJADCJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1586C270)

inline static constexpr unsigned int FNKMIJADCJO_TypeDefinitionIndex = 53035;

	class FNKMIJADCJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcPossession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcPossession*))((::PBYTE)hIl2Cpp + FNKMIJADCJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKMIJADCJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
