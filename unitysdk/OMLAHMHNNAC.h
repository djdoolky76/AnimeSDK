#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableBattleOnAttacked; }
namespace RPG::GameCore { class TaskContext; }

#define OMLAHMHNNAC_CTOR_OFFSET UNITYSDK_OFFSET(0x17D58520)
#define OMLAHMHNNAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D58550)

inline static constexpr unsigned int OMLAHMHNNAC_TypeDefinitionIndex = 59341;

	class OMLAHMHNNAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableBattleOnAttacked* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableBattleOnAttacked*))((::PBYTE)hIl2Cpp + OMLAHMHNNAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLAHMHNNAC_ONTASKBEGIN_OFFSET))(this);
		}

	};
