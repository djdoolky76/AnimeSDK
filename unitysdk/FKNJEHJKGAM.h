#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcCommanded; }
namespace RPG::GameCore { class TaskContext; }

#define FKNJEHJKGAM_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0x15811040)
#define FKNJEHJKGAM_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0x15811300)
#define FKNJEHJKGAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15810ED0)
#define FKNJEHJKGAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15810F60)
#define FKNJEHJKGAM_HFEDENJBDLC_OFFSET UNITYSDK_OFFSET(0x15811460)
#define FKNJEHJKGAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158112B0)
#define FKNJEHJKGAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15811410)
#define FKNJEHJKGAM_TICK_OFFSET UNITYSDK_OFFSET(0x15811150)

	class FKNJEHJKGAM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::GELIALJDFBL* GGMDAFJCJIP; // 0x20
		::RPG::GameCore::AdvNpcCommanded* IGHAHBNLIJA; // 0x28
		::System::Boolean BJIMNGNKDGD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcCommanded* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcCommanded*))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void HFEDENJBDLC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FKNJEHJKGAM_HFEDENJBDLC_OFFSET))(this, a1);
		}

	};
