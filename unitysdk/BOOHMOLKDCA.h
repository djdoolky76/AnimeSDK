#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOJNGCCBOGI;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define BOOHMOLKDCA_CTOR_OFFSET UNITYSDK_OFFSET(0xC19AA40)
#define BOOHMOLKDCA_DGEDEBKMBPG_1_OFFSET UNITYSDK_OFFSET(0xC19A9B0)
#define BOOHMOLKDCA_DGEDEBKMBPG_OFFSET UNITYSDK_OFFSET(0xC19A0D0)
#define BOOHMOLKDCA_FPDICBGPCDE_OFFSET UNITYSDK_OFFSET(0xC19A320)
#define BOOHMOLKDCA_GEPMKGAJMNP_OFFSET UNITYSDK_OFFSET(0xC19A8F0)

inline static constexpr unsigned int BOOHMOLKDCA_TypeDefinitionIndex = 71550;

	class BOOHMOLKDCA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOHMOLKDCA_CTOR_OFFSET))(this);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BOOHMOLKDCA_DGEDEBKMBPG_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG_1(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + BOOHMOLKDCA_DGEDEBKMBPG_1_OFFSET))(this, a1);
		}

		::System::Boolean GEPMKGAJMNP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BOOHMOLKDCA_GEPMKGAJMNP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* FPDICBGPCDE(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + BOOHMOLKDCA_FPDICBGPCDE_OFFSET))(this, a1, a2);
		}

	};
