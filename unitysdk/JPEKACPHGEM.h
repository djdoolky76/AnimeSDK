#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByDelayCumulate; }
namespace RPG::GameCore { class TaskContext; }

#define JPEKACPHGEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B5280)
#define JPEKACPHGEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2B5360)

inline static constexpr unsigned int JPEKACPHGEM_TypeDefinitionIndex = 55428;

	class JPEKACPHGEM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*))((::PBYTE)hIl2Cpp + JPEKACPHGEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEKACPHGEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
