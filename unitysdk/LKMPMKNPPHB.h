#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDMGKNGKLDH.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMPMKNPPHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB758890)
#define LKMPMKNPPHB_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xB75A190)
#define LKMPMKNPPHB_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xB75A050)
#define LKMPMKNPPHB_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xB759F10)
#define LKMPMKNPPHB_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xB759930)
#define LKMPMKNPPHB_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xB758D00)
#define LKMPMKNPPHB_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xB759D30)
#define LKMPMKNPPHB_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xB759510)
#define LKMPMKNPPHB_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB758B00)
#define LKMPMKNPPHB_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xB759300)
#define LKMPMKNPPHB_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB759200)
#define LKMPMKNPPHB_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xB759500)
#define LKMPMKNPPHB_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB759830)
#define LKMPMKNPPHB_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xB759620)
#define LKMPMKNPPHB_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xB758C00)
#define LKMPMKNPPHB_GET_JSON_OFFSET UNITYSDK_OFFSET(0xB758A00)
#define LKMPMKNPPHB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB758F00)
#define LKMPMKNPPHB_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xB759730)
#define LKMPMKNPPHB_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xB759100)
#define LKMPMKNPPHB_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0xB758E00)
#define LKMPMKNPPHB_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB759C30)
#define LKMPMKNPPHB_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB7588B0)
#define LKMPMKNPPHB_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB759A30)
#define LKMPMKNPPHB_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xB759000)
#define LKMPMKNPPHB_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB759400)
#define LKMPMKNPPHB_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB759B30)
#define LKMPMKNPPHB_HPPAECBMIOJ_OFFSET UNITYSDK_OFFSET(0xB7588A0)
#define LKMPMKNPPHB_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xB759EB0)
#define LKMPMKNPPHB_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB759E30)
#define LKMPMKNPPHB_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB7589B0)

	class LKMPMKNPPHB : public ::System::Object
	{
	public:
		::RPG::GameCore::ICharacterRowData* BPKKKMOCFIP; // 0x10
		::System::Void _ctor(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterRowData* HPPAECBMIOJ()
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_HPPAECBMIOJ_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_JSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKMPMKNPPHB_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

	};
