#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BECDDNCCKHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1630D480)
#define BECDDNCCKHJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1630C880)
#define BECDDNCCKHJ_FPJMPMFGMII_OFFSET UNITYSDK_OFFSET(0x1630CCC0)

	class BECDDNCCKHJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECDDNCCKHJ_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + BECDDNCCKHJ_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPJMPMFGMII(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::FixPoint a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + BECDDNCCKHJ_FPJMPMFGMII_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
