#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByDeathOrder; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGMDLAMBNKI_COMPARE_OFFSET UNITYSDK_OFFSET(0xB3F5E40)
#define KGMDLAMBNKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F5E20)
#define KGMDLAMBNKI_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xB3F5F10)
#define KGMDLAMBNKI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB3F5F60)

	class KGMDLAMBNKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByDeathOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + KGMDLAMBNKI_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KGMDLAMBNKI_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KGMDLAMBNKI_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KGMDLAMBNKI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
