#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define KDLGAPFHIMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB35F0D0)
#define KDLGAPFHIMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB35F1B0)

inline static constexpr unsigned int KDLGAPFHIMM_TypeDefinitionIndex = 55802;

	class KDLGAPFHIMM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + KDLGAPFHIMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLGAPFHIMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
