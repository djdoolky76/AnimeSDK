#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMNMPFLBAFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC328930)
#define PMNMPFLBAFD_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC328520)

inline static constexpr unsigned int PMNMPFLBAFD_TypeDefinitionIndex = 77356;

	class PMNMPFLBAFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNMPFLBAFD_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + PMNMPFLBAFD_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

	};
