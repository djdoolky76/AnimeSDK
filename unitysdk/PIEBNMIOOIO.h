#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilterTargetType; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIEBNMIOOIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC25D630)
#define PIEBNMIOOIO_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC25D650)

	class PIEBNMIOOIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFilterTargetType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + PIEBNMIOOIO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PIEBNMIOOIO_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
