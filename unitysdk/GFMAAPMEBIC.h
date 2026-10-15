#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define GFMAAPMEBIC_CTOR_OFFSET UNITYSDK_OFFSET(0x159FCBD0)
#define GFMAAPMEBIC_GETVALUE_OFFSET UNITYSDK_OFFSET(0x159FC9C0)

inline static constexpr unsigned int GFMAAPMEBIC_TypeDefinitionIndex = 77398;

	class GFMAAPMEBIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMAAPMEBIC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetValue(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + GFMAAPMEBIC_GETVALUE_OFFSET))(this, a1, a2, a3);
		}

	};
