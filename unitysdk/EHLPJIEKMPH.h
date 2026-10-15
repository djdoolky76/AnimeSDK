#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHLPJIEKMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x154B2480)
#define EHLPJIEKMPH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x154B24A0)

inline static constexpr unsigned int EHLPJIEKMPH_TypeDefinitionIndex = 59242;

	class EHLPJIEKMPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapEnemyTeamEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + EHLPJIEKMPH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EHLPJIEKMPH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
