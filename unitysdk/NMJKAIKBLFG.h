#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILOGENDCCG;
class NDEKPFNFNDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMJKAIKBLFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC881A0)
#define NMJKAIKBLFG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC88240)
#define NMJKAIKBLFG_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBC881B0)

	class NMJKAIKBLFG : public ::System::Object
	{
	public:
		::EILOGENDCCG* JBFFLCHOKKO; // 0x10
		::NDEKPFNFNDD* LEMBIAHABFA; // 0x18
		::System::Void _ctor(::EILOGENDCCG* a1, ::NDEKPFNFNDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EILOGENDCCG*, ::NDEKPFNFNDD*))((::PBYTE)hIl2Cpp + NMJKAIKBLFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NMJKAIKBLFG_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NMJKAIKBLFG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
