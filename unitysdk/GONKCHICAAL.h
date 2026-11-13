#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class BattleUITeamBlockData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define GONKCHICAAL_AFPFPECLGPG_OFFSET UNITYSDK_OFFSET(0x187C03E0)
#define GONKCHICAAL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x187C0DF0)
#define GONKCHICAAL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x187C0F10)
#define GONKCHICAAL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x187C0B60)
#define GONKCHICAAL_BNDMNAGPHEP_OFFSET UNITYSDK_OFFSET(0x187C0540)
#define GONKCHICAAL_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x187C0C10)
#define GONKCHICAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x187C1000)
#define GONKCHICAAL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x187C0120)
#define GONKCHICAAL_HBPDFPKOFOL_OFFSET UNITYSDK_OFFSET(0x187C05D0)
#define GONKCHICAAL_HMCHIMDKEJI_OFFSET UNITYSDK_OFFSET(0x187C0D60)
#define GONKCHICAAL_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x187C06F0)
#define GONKCHICAAL_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x187C0350)
#define GONKCHICAAL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x187C0250)
#define GONKCHICAAL_KAPBBLCIMPD_OFFSET UNITYSDK_OFFSET(0x187C0CD0)
#define GONKCHICAAL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x187C0660)
#define GONKCHICAAL_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x187C07C0)
#define GONKCHICAAL__ONBIND_OFFSET UNITYSDK_OFFSET(0x187BFE30)
#define GONKCHICAAL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x187C00B0)
#define GONKCHICAAL__ONTICK_OFFSET UNITYSDK_OFFSET(0x187C0450)
#define GONKCHICAAL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x187C0200)

inline static constexpr unsigned int GONKCHICAAL_TypeDefinitionIndex = 73434;

	class GONKCHICAAL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* ABIAIBDMNGJ; // 0x60
		::UnityEngine::UI::Text* MGLLOBIABHB; // 0x68
		::UnityEngine::UI::Text* ABJDFPPDAMG; // 0x70
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x78
		::RPG::Client::BattleUITeamBlockData* LACMNAKHODL; // 0x80
		::UnityEngine::Animation* KCOAILOHDND; // 0x88
		::System::Boolean FFIAGGGEAEG; // 0x90
		::System::Boolean IILOLKBHJBJ; // 0x91
		::System::Boolean EMHAACACFOM; // 0x92
		::System::Boolean MAMHOAGMCHN; // 0x93
		::System::Single JFHFAHDEACB; // 0x94
		::System::Int64 HBIHFCLKDBJ; // 0x98
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* AFANDDHKIJJ; // 0x0
		// static const ::System::Object GLDOGCMJFLP; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		// static const ::System::String* PGMNJNHPMGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GONKCHICAAL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GONKCHICAAL_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GONKCHICAAL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void BNDMNAGPHEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_BNDMNAGPHEP_OFFSET))(this);
		}

		::System::Void HBPDFPKOFOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_HBPDFPKOFOL_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GONKCHICAAL_JHJODHHJLAK_OFFSET))(this, a1);
		}

		::System::Void PACBDGILPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GONKCHICAAL_PACBDGILPHI_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GONKCHICAAL_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void COPGACEDIEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GONKCHICAAL_COPGACEDIEI_OFFSET))(this, a1);
		}

		::System::Void AFPFPECLGPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GONKCHICAAL_AFPFPECLGPG_OFFSET))(this, a1);
		}

		::System::Void KAPBBLCIMPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GONKCHICAAL_KAPBBLCIMPD_OFFSET))(this, a1);
		}

		::System::Void HMCHIMDKEJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GONKCHICAAL_HMCHIMDKEJI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
