#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
class KNHJKDBPNOI;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }

#define MBDKDGKIFFB_BJHPPAJGEEN_OFFSET UNITYSDK_OFFSET(0xC0BE660)
#define MBDKDGKIFFB_CABHEAGLNDD_OFFSET UNITYSDK_OFFSET(0xC0BE270)
#define MBDKDGKIFFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BE7F0)
#define MBDKDGKIFFB_EEDOOMCMFIN_OFFSET UNITYSDK_OFFSET(0xC0BE220)
#define MBDKDGKIFFB_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0xC0BE6C0)
#define MBDKDGKIFFB_GNDFNHNEDAH_OFFSET UNITYSDK_OFFSET(0xC0BE5A0)
#define MBDKDGKIFFB_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0xC0BE2B0)
#define MBDKDGKIFFB_JNALIOAGNFC_OFFSET UNITYSDK_OFFSET(0xC0BE4E0)
#define MBDKDGKIFFB_NBDFJCDMKJF_OFFSET UNITYSDK_OFFSET(0xC0BE420)
#define MBDKDGKIFFB_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0xC0BE780)
#define MBDKDGKIFFB_PFLDFIEGDPA_OFFSET UNITYSDK_OFFSET(0xC0BE300)
#define MBDKDGKIFFB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0BDEA0)

inline static constexpr unsigned int MBDKDGKIFFB_TypeDefinitionIndex = 74311;

	class MBDKDGKIFFB : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::KNHJKDBPNOI*>* CIFOILLJFNF; // 0x60
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x68
		::UnityEngine::Animation* PMOJILOJEPE; // 0x70
		::RPG::GameCore::GridFightBattleEventHintType BDAGIIBEPJA; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB__ONBIND_OFFSET))(this);
		}

		::System::Void EEDOOMCMFIN(::System::Action_1<::KNHJKDBPNOI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KNHJKDBPNOI*>*))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_EEDOOMCMFIN_OFFSET))(this, a1);
		}

		::System::Void CABHEAGLNDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_CABHEAGLNDD_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void PFLDFIEGDPA(::RPG::GameCore::GridFightBattleEventHintType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBattleEventHintType))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_PFLDFIEGDPA_OFFSET))(this, a1);
		}

		::System::Void JNALIOAGNFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_JNALIOAGNFC_OFFSET))(this);
		}

		::System::Void GNDFNHNEDAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_GNDFNHNEDAH_OFFSET))(this);
		}

		::System::Void NBDFJCDMKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_NBDFJCDMKJF_OFFSET))(this);
		}

		::System::Boolean BJHPPAJGEEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_BJHPPAJGEEN_OFFSET))(this);
		}

		::System::Void FKDPAGBEHFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_FKDPAGBEHFD_OFFSET))(this);
		}

		::System::Void NPBLGGGDOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKDGKIFFB_NPBLGGGDOLB_OFFSET))(this);
		}

	};
