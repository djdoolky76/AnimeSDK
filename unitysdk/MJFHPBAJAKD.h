#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define MJFHPBAJAKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7970)
#define MJFHPBAJAKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3A7E20)
#define MJFHPBAJAKD_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0x1A3A8370)
#define MJFHPBAJAKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3A7D00)
#define MJFHPBAJAKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A3A7DD0)
#define MJFHPBAJAKD_TICK_OFFSET UNITYSDK_OFFSET(0x1A3A89D0)

inline static constexpr unsigned int MJFHPBAJAKD_TypeDefinitionIndex = 54202;

	class MJFHPBAJAKD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* NJBHAENKEEF; // 0x18
		::KFELGAIGHAP* NDPIPPKNDMA; // 0x20
		::KFELGAIGHAP* KIJAPLDDHNL; // 0x28
		::KFELGAIGHAP* CIFOILLJFNF; // 0x30
		::RPG::GameCore::OpticalIllusionPuzzleEventListener* IGHAHBNLIJA; // 0x38
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x40
		::KFELGAIGHAP* BAONKBDCBDN; // 0x48
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x50
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x58
		::KFELGAIGHAP* LGNCIBMAIEA; // 0x60
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_DISPOSE_OFFSET))(this);
		}

		::System::Void LINOOBJGCGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_LINOOBJGCGJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJFHPBAJAKD_TICK_OFFSET))(this, a1);
		}

	};
