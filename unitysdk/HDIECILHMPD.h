#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/MVector3.h"
class EKFMIDBJDIA;
class MHLFFIDFHLA;
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }

#define HDIECILHMPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C371F0)
#define HDIECILHMPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C36420)
#define HDIECILHMPD_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0x15C369A0)
#define HDIECILHMPD_GET_BUFFPANELOFFSET_OFFSET UNITYSDK_OFFSET(0x15C36A90)
#define HDIECILHMPD_GET_CHARACTERHUDOFFSET_OFFSET UNITYSDK_OFFSET(0x15C37050)
#define HDIECILHMPD_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x15C36EC0)
#define HDIECILHMPD_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15C36A30)
#define HDIECILHMPD_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0x15C371D0)
#define HDIECILHMPD_GET_HITBOXATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x15C36E50)
#define HDIECILHMPD_GET_HITBOXHEIGHT_OFFSET UNITYSDK_OFFSET(0x15C36D50)
#define HDIECILHMPD_GET_HITBOXLENGTH_OFFSET UNITYSDK_OFFSET(0x15C36CE0)
#define HDIECILHMPD_GET_HITBOXOFFSET_OFFSET UNITYSDK_OFFSET(0x15C36DC0)
#define HDIECILHMPD_GET_HITBOXTYPE_OFFSET UNITYSDK_OFFSET(0x15C36C00)
#define HDIECILHMPD_GET_HITBOXWIDTH_OFFSET UNITYSDK_OFFSET(0x15C36C70)
#define HDIECILHMPD_GET_RESILIENCE_OFFSET UNITYSDK_OFFSET(0x15C369D0)
#define HDIECILHMPD_GET_VISUALRADIUS_OFFSET UNITYSDK_OFFSET(0x15C369B0)
#define HDIECILHMPD_GOFDPLJEFDG_OFFSET UNITYSDK_OFFSET(0x15C36320)
#define HDIECILHMPD_JBCPPHPBBAO_OFFSET UNITYSDK_OFFSET(0x15C36900)
#define HDIECILHMPD_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15C365A0)
#define HDIECILHMPD_NIFKJOGDAPH_OFFSET UNITYSDK_OFFSET(0x15C364A0)
#define HDIECILHMPD_OMIHAEFMNGN_OFFSET UNITYSDK_OFFSET(0x15C371E0)
#define HDIECILHMPD__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x15C362D0)

	class HDIECILHMPD : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		::MHLFFIDFHLA* JJDNNLDEDIJ; // 0x140
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::MHLFFIDFHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLFFIDFHLA*))((::PBYTE)hIl2Cpp + HDIECILHMPD_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void GOFDPLJEFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GOFDPLJEFDG_OFFSET))(this);
		}

		::System::Void NIFKJOGDAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_NIFKJOGDAPH_OFFSET))(this);
		}

		::System::Void JBCPPHPBBAO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HDIECILHMPD_JBCPPHPBBAO_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::Single get_VisualRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_VISUALRADIUS_OFFSET))(this);
		}

		::RPG::GameCore::ResilienceEnum get_Resilience()
		{
			return ((::RPG::GameCore::ResilienceEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_RESILIENCE_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_DAMAGETYPE_OFFSET))(this);
		}

		::RPG::MVector3 get_BuffPanelOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_BUFFPANELOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::CharacterCollisionType get_HitBoxType()
		{
			return ((::RPG::GameCore::CharacterCollisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXTYPE_OFFSET))(this);
		}

		::System::Single get_HitBoxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXWIDTH_OFFSET))(this);
		}

		::System::Single get_HitBoxLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXLENGTH_OFFSET))(this);
		}

		::System::Single get_HitBoxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXHEIGHT_OFFSET))(this);
		}

		::RPG::MVector3 get_HitBoxOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXOFFSET_OFFSET))(this);
		}

		::System::String* get_HitBoxAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HITBOXATTACHPOINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::MVector3 get_CharacterHUDOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_CHARACTERHUDOFFSET_OFFSET))(this);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_GET_HASLIFE_OFFSET))(this);
		}

		::MHLFFIDFHLA* OMIHAEFMNGN()
		{
			return ((::MHLFFIDFHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIECILHMPD_OMIHAEFMNGN_OFFSET))(this);
		}

	};
