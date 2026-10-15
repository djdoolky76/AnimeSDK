#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleChangeAvatar_EnterStage; }
namespace RPG::GameCore { class TaskContext; }

#define CAONJGKGHFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC499BB0)
#define CAONJGKGHFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC499BE0)
#define CAONJGKGHFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC499C20)

inline static constexpr unsigned int CAONJGKGHFB_TypeDefinitionIndex = 54876;

	class CAONJGKGHFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*))((::PBYTE)hIl2Cpp + CAONJGKGHFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONJGKGHFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONJGKGHFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
