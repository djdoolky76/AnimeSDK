#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDJNAGDJEKB;
class NOEBJBDLNGN;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define LDJLOIJHLOC_MLGMADEFLMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB62E240)
#define LDJLOIJHLOC_MLGMADEFLMC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB62DE40)
#define LDJLOIJHLOC_MLGMADEFLMC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB62E3A0)

	class LDJLOIJHLOC_MLGMADEFLMC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::RPG::GameCore::AdventureCharacterController* JIIKAEMELPJ; // 0x18
		::RPG::GameCore::TransformComponent* DICDJJOJKGF; // 0x20
		::NOEBJBDLNGN* DJJKNHPLHDI; // 0x28
		::EDJNAGDJEKB* HLEBHGOGINF; // 0x30
		::UnityEngine::Vector3 FDNEHONELCD; // 0x38
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x44
		::System::Boolean DHHGLHOOCMA; // 0x50
		::System::Boolean BEIHEDFDKNM; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 NMOBOOBPDMK; // 0x54
		::System::Single ILAEHKNJEJG; // 0x58
		::UnityEngine::Vector3 PMFPJPONLLE; // 0x5C
		::UnityEngine::Vector3 OJKLFLEHLKO; // 0x68
		::System::Single IDKONBFPBLH; // 0x74
		::System::Single EHGOOACNAFO; // 0x78
		::UnityEngine::Vector3 GGBKHGGBIBA; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MLGMADEFLMC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MLGMADEFLMC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MLGMADEFLMC_HADOHLNHHGB_OFFSET))(this);
		}

	};
