#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EMCHOHGMEME;
class FMPCODLIOLG;
class LNGGBHCLAIG;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define ADPIJPHHJJF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1470F0)
#define ADPIJPHHJJF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB1471C0)
#define ADPIJPHHJJF_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0xB146EA0)
#define ADPIJPHHJJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB147260)
#define ADPIJPHHJJF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB146410)
#define ADPIJPHHJJF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB146770)
#define ADPIJPHHJJF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB146870)
#define ADPIJPHHJJF_FBBJNMFJCFM_OFFSET UNITYSDK_OFFSET(0xB147030)
#define ADPIJPHHJJF_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xB146C70)
#define ADPIJPHHJJF_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xB146FD0)
#define ADPIJPHHJJF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB146A50)
#define ADPIJPHHJJF_MPFLEGNNDCH_OFFSET UNITYSDK_OFFSET(0xB146AE0)
#define ADPIJPHHJJF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB146B50)
#define ADPIJPHHJJF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB146FF0)
#define ADPIJPHHJJF_OPPMHPGPMGJ_OFFSET UNITYSDK_OFFSET(0xB146F10)
#define ADPIJPHHJJF_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xB146FE0)
#define ADPIJPHHJJF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB1461A0)

inline static constexpr unsigned int ADPIJPHHJJF_TypeDefinitionIndex = 72199;

	class ADPIJPHHJJF : public ::FMPCODLIOLG
	{
	public:
		::System::String* HLGPGJCBJJP; // 0x60
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x68
		::System::String* OMMPJHHHIHA; // 0x70
		::UnityEngine::Animation* KCOAILOHDND; // 0x78
		::System::Action* HJOAJHMCGOM; // 0x80
		::EMCHOHGMEME* IDMIAONDKBJ; // 0x88
		::LNGGBHCLAIG* APPIHABBCGK; // 0x90
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x98
		::System::Boolean HMLJOCBCHKG; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIJPHHJJF_EKGCGIDIFJJ_OFFSET))(this);
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
