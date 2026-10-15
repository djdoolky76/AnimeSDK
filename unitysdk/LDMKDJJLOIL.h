#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOINMKOBOKK;
class OBCBNMHLAJA;
class PNMGLOKELGK;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDMKDJJLOIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB63E150)
#define LDMKDJJLOIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB62A2A0)

	class LDMKDJJLOIL : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* JPCCFKMOIMA; // 0x10
		::System::Collections::Generic::List_1<::OBCBNMHLAJA*>* FGLGMGCMADC; // 0x18
		::System::Collections::Generic::List_1<::PNMGLOKELGK*>* PFBCACBINFA; // 0x20
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* PIELBNECIIN; // 0x28
		::System::String* PFFKPIDGOKB; // 0x30
		::System::Collections::Generic::List_1<::EOINMKOBOKK*>* DLABKLDONJE; // 0x38
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x40
		::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* CIMOOIALONK; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + LDMKDJJLOIL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMKDJJLOIL_DISPOSE_OFFSET))(this);
		}

	};
