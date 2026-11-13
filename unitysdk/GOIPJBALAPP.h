#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOIPJBALAPP_CTOR_OFFSET UNITYSDK_OFFSET(0x187B9D30)
#define GOIPJBALAPP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x187B9830)

inline static constexpr unsigned int GOIPJBALAPP_TypeDefinitionIndex = 79673;

	class GOIPJBALAPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIPJBALAPP_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + GOIPJBALAPP_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

	};
