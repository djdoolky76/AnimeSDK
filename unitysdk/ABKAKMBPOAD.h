#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ST_Parkour_ByCompareHitFlyCount; }
namespace RPG::GameCore { class TaskContext; }

#define ABKAKMBPOAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1038C0)
#define ABKAKMBPOAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1038F0)

inline static constexpr unsigned int ABKAKMBPOAD_TypeDefinitionIndex = 52130;

	class ABKAKMBPOAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + ABKAKMBPOAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKAKMBPOAD_EVALUATE_OFFSET))(this);
		}

	};
