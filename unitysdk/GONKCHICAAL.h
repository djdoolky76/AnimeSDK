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

#define GONKCHICAAL_AFPFPECLGPG_OFFSET UNITYSDK_OFFSET(0x15B2F490)
#define GONKCHICAAL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B2FEA0)
#define GONKCHICAAL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B2FFC0)
#define GONKCHICAAL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15B2FC10)
#define GONKCHICAAL_BNDMNAGPHEP_OFFSET UNITYSDK_OFFSET(0x15B2F5F0)
#define GONKCHICAAL_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x15B2FCC0)
#define GONKCHICAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B300B0)
#define GONKCHICAAL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15B2F160)
#define GONKCHICAAL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15B2F1C0)
#define GONKCHICAAL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B2F2A0)
#define GONKCHICAAL_HBPDFPKOFOL_OFFSET UNITYSDK_OFFSET(0x15B2F680)
#define GONKCHICAAL_HMCHIMDKEJI_OFFSET UNITYSDK_OFFSET(0x15B2FE10)
#define GONKCHICAAL_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x15B2F7A0)
#define GONKCHICAAL_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15B2F3F0)
#define GONKCHICAAL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15B2F2F0)
#define GONKCHICAAL_KAPBBLCIMPD_OFFSET UNITYSDK_OFFSET(0x15B2FD80)
#define GONKCHICAAL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15B2F710)
#define GONKCHICAAL_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x15B2F870)
#define GONKCHICAAL__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B2F050)
#define GONKCHICAAL__ONTICK_OFFSET UNITYSDK_OFFSET(0x15B2F500)

inline static constexpr unsigned int GONKCHICAAL_TypeDefinitionIndex = 71452;

	class GONKCHICAAL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* MGLLOBIABHB; // 0x60
		::UnityEngine::UI::Text* ABJDFPPDAMG; // 0x68
		::RPG::Client::BattleUITeamBlockData* LACMNAKHODL; // 0x70
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x78
		::UnityEngine::Transform* ABIAIBDMNGJ; // 0x80
		::UnityEngine::Animation* KCOAILOHDND; // 0x88
		::System::Int64 HBIHFCLKDBJ; // 0x90
		::System::Boolean EMHAACACFOM; // 0x98
		::System::Boolean IILOLKBHJBJ; // 0x99
		::System::Boolean FFIAGGGEAEG; // 0x9A
		::System::Boolean MAMHOAGMCHN; // 0x9B
		::System::Single JFHFAHDEACB; // 0x9C
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GONKCHICAAL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKCHICAAL_EKGCGIDIFJJ_OFFSET))(this);
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
