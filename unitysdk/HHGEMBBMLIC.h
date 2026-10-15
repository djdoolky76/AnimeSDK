#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class AGDFMBLEJOP;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Button; }

#define HHGEMBBMLIC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CBF1E0)
#define HHGEMBBMLIC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15CBF4E0)
#define HHGEMBBMLIC_BLCMCABJHKP_OFFSET UNITYSDK_OFFSET(0x15CBE7D0)
#define HHGEMBBMLIC_CCGFKCEHGGE_OFFSET UNITYSDK_OFFSET(0x15CBF0A0)
#define HHGEMBBMLIC_CDCFJGJECBJ_OFFSET UNITYSDK_OFFSET(0x15CBF130)
#define HHGEMBBMLIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBF7A0)
#define HHGEMBBMLIC_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x15CBE510)
#define HHGEMBBMLIC_GDLNHEJDLCJ_OFFSET UNITYSDK_OFFSET(0x15CBEA60)
#define HHGEMBBMLIC_IPEAGFMEOKB_OFFSET UNITYSDK_OFFSET(0x15CBE730)
#define HHGEMBBMLIC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15CBE5E0)
#define HHGEMBBMLIC_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x15CBEF50)
#define HHGEMBBMLIC_MBCHBOFLPCM_OFFSET UNITYSDK_OFFSET(0x15CBECC0)
#define HHGEMBBMLIC_MCBDEMMBHDP_OFFSET UNITYSDK_OFFSET(0x15CBEE70)
#define HHGEMBBMLIC_MMCCMLOLLNI_OFFSET UNITYSDK_OFFSET(0x15CBF010)
#define HHGEMBBMLIC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15CBE3A0)
#define HHGEMBBMLIC_ONPAJHDOLPN_OFFSET UNITYSDK_OFFSET(0x15CBE820)
#define HHGEMBBMLIC_PFGLOEELJOB_OFFSET UNITYSDK_OFFSET(0x15CBE670)
#define HHGEMBBMLIC__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CBEB50)

inline static constexpr unsigned int HHGEMBBMLIC_TypeDefinitionIndex = 72216;

	class HHGEMBBMLIC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* AKKOFNAIIJG; // 0x60
		::System::String* MCKGIDKBEON; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::System::String* AJLONOKCKLJ; // 0x78
		::System::String* JHHNDAOJMEK; // 0x80
		::AGDFMBLEJOP* PNPEGEHDMLK; // 0x88
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
		::System::String* EONCLMAGEKP; // 0x98
		::RPG::Client::LocalizedText* JIOHPJGLHKL; // 0xA0
		::System::String* HGNDNFNDNEP; // 0xA8
		::System::Boolean DBOOODDFBFO; // 0xB0
		::System::Boolean LDABPDNLHNA; // 0xB1
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void PFGLOEELJOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_PFGLOEELJOB_OFFSET))(this, a1);
		}

		::System::Void IPEAGFMEOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_IPEAGFMEOKB_OFFSET))(this);
		}

		::System::Void BLCMCABJHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_BLCMCABJHKP_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ONPAJHDOLPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_ONPAJHDOLPN_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC__ONBIND_OFFSET))(this);
		}

		::System::Void GDLNHEJDLCJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_GDLNHEJDLCJ_OFFSET))(this, a1);
		}

		::System::Void MBCHBOFLPCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_MBCHBOFLPCM_OFFSET))(this, a1);
		}

		::System::Boolean MCBDEMMBHDP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_MCBDEMMBHDP_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void MMCCMLOLLNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_MMCCMLOLLNI_OFFSET))(this, a1);
		}

		::System::Void CCGFKCEHGGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_CCGFKCEHGGE_OFFSET))(this, a1);
		}

		::System::Void CDCFJGJECBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_CDCFJGJECBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGEMBBMLIC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
