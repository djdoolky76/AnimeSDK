#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
class EKFMIDBJDIA;
class GPPAJJILOHB;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define PNPGHECNGHN_CEGKAKBNMGK_OFFSET UNITYSDK_OFFSET(0xC356AC0)
#define PNPGHECNGHN_CTOR_OFFSET UNITYSDK_OFFSET(0xC356C70)
#define PNPGHECNGHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC356540)
#define PNPGHECNGHN_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xC356B80)
#define PNPGHECNGHN_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0xC356A60)
#define PNPGHECNGHN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC3563C0)
#define PNPGHECNGHN_MJDGLEAGCDD_OFFSET UNITYSDK_OFFSET(0xC356830)
#define PNPGHECNGHN_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xC3566A0)
#define PNPGHECNGHN_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC356750)
#define PNPGHECNGHN_TICK_OFFSET UNITYSDK_OFFSET(0xC3567C0)

	class PNPGHECNGHN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::GPPAJJILOHB* BNBNOMCAEPN; // 0x18
		::RPG::GameCore::EntityTimeRewindComponent* IJKJPKMMOIG; // 0x20
		::RPG::GameCore::TimeRewindView OPNIIHNGONC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNPGHECNGHN_TICK_OFFSET))(this, a1);
		}

		::System::Void MJDGLEAGCDD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNPGHECNGHN_MJDGLEAGCDD_OFFSET))(this, a1);
		}

		::System::Void HIJBFOMCKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPGHECNGHN_HIJBFOMCKMI_OFFSET))(this);
		}

		::System::Void CEGKAKBNMGK(::RPG::GameCore::TimeRewindView a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView))((::PBYTE)hIl2Cpp + PNPGHECNGHN_CEGKAKBNMGK_OFFSET))(this, a1);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PNPGHECNGHN_FEKHNFNGLNO_OFFSET))(this, a1);
		}

	};
