#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IKKJJHHENJB_KEIMAGBGCDP_CLEAR_OFFSET UNITYSDK_OFFSET(0x16493D70)
#define IKKJJHHENJB_KEIMAGBGCDP_CTOR_OFFSET UNITYSDK_OFFSET(0x16493DC0)
#define IKKJJHHENJB_KEIMAGBGCDP_GHOKNPBDLJC_OFFSET UNITYSDK_OFFSET(0x16492C10)
#define IKKJJHHENJB_KEIMAGBGCDP_NGIIIPMKPND_OFFSET UNITYSDK_OFFSET(0x16493A30)
#define IKKJJHHENJB_KEIMAGBGCDP_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x16493240)

	class IKKJJHHENJB_KEIMAGBGCDP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::Transform* NNHJMGCALHP; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::System::Int32 EIBNDELGJCK; // 0x28
		::System::Boolean DEFDAIHJLAK; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single MFAFKCOAPKO; // 0x30
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
