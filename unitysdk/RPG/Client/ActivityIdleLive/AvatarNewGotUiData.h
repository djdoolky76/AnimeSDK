#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD8F290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCD8F270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CUTINFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCD8F230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCD8F210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD8F1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_SKILLDESCS_OFFSET UNITYSDK_OFFSET(0xCD8F250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCD8F280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CUTINFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCD8F240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCD8F220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCD8F200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_SKILLDESCS_OFFSET UNITYSDK_OFFSET(0xCD8F260)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AvatarNewGotUiData_TypeDefinitionIndex = 77740;

	class AvatarNewGotUiData : public ::System::Object
	{
	public:
		::System::String* _CutInFigurePath_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* _Config_k__BackingField; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _SkillDescs_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_CutInFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CUTINFIGUREPATH_OFFSET))(this);
		}

		::System::Void set_CutInFigurePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CUTINFIGUREPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SkillDescs()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_SKILLDESCS_OFFSET))(this);
		}

		::System::Void set_SkillDescs(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_SKILLDESCS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CONFIG_OFFSET))(this, a1);
		}

	};
}
