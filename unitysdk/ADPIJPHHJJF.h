#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EMCHOHGMEME;
class FMPCODLIOLG;
class LNGGBHCLAIG;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RPGFadeAnimation; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define ADPIJPHHJJF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7ADE00)
#define ADPIJPHHJJF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7ADED0)
#define ADPIJPHHJJF_BFKCFHFEGMH_OFFSET UNITYSDK_OFFSET(0xB7AD6A0)
#define ADPIJPHHJJF_BJPGIOBPBAI_OFFSET UNITYSDK_OFFSET(0xB7ACE60)
#define ADPIJPHHJJF_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0xB7ADBB0)
#define ADPIJPHHJJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ADF70)
#define ADPIJPHHJJF_FBBJNMFJCFM_OFFSET UNITYSDK_OFFSET(0xB7ADD40)
#define ADPIJPHHJJF_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xB7AD980)
#define ADPIJPHHJJF_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xB7ADCE0)
#define ADPIJPHHJJF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB7AD770)
#define ADPIJPHHJJF_MPFLEGNNDCH_OFFSET UNITYSDK_OFFSET(0xB7AD800)
#define ADPIJPHHJJF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB7AD870)
#define ADPIJPHHJJF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB7ADD00)
#define ADPIJPHHJJF_OPPMHPGPMGJ_OFFSET UNITYSDK_OFFSET(0xB7ADC20)
#define ADPIJPHHJJF_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xB7ADCF0)
#define ADPIJPHHJJF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7ACC10)
#define ADPIJPHHJJF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB7AD090)
#define ADPIJPHHJJF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7AD3F0)

inline static constexpr unsigned int ADPIJPHHJJF_TypeDefinitionIndex = 74266;

	class ADPIJPHHJJF : public ::FMPCODLIOLG
	{
	public:
		::System::String* HLGPGJCBJJP; // 0x60
		::RPG::Client::RPGFadeAnimation* BFOLJLOAOCF; // 0x68
		::LNGGBHCLAIG* APPIHABBCGK; // 0x70
		::System::Action* HJOAJHMCGOM; // 0x78
		::EMCHOHGMEME* IDMIAONDKBJ; // 0x80
		::System::String* OMMPJHHHIHA; // 0x88
		::UnityEngine::Animation* KCOAILOHDND; // 0x90
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x98
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0xA0
		::System::Boolean HMLJOCBCHKG; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF__ONBIND_OFFSET))(this);
		}

		::System::Void BJPGIOBPBAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_BJPGIOBPBAI_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADPIJPHHJJF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void FNFEMGIBECE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_FNFEMGIBECE_OFFSET))(this, a1);
		}

		::System::Void OPPMHPGPMGJ(::LNGGBHCLAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_OPPMHPGPMGJ_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Single MPFLEGNNDCH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_MPFLEGNNDCH_OFFSET))(this);
		}

		::System::Void BNEKJHADLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_BNEKJHADLNK_OFFSET))(this);
		}

		::System::Void BFKCFHFEGMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_BFKCFHFEGMH_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_GET_ATMOSPHERETYPE_OFFSET))(this);
		}

		::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_SET_ATMOSPHERETYPE_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void FBBJNMFJCFM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_FBBJNMFJCFM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
