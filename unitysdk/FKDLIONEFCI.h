#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FKDLIONEFCI;
class HAEEPEIBMPB;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueNousTalentRow; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class String; }

#define FKDLIONEFCI_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x16756760)
#define FKDLIONEFCI_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x16756820)
#define FKDLIONEFCI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16756660)
#define FKDLIONEFCI_CTOR_OFFSET UNITYSDK_OFFSET(0x16756750)
#define FKDLIONEFCI_GET_COST_OFFSET UNITYSDK_OFFSET(0x16756970)
#define FKDLIONEFCI_GET_EFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x167569F0)
#define FKDLIONEFCI_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x167569D0)
#define FKDLIONEFCI_GET_EFFECTTAG_OFFSET UNITYSDK_OFFSET(0x16756990)
#define FKDLIONEFCI_GET_EFFECTTITLE_OFFSET UNITYSDK_OFFSET(0x167569B0)
#define FKDLIONEFCI_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16756910)
#define FKDLIONEFCI_GET_NEXTTALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x16756930)
#define FKDLIONEFCI_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x16756A10)
#define FKDLIONEFCI_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x167568F0)
#define FKDLIONEFCI_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x16756950)
#define FKDLIONEFCI_SET_COST_OFFSET UNITYSDK_OFFSET(0x16756980)
#define FKDLIONEFCI_SET_EFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x16756A00)
#define FKDLIONEFCI_SET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x167569E0)
#define FKDLIONEFCI_SET_EFFECTTAG_OFFSET UNITYSDK_OFFSET(0x167569A0)
#define FKDLIONEFCI_SET_EFFECTTITLE_OFFSET UNITYSDK_OFFSET(0x167569C0)
#define FKDLIONEFCI_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16756920)
#define FKDLIONEFCI_SET_NEXTTALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x16756940)
#define FKDLIONEFCI_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x16756A20)
#define FKDLIONEFCI_SET_TALENTID_OFFSET UNITYSDK_OFFSET(0x16756900)
#define FKDLIONEFCI_SET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x16756960)

inline static constexpr unsigned int FKDLIONEFCI_TypeDefinitionIndex = 69419;

	class FKDLIONEFCI : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Cost_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _EffectDescParamList_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _UnlockIDList_k__BackingField; // 0x28
		::HAEEPEIBMPB* _SendPacketCmd_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _NextTalentIDList_k__BackingField; // 0x38
		::System::UInt32 _TalentID_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _EffectTitle_k__BackingField; // 0x48
		::RPG::Client::TextID _EffectDesc_k__BackingField; // 0x58
		::RPG::Client::TextID _EffectTag_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_CTOR_OFFSET))(this);
		}

		static ::FKDLIONEFCI* BPLPBPMEODA(::RPG::GameCore::RogueTalentRow* a1)
		{
			return ((::FKDLIONEFCI*(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::FKDLIONEFCI* BPLPBPMEODA_1(::RPG::GameCore::RogueNousTalentRow* a1)
		{
			return ((::FKDLIONEFCI*(*)(::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_BPLPBPMEODA_1_OFFSET))(a1);
		}

		static ::FKDLIONEFCI* BPLPBPMEODA_2(::RPG::GameCore::RogueTournPermanentTalentRow* a1)
		{
			return ((::FKDLIONEFCI*(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_BPLPBPMEODA_2_OFFSET))(a1);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_TALENTID_OFFSET))(this);
		}

		::System::Void set_TalentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_TALENTID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_ICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NextTalentIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_NEXTTALENTIDLIST_OFFSET))(this);
		}

		::System::Void set_NextTalentIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_NEXTTALENTIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_UNLOCKIDLIST_OFFSET))(this);
		}

		::System::Void set_UnlockIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_UNLOCKIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_Cost()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_COST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EffectTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_EFFECTTAG_OFFSET))(this);
		}

		::System::Void set_EffectTag(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_EFFECTTAG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EffectTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_EFFECTTITLE_OFFSET))(this);
		}

		::System::Void set_EffectTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_EFFECTTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_EFFECTDESC_OFFSET))(this);
		}

		::System::Void set_EffectDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_EFFECTDESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectDescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_EFFECTDESCPARAMLIST_OFFSET))(this);
		}

		::System::Void set_EffectDescParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_EFFECTDESCPARAMLIST_OFFSET))(this, a1);
		}

		::HAEEPEIBMPB* get_SendPacketCmd()
		{
			return ((::HAEEPEIBMPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLIONEFCI_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::HAEEPEIBMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAEEPEIBMPB*))((::PBYTE)hIl2Cpp + FKDLIONEFCI_SET_SENDPACKETCMD_OFFSET))(this, a1);
		}

	};
