#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IKKJJHHENJB_KEIMAGBGCDP_CLEAR_OFFSET UNITYSDK_OFFSET(0x16486670)
#define IKKJJHHENJB_KEIMAGBGCDP_CTOR_OFFSET UNITYSDK_OFFSET(0x164866D0)
#define IKKJJHHENJB_KEIMAGBGCDP_GHOKNPBDLJC_OFFSET UNITYSDK_OFFSET(0x16485530)
#define IKKJJHHENJB_KEIMAGBGCDP_NGIIIPMKPND_OFFSET UNITYSDK_OFFSET(0x16486340)
#define IKKJJHHENJB_KEIMAGBGCDP_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x16485B50)

inline static constexpr unsigned int IKKJJHHENJB_KEIMAGBGCDP_TypeDefinitionIndex = 60746;

	class IKKJJHHENJB_KEIMAGBGCDP : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NNHJMGCALHP; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::System::Single MFAFKCOAPKO; // 0x28
		::System::Int32 EIBNDELGJCK; // 0x2C
		::System::Boolean DEFDAIHJLAK; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::NPCSubType EPFHBGNGBBK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_CTOR_OFFSET))(this);
		}

		::System::Boolean GHOKNPBDLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_GHOKNPBDLJC_OFFSET))(this);
		}

		::System::String* NGIIIPMKPND()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_NGIIIPMKPND_OFFSET))(this);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_CLEAR_OFFSET))(this);
		}

	};
