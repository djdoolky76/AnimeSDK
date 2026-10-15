#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAHJCPBLDKE_CTOR_OFFSET UNITYSDK_OFFSET(0x12678AC0)
#define EAHJCPBLDKE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12678AE0)

inline static constexpr unsigned int EAHJCPBLDKE_TypeDefinitionIndex = 59248;

	class EAHJCPBLDKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSummonedMinions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + EAHJCPBLDKE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EAHJCPBLDKE_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
