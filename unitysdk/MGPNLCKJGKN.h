#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBetweenEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGPNLCKJGKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC1E0B30)
#define MGPNLCKJGKN_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC1E0B50)

inline static constexpr unsigned int MGPNLCKJGKN_TypeDefinitionIndex = 60398;

	class MGPNLCKJGKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapBetweenEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + MGPNLCKJGKN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MGPNLCKJGKN_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
