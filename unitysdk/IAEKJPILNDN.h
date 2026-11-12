#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define IAEKJPILNDN_CTOR_OFFSET UNITYSDK_OFFSET(0x16DAC880)
#define IAEKJPILNDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DACE90)
#define IAEKJPILNDN_MNBCEAPBHCE_OFFSET UNITYSDK_OFFSET(0x16DAD2F0)
#define IAEKJPILNDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DACB30)
#define IAEKJPILNDN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16DACE40)
#define IAEKJPILNDN_TICK_OFFSET UNITYSDK_OFFSET(0x16DAD8E0)

inline static constexpr unsigned int IAEKJPILNDN_TypeDefinitionIndex = 54353;

	class IAEKJPILNDN : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HDPCLBHCDIF; // 0x18
		::KFELGAIGHAP* KKBPDJDFOEC; // 0x20
		::RPG::GameCore::QteCatchGhostRewindListener* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* DMKOLLPGHCF; // 0x30
		::KFELGAIGHAP* MALOFCFGGEF; // 0x38
		::KFELGAIGHAP* APCGOOFNNEO; // 0x40
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x48
		::KFELGAIGHAP* BJHAAFHJOKH; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + IAEKJPILNDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_DISPOSE_OFFSET))(this);
		}

		::System::Void MNBCEAPBHCE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IAEKJPILNDN_MNBCEAPBHCE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAEKJPILNDN_TICK_OFFSET))(this, a1);
		}

	};
