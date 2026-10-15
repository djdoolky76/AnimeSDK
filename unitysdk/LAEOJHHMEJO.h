#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAEOJHHMEJO_COMPARE_OFFSET UNITYSDK_OFFSET(0xB5DD0D0)
#define LAEOJHHMEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DD090)
#define LAEOJHHMEJO_IKJFCHCHHNH_OFFSET UNITYSDK_OFFSET(0xB5DD390)
#define LAEOJHHMEJO_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xB5DD540)
#define LAEOJHHMEJO_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB5DD620)

	class LAEOJHHMEJO
	{
	public:
		::RPG::GameCore::JsonEnum* AALGBNBLDFG; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* HNGJMPDONDF; // 0x20
		::System::Int32 OOHLBFDJMBJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TargetSortByElationPriority* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + LAEOJHHMEJO_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LAEOJHHMEJO_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 IKJFCHCHHNH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LAEOJHHMEJO_IKJFCHCHHNH_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + LAEOJHHMEJO_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LAEOJHHMEJO_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
