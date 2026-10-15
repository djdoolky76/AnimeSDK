#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBossTotalHP; }
namespace RPG::GameCore { class TaskContext; }

#define DONINKKPPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEE1B0)
#define DONINKKPPHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FEE290)

inline static constexpr unsigned int DONINKKPPHN_TypeDefinitionIndex = 55416;

	class DONINKKPPHN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*))((::PBYTE)hIl2Cpp + DONINKKPPHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONINKKPPHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
