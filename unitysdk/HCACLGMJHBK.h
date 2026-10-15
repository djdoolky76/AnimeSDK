#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCACLGMJHBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C090C0)
#define HCACLGMJHBK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15C086B0)

inline static constexpr unsigned int HCACLGMJHBK_TypeDefinitionIndex = 77335;

	class HCACLGMJHBK : public ::System::Object
	{
	public:
		// static const ::System::Object LCPDBNBLAFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCACLGMJHBK_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + HCACLGMJHBK_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

	};
