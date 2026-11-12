#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class PlanetFesAvatarEffectController; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define MDLLFPAKHBL_CTOR_OFFSET UNITYSDK_OFFSET(0xC15F100)
#define MDLLFPAKHBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC15F040)
#define MDLLFPAKHBL_FGFILICHKOH_OFFSET UNITYSDK_OFFSET(0xC15F090)
#define MDLLFPAKHBL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC15EFD0)

inline static constexpr unsigned int MDLLFPAKHBL_TypeDefinitionIndex = 68599;

	class MDLLFPAKHBL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::PlanetFesAvatarEffectController* LLFEHKABAIA; // 0x18
		::UnityEngine::Canvas* PMNMEPIMANC; // 0x20
		::UnityEngine::Transform* LPEOHKHOLEP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLLFPAKHBL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PlanetFesAvatarEffectController* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarEffectController*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MDLLFPAKHBL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLLFPAKHBL_DISPOSE_OFFSET))(this);
		}

		::System::Void FGFILICHKOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDLLFPAKHBL_FGFILICHKOH_OFFSET))(this, a1);
		}

	};
