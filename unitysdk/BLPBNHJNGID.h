#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDLIDKMMNOA.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BLPBNHJNGID_CTOR_OFFSET UNITYSDK_OFFSET(0xBA83690)
#define BLPBNHJNGID_GET_ADDONSKILLLIST_OFFSET UNITYSDK_OFFSET(0xBA83670)
#define BLPBNHJNGID_GET_ADVJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBA83630)
#define BLPBNHJNGID_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBA835F0)
#define BLPBNHJNGID_GET_BATTLEJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBA83610)
#define BLPBNHJNGID_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xBA835E0)
#define BLPBNHJNGID_GET_RESMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBA83650)
#define BLPBNHJNGID_SET_ADDONSKILLLIST_OFFSET UNITYSDK_OFFSET(0xBA83680)
#define BLPBNHJNGID_SET_ADVJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBA83640)
#define BLPBNHJNGID_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBA83600)
#define BLPBNHJNGID_SET_BATTLEJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBA83620)
#define BLPBNHJNGID_SET_RESMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBA83660)

	class BLPBNHJNGID : public ::System::Object
	{
	public:
		::System::String* _BattleJsonOverride_k__BackingField; // 0x10
		::System::String* _AdvJsonOverride_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _AddOnSkillList_k__BackingField; // 0x20
		::System::String* _ResMapConfigPath_k__BackingField; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::KDLIDKMMNOA _Identifier_k__BackingField; // 0x34
		::System::Void _ctor(::KDLIDKMMNOA a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + BLPBNHJNGID_CTOR_OFFSET))(this, a1);
		}

		::KDLIDKMMNOA get_Identifier()
		{
			return ((::KDLIDKMMNOA(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPBNHJNGID_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* get_BattleJsonOverride()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_BATTLEJSONOVERRIDE_OFFSET))(this);
		}

		::System::Void set_BattleJsonOverride(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLPBNHJNGID_SET_BATTLEJSONOVERRIDE_OFFSET))(this, a1);
		}

		::System::String* get_AdvJsonOverride()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_ADVJSONOVERRIDE_OFFSET))(this);
		}

		::System::Void set_AdvJsonOverride(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLPBNHJNGID_SET_ADVJSONOVERRIDE_OFFSET))(this, a1);
		}

		::System::String* get_ResMapConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_RESMAPCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ResMapConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLPBNHJNGID_SET_RESMAPCONFIGPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AddOnSkillList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBNHJNGID_GET_ADDONSKILLLIST_OFFSET))(this);
		}

		::System::Void set_AddOnSkillList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BLPBNHJNGID_SET_ADDONSKILLLIST_OFFSET))(this, a1);
		}

	};
