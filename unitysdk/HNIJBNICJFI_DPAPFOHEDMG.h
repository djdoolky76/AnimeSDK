#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define HNIJBNICJFI_DPAPFOHEDMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D3CA30)
#define HNIJBNICJFI_DPAPFOHEDMG_CTOR_OFFSET UNITYSDK_OFFSET(0x16D3CA80)
#define HNIJBNICJFI_DPAPFOHEDMG_NGIIIPMKPND_OFFSET UNITYSDK_OFFSET(0x16D3C5C0)
#define HNIJBNICJFI_DPAPFOHEDMG_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x16D3B650)

inline static constexpr unsigned int HNIJBNICJFI_DPAPFOHEDMG_TypeDefinitionIndex = 62114;

	class HNIJBNICJFI_DPAPFOHEDMG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::UnityEngine::Transform* NNHJMGCALHP; // 0x20
		::System::Single MFAFKCOAPKO; // 0x28
		::System::Boolean LCECMAIHOAE; // 0x2C
		::System::Boolean DMHJINGNBIH; // 0x2D
		::System::Boolean HDPBMLFMLNC; // 0x2E
		::System::Boolean DDEINLDDKJJ; // 0x2F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DPAPFOHEDMG_CTOR_OFFSET))(this);
		}

		::System::String* NGIIIPMKPND()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DPAPFOHEDMG_NGIIIPMKPND_OFFSET))(this);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DPAPFOHEDMG_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DPAPFOHEDMG_CLEAR_OFFSET))(this);
		}

	};
