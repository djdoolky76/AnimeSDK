#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IKKJJHHENJB_KEIMAGBGCDP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B5755A0)
#define IKKJJHHENJB_KEIMAGBGCDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B575600)
#define IKKJJHHENJB_KEIMAGBGCDP_GHOKNPBDLJC_OFFSET UNITYSDK_OFFSET(0x1B574F60)
#define IKKJJHHENJB_KEIMAGBGCDP_LGNHBFIENBC_OFFSET UNITYSDK_OFFSET(0x1B574A30)
#define IKKJJHHENJB_KEIMAGBGCDP_NGIIIPMKPND_OFFSET UNITYSDK_OFFSET(0x1B5751D0)
#define IKKJJHHENJB_KEIMAGBGCDP_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x1B575510)

inline static constexpr unsigned int IKKJJHHENJB_KEIMAGBGCDP_TypeDefinitionIndex = 62123;

	class IKKJJHHENJB_KEIMAGBGCDP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::Transform* NNHJMGCALHP; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::System::Int32 FJOJKLGJOGO; // 0x28
		::System::Boolean DEFDAIHJLAK; // 0x2C
		::System::Boolean JBDPKIJKMIO; // 0x2D
		::System::Boolean FAFAPHPDMFF; // 0x2E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::NPCSubType EPFHBGNGBBK; // 0x30
		::System::Int32 EIBNDELGJCK; // 0x34
		::System::Single MFAFKCOAPKO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_CTOR_OFFSET))(this);
		}

		::System::Boolean GHOKNPBDLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_GHOKNPBDLJC_OFFSET))(this);
		}

		::System::Boolean LGNHBFIENBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIMAGBGCDP_LGNHBFIENBC_OFFSET))(this);
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
