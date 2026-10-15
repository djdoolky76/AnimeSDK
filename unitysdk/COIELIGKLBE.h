#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COIELIGKLBE_COMPARE_OFFSET UNITYSDK_OFFSET(0xDCB7F00)
#define COIELIGKLBE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB7EE0)
#define COIELIGKLBE_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xDCB8520)
#define COIELIGKLBE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDCB8260)

	class COIELIGKLBE
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::System::Void _ctor(::RPG::GameCore::TargetSortByPredicate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + COIELIGKLBE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + COIELIGKLBE_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + COIELIGKLBE_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + COIELIGKLBE_JIGJDOFEJMI_OFFSET))(this, a1);
		}

	};
