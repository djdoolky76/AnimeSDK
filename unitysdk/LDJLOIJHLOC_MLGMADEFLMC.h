#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDJNAGDJEKB;
class NOEBJBDLNGN;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define LDJLOIJHLOC_MLGMADEFLMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC3AD0)
#define LDJLOIJHLOC_MLGMADEFLMC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBEC36D0)
#define LDJLOIJHLOC_MLGMADEFLMC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBEC3C30)

inline static constexpr unsigned int LDJLOIJHLOC_MLGMADEFLMC_TypeDefinitionIndex = 58682;

	class LDJLOIJHLOC_MLGMADEFLMC : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* DICDJJOJKGF; // 0x10
		::EDJNAGDJEKB* HLEBHGOGINF; // 0x18
		::RPG::GameCore::AdventureCharacterController* JIIKAEMELPJ; // 0x20
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x28
		::NOEBJBDLNGN* DJJKNHPLHDI; // 0x30
		::System::Int32 NMOBOOBPDMK; // 0x38
		::System::Boolean DHHGLHOOCMA; // 0x3C
		::System::Boolean BEIHEDFDKNM; // 0x3D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 GGBKHGGBIBA; // 0x40
		::UnityEngine::Vector3 FDNEHONELCD; // 0x4C
		::System::Single IDKONBFPBLH; // 0x58
		::System::Single EHGOOACNAFO; // 0x5C
		::System::Single ILAEHKNJEJG; // 0x60
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x64
		::UnityEngine::Vector3 PMFPJPONLLE; // 0x70
		::UnityEngine::Vector3 OJKLFLEHLKO; // 0x7C
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
