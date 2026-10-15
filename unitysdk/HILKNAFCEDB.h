#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDMGKNGKLDH.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HILKNAFCEDB;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HILKNAFCEDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CEB410)
#define HILKNAFCEDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEAF10)
#define HILKNAFCEDB_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x15CEB3C0)
#define HILKNAFCEDB_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x15CEB370)
#define HILKNAFCEDB_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x15CEB320)
#define HILKNAFCEDB_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1E0)
#define HILKNAFCEDB_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x15CEAFF0)
#define HILKNAFCEDB_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB220)
#define HILKNAFCEDB_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x15CEB100)
#define HILKNAFCEDB_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x15CEAFD0)
#define HILKNAFCEDB_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x15CEB030)
#define HILKNAFCEDB_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15CEB020)
#define HILKNAFCEDB_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x15CEB080)
#define HILKNAFCEDB_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1D0)
#define HILKNAFCEDB_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x15CEB160)
#define HILKNAFCEDB_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x15CEAFE0)
#define HILKNAFCEDB_GET_JSON_OFFSET UNITYSDK_OFFSET(0x15CEAFC0)
#define HILKNAFCEDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15CEB090)
#define HILKNAFCEDB_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1C0)
#define HILKNAFCEDB_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15CEB010)
#define HILKNAFCEDB_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x15CEB000)
#define HILKNAFCEDB_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB210)
#define HILKNAFCEDB_GET_ROW_OFFSET UNITYSDK_OFFSET(0x15CEAF20)
#define HILKNAFCEDB_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1F0)
#define HILKNAFCEDB_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x15CEB0A0)
#define HILKNAFCEDB_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x15CEB040)
#define HILKNAFCEDB_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB200)
#define HILKNAFCEDB_NAKKPDBKAIH_OFFSET UNITYSDK_OFFSET(0x15CEB230)
#define HILKNAFCEDB_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x15CEB2C0)
#define HILKNAFCEDB_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x15CEB240)
#define HILKNAFCEDB_SET_ROW_OFFSET UNITYSDK_OFFSET(0x15CEAF30)

inline static constexpr unsigned int HILKNAFCEDB_TypeDefinitionIndex = 56923;

	class HILKNAFCEDB : public ::System::Object
	{
	public:
		static ::HILKNAFCEDB** StaticGet_FMJPMFEDIJL()
		{
			return (::HILKNAFCEDB**)UnitySDK::FromName("", "HILKNAFCEDB")->GetStaticField(0x1DA50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILKNAFCEDB_CCTOR_OFFSET))();
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HILKNAFCEDB_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_JSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::CharacterSomatoType NAKKPDBKAIH()
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKNAFCEDB_NAKKPDBKAIH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + HILKNAFCEDB_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + HILKNAFCEDB_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HILKNAFCEDB_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

	};
