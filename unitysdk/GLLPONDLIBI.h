#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleSeekOnBGM; }
namespace RPG::GameCore { class TaskContext; }

#define GLLPONDLIBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABD1A0)
#define GLLPONDLIBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABD1D0)

inline static constexpr unsigned int GLLPONDLIBI_TypeDefinitionIndex = 57957;

	class GLLPONDLIBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleSeekOnBGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleSeekOnBGM*))((::PBYTE)hIl2Cpp + GLLPONDLIBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLPONDLIBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
