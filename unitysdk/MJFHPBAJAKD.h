#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define MJFHPBAJAKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB96AB70)
#define MJFHPBAJAKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB96B030)
#define MJFHPBAJAKD_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xB96B590)
#define MJFHPBAJAKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB96AF00)
#define MJFHPBAJAKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB96AFE0)
#define MJFHPBAJAKD_TICK_OFFSET UNITYSDK_OFFSET(0xB96BBF0)

inline static constexpr unsigned int MJFHPBAJAKD_TypeDefinitionIndex = 53042;

	class MJFHPBAJAKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* CIFOILLJFNF; // 0x20
		::KFELGAIGHAP* NJBHAENKEEF; // 0x28
		::KFELGAIGHAP* KIJAPLDDHNL; // 0x30
		::KFELGAIGHAP* LGNCIBMAIEA; // 0x38
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x40
		::RPG::GameCore::OpticalIllusionPuzzleEventListener* IGHAHBNLIJA; // 0x48
		::KFELGAIGHAP* NDPIPPKNDMA; // 0x50
		::KFELGAIGHAP* BAONKBDCBDN; // 0x58
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x60
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
