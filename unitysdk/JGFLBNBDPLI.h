#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGFLBNBDPLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB193400)
#define JGFLBNBDPLI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB193420)

inline static constexpr unsigned int JGFLBNBDPLI_TypeDefinitionIndex = 59190;

	class JGFLBNBDPLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapPartToOwner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + JGFLBNBDPLI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JGFLBNBDPLI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
