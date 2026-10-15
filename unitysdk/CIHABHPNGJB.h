#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIHABHPNGJB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF6D4B0)
#define CIHABHPNGJB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF6D520)
#define CIHABHPNGJB_HHIHNBDLEOJ_OFFSET UNITYSDK_OFFSET(0xCF6D7A0)

inline static constexpr unsigned int CIHABHPNGJB_TypeDefinitionIndex = 59104;

	class CIHABHPNGJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::AdvGroupFetchTargetByString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + CIHABHPNGJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CIHABHPNGJB_EVALUATE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HHIHNBDLEOJ(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CIHABHPNGJB_HHIHNBDLEOJ_OFFSET))(a1, a2, a3, a4);
		}

	};
