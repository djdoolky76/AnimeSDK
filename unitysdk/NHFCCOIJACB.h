#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define NHFCCOIJACB_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xBBB99A0)
#define NHFCCOIJACB_CLEAR_OFFSET UNITYSDK_OFFSET(0xBBB9760)
#define NHFCCOIJACB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB9B00)
#define NHFCCOIJACB_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0xBBB96F0)
#define NHFCCOIJACB_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xBBB9A70)
#define NHFCCOIJACB_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xBBB97C0)
#define NHFCCOIJACB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBBB9AC0)
#define NHFCCOIJACB_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xBBB9A30)
#define NHFCCOIJACB_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBBB99F0)

inline static constexpr unsigned int NHFCCOIJACB_TypeDefinitionIndex = 60806;

	class NHFCCOIJACB : public ::System::Object
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0x10
		::System::Single CNDJDPHMHNK; // 0x18
		::System::Single HBDJCFFDGDD; // 0x1C
		::System::Single KBDPMBDJIOF; // 0x20
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_CTOR_OFFSET))(this);
		}

		::System::Void EICIBKHOECO(::System::Single a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NHFCCOIJACB_EICIBKHOECO_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + NHFCCOIJACB_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + NHFCCOIJACB_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFCCOIJACB_JLANKNHFKCN_OFFSET))(this);
		}

	};
