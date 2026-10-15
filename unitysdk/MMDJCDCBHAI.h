#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmNotify; }
namespace System { class Object; }

#define MMDJCDCBHAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BAA30)
#define MMDJCDCBHAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BABD0)
#define MMDJCDCBHAI_IMNGGLGFCJG_OFFSET UNITYSDK_OFFSET(0xB9BAD20)
#define MMDJCDCBHAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BAAC0)
#define MMDJCDCBHAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BAB80)
#define MMDJCDCBHAI_TICK_OFFSET UNITYSDK_OFFSET(0xB9BAE70)

inline static constexpr unsigned int MMDJCDCBHAI_TypeDefinitionIndex = 53480;

	class MMDJCDCBHAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMusicRhythmNotify* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* CMMHAKEAFAC; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Boolean BHEIANKOOPN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmNotify*))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_DISPOSE_OFFSET))(this);
		}

		::System::Void IMNGGLGFCJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_IMNGGLGFCJG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMDJCDCBHAI_TICK_OFFSET))(this, a1);
		}

	};
