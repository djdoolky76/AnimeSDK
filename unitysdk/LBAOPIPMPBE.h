#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityEnableRootDamper; }
namespace RPG::GameCore { class TaskContext; }

#define LBAOPIPMPBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E7CD0)
#define LBAOPIPMPBE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB5E7DD0)
#define LBAOPIPMPBE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB5E7DE0)
#define LBAOPIPMPBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E7D00)

inline static constexpr unsigned int LBAOPIPMPBE_TypeDefinitionIndex = 52358;

	class LBAOPIPMPBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityEnableRootDamper* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityEnableRootDamper*))((::PBYTE)hIl2Cpp + LBAOPIPMPBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAOPIPMPBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAOPIPMPBE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAOPIPMPBE_ONSKIP_OFFSET))(this);
		}

	};
