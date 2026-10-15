#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMCONOPPGAF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA20610)
#define CMCONOPPGAF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA20630)

inline static constexpr unsigned int CMCONOPPGAF_TypeDefinitionIndex = 59151;

	class CMCONOPPGAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAliveSourceEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + CMCONOPPGAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMCONOPPGAF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
