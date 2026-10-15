#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleChangeAvatar_End; }
namespace RPG::GameCore { class TaskContext; }

#define CKDKCAGLAOF_CTOR_OFFSET UNITYSDK_OFFSET(0xD7506C0)
#define CKDKCAGLAOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7506F0)
#define CKDKCAGLAOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD750730)

inline static constexpr unsigned int CKDKCAGLAOF_TypeDefinitionIndex = 54875;

	class CKDKCAGLAOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + CKDKCAGLAOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDKCAGLAOF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDKCAGLAOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
