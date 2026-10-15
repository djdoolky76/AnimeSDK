#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class MusicRhythmEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define NCJNKHCADCH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB13B10)
#define NCJNKHCADCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB13DD0)
#define NCJNKHCADCH_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xBB14090)
#define NCJNKHCADCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB13C70)
#define NCJNKHCADCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB13D80)
#define NCJNKHCADCH_TICK_OFFSET UNITYSDK_OFFSET(0xBB14400)

inline static constexpr unsigned int NCJNKHCADCH_TypeDefinitionIndex = 53032;

	class NCJNKHCADCH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MusicRhythmEventListener* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* JHLKCDGNIPI; // 0x20
		::KFELGAIGHAP* LPNHNDOGAPI; // 0x28
		::KFELGAIGHAP* CIFOILLJFNF; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::System::Boolean BEEEMPBIMGA; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + NCJNKHCADCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJNKHCADCH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJNKHCADCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJNKHCADCH_DISPOSE_OFFSET))(this);
		}

		::System::Void LINOOBJGCGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NCJNKHCADCH_LINOOBJGCGJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCJNKHCADCH_TICK_OFFSET))(this, a1);
		}

	};
