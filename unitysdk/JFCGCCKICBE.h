#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleChangeAvatar_PreEnterStage; }
namespace RPG::GameCore { class TaskContext; }

#define JFCGCCKICBE_CTOR_OFFSET UNITYSDK_OFFSET(0x166322C0)
#define JFCGCCKICBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166322F0)
#define JFCGCCKICBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16632330)

inline static constexpr unsigned int JFCGCCKICBE_TypeDefinitionIndex = 54878;

	class JFCGCCKICBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*))((::PBYTE)hIl2Cpp + JFCGCCKICBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCGCCKICBE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCGCCKICBE_ONTASKBEGIN_OFFSET))(this);
		}

	};
