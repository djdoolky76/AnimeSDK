#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFLLHODGFLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB171830)
#define BFLLHODGFLP_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB171850)

inline static constexpr unsigned int BFLLHODGFLP_TypeDefinitionIndex = 59241;

	class BFLLHODGFLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapTeamEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + BFLLHODGFLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BFLLHODGFLP_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
