#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KNIBNJEDCOB_AFBEMPFNKOK_OFFSET UNITYSDK_OFFSET(0xB585230)
#define KNIBNJEDCOB_BKCCFPHPIHM_OFFSET UNITYSDK_OFFSET(0xB585500)
#define KNIBNJEDCOB_BLGNPEBOIJE_OFFSET UNITYSDK_OFFSET(0xB584DD0)
#define KNIBNJEDCOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB584550)
#define KNIBNJEDCOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB584750)
#define KNIBNJEDCOB_JCELIELDIPJ_OFFSET UNITYSDK_OFFSET(0xB5851E0)
#define KNIBNJEDCOB_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB5855E0)
#define KNIBNJEDCOB_MBEGOPEGMNJ_OFFSET UNITYSDK_OFFSET(0xB584F80)
#define KNIBNJEDCOB_OHHDOPFLFPD_OFFSET UNITYSDK_OFFSET(0xB5853D0)
#define KNIBNJEDCOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5849B0)
#define KNIBNJEDCOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB584700)
#define KNIBNJEDCOB_OOCJBAOLPBO_OFFSET UNITYSDK_OFFSET(0xB5854B0)
#define KNIBNJEDCOB_TICK_OFFSET UNITYSDK_OFFSET(0xB5846A0)

inline static constexpr unsigned int KNIBNJEDCOB_TypeDefinitionIndex = 58465;

	class KNIBNJEDCOB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* GGGKNHKPGHP; // 0x18
		::RPG::GameCore::RogueGambleFuncShowUI* JKJPFJALGKO; // 0x20
		::KFELGAIGHAP* JFAMPANPALF; // 0x28
		::RPG::Client::RogueGambleBaseFunc* HDHGCLLONGP; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* AFPMOJKPEIC; // 0x40
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x48
		::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x50
		::System::Boolean MJGDFAHFDDF; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 FBJCMAAHKIP; // 0x5C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BLGNPEBOIJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_BLGNPEBOIJE_OFFSET))(this, a1);
		}

		::System::Void JCELIELDIPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_JCELIELDIPJ_OFFSET))(this, a1);
		}

		::System::Void MBEGOPEGMNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_MBEGOPEGMNJ_OFFSET))(this);
		}

		::System::Void AFBEMPFNKOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_AFBEMPFNKOK_OFFSET))(this, a1);
		}

		::System::Void OOCJBAOLPBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_OOCJBAOLPBO_OFFSET))(this, a1);
		}

		::System::Void BKCCFPHPIHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_BKCCFPHPIHM_OFFSET))(this);
		}

		::System::Void OHHDOPFLFPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_OHHDOPFLFPD_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBNJEDCOB_JNIKOAEAEHB_OFFSET))(this);
		}

	};
