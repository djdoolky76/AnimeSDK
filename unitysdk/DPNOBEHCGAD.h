#pragma once
#include "unitysdk/unitysdk.h"
class NDEKPFNFNDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPNOBEHCGAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1265DCF0)
#define DPNOBEHCGAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1265E060)
#define DPNOBEHCGAD_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1265DE60)

	class DPNOBEHCGAD
	{
	public:
		::Il2CppArray<::NDEKPFNFNDD*>* PDOFFHLJMGJ; // 0x18
		::System::Boolean MNGCOMODOEB; // 0x20
		::System::Void _ctor(::RPG::GameCore::TargetSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + DPNOBEHCGAD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DPNOBEHCGAD_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DPNOBEHCGAD_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
