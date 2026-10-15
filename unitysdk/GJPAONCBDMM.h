#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SetMusicRhythmCamera; }
namespace RPG::GameCore { class TaskContext; }

#define GJPAONCBDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A7F080)
#define GJPAONCBDMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A7F360)
#define GJPAONCBDMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A7F170)
#define GJPAONCBDMM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A7F310)
#define GJPAONCBDMM_TICK_OFFSET UNITYSDK_OFFSET(0x15A7F4C0)

inline static constexpr unsigned int GJPAONCBDMM_TypeDefinitionIndex = 53247;

	class GJPAONCBDMM : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* GBLJDCNIHNJ; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::SetMusicRhythmCamera* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* BLMMJCIHINO; // 0x30
		::System::Boolean GPIPKFHMHOK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + GJPAONCBDMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPAONCBDMM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPAONCBDMM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPAONCBDMM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJPAONCBDMM_TICK_OFFSET))(this, a1);
		}

	};
