#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmEvent; }
namespace System { class Object; }

#define IACEDMJOJLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1830)
#define IACEDMJOJLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DF1A60)
#define IACEDMJOJLN_FHPADPIMEKH_OFFSET UNITYSDK_OFFSET(0x15DF1ED0)
#define IACEDMJOJLN_KINKHHBCFDC_OFFSET UNITYSDK_OFFSET(0x15DF1C50)
#define IACEDMJOJLN_OECBLIEBKGP_OFFSET UNITYSDK_OFFSET(0x15DF2150)
#define IACEDMJOJLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DF18C0)
#define IACEDMJOJLN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DF1A10)
#define IACEDMJOJLN_TICK_OFFSET UNITYSDK_OFFSET(0x15DF1DF0)

inline static constexpr unsigned int IACEDMJOJLN_TypeDefinitionIndex = 53479;

	class IACEDMJOJLN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMusicRhythmEvent* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* ILEMLGEGLCC; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::Client::MusicRhythmBoard* MIPPNCGOJNM; // 0x30
		::System::Boolean BHEIANKOOPN; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmEvent*))((::PBYTE)hIl2Cpp + IACEDMJOJLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEDMJOJLN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEDMJOJLN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEDMJOJLN_DISPOSE_OFFSET))(this);
		}

		::System::Void KINKHHBCFDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IACEDMJOJLN_KINKHHBCFDC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IACEDMJOJLN_TICK_OFFSET))(this, a1);
		}

		::System::Void FHPADPIMEKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IACEDMJOJLN_FHPADPIMEKH_OFFSET))(this, a1);
		}

		::System::Void OECBLIEBKGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IACEDMJOJLN_OECBLIEBKGP_OFFSET))(this, a1);
		}

	};
