#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJNELFFHOKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D232C0)
#define HJNELFFHOKF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D22AA0)

inline static constexpr unsigned int HJNELFFHOKF_TypeDefinitionIndex = 77331;

	class HJNELFFHOKF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNELFFHOKF_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + HJNELFFHOKF_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

	};
