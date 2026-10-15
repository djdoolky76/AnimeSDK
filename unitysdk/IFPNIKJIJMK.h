#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class MECFAIHLBFM;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define IFPNIKJIJMK_AFBEMPFNKOK_OFFSET UNITYSDK_OFFSET(0x15F33F60)
#define IFPNIKJIJMK_BKCCFPHPIHM_OFFSET UNITYSDK_OFFSET(0x15F348B0)
#define IFPNIKJIJMK_BLGNPEBOIJE_OFFSET UNITYSDK_OFFSET(0x15F33BA0)
#define IFPNIKJIJMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15F33150)
#define IFPNIKJIJMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F33450)
#define IFPNIKJIJMK_GKGECHAAICA_OFFSET UNITYSDK_OFFSET(0x15F345E0)
#define IFPNIKJIJMK_JCELIELDIPJ_OFFSET UNITYSDK_OFFSET(0x15F33F10)
#define IFPNIKJIJMK_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x15F34990)
#define IFPNIKJIJMK_LMILMKHBKIP_OFFSET UNITYSDK_OFFSET(0x15F341D0)
#define IFPNIKJIJMK_MBEGOPEGMNJ_OFFSET UNITYSDK_OFFSET(0x15F33CB0)
#define IFPNIKJIJMK_OHHDOPFLFPD_OFFSET UNITYSDK_OFFSET(0x15F343E0)
#define IFPNIKJIJMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F33750)
#define IFPNIKJIJMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F33400)
#define IFPNIKJIJMK_OOCJBAOLPBO_OFFSET UNITYSDK_OFFSET(0x15F344C0)
#define IFPNIKJIJMK_PPDBAGOHOIN_OFFSET UNITYSDK_OFFSET(0x15F346C0)
#define IFPNIKJIJMK_TICK_OFFSET UNITYSDK_OFFSET(0x15F33310)

	class IFPNIKJIJMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x18
		::RPG::Client::RogueGambleBaseFunc* HDHGCLLONGP; // 0x20
		::KFELGAIGHAP* AFPMOJKPEIC; // 0x28
		::KFELGAIGHAP* AKDBFICHCFD; // 0x30
		::KFELGAIGHAP* JFAMPANPALF; // 0x38
		::KFELGAIGHAP* GGGKNHKPGHP; // 0x40
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::MECFAIHLBFM* JKJPFJALGKO; // 0x58
		::System::Boolean MJGDFAHFDDF; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 FBJCMAAHKIP; // 0x64
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MECFAIHLBFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MECFAIHLBFM*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BLGNPEBOIJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_BLGNPEBOIJE_OFFSET))(this, a1);
		}

		::System::Void JCELIELDIPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_JCELIELDIPJ_OFFSET))(this, a1);
		}

		::System::Void MBEGOPEGMNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_MBEGOPEGMNJ_OFFSET))(this);
		}

		::System::Void AFBEMPFNKOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_AFBEMPFNKOK_OFFSET))(this, a1);
		}

		::System::Void OOCJBAOLPBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_OOCJBAOLPBO_OFFSET))(this, a1);
		}

		::System::Void PPDBAGOHOIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_PPDBAGOHOIN_OFFSET))(this, a1);
		}

		::System::Void LMILMKHBKIP(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_LMILMKHBKIP_OFFSET))(this, a1, a2);
		}

		::System::Void BKCCFPHPIHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_BKCCFPHPIHM_OFFSET))(this);
		}

		::System::Void OHHDOPFLFPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_OHHDOPFLFPD_OFFSET))(this);
		}

		::System::Void GKGECHAAICA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_GKGECHAAICA_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPNIKJIJMK_JNIKOAEAEHB_OFFSET))(this);
		}

	};
