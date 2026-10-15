#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideEntityInActionBarByDelay; }
namespace RPG::GameCore { class TaskContext; }

#define ILKLJBPBDHI_CTOR_OFFSET UNITYSDK_OFFSET(0x164B60A0)
#define ILKLJBPBDHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B60D0)

inline static constexpr unsigned int ILKLJBPBDHI_TypeDefinitionIndex = 55095;

	class ILKLJBPBDHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityInActionBarByDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityInActionBarByDelay*))((::PBYTE)hIl2Cpp + ILKLJBPBDHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKLJBPBDHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
