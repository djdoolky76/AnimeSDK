#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGBHGLHJOJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1665E440)
#define JGBHGLHJOJC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1665E460)

	class JGBHGLHJOJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetTake* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + JGBHGLHJOJC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JGBHGLHJOJC_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
