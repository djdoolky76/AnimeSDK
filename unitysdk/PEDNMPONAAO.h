#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define PEDNMPONAAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC034450)
#define PEDNMPONAAO_GET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC0343D0)
#define PEDNMPONAAO_GET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC034430)
#define PEDNMPONAAO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC0343F0)
#define PEDNMPONAAO_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xC034370)
#define PEDNMPONAAO_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC034340)
#define PEDNMPONAAO_GET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0343B0)
#define PEDNMPONAAO_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC034350)
#define PEDNMPONAAO_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC034390)
#define PEDNMPONAAO_GET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC034410)
#define PEDNMPONAAO_SET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC0343E0)
#define PEDNMPONAAO_SET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC034440)
#define PEDNMPONAAO_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC034400)
#define PEDNMPONAAO_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xC034380)
#define PEDNMPONAAO_SET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0343C0)
#define PEDNMPONAAO_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC034360)
#define PEDNMPONAAO_SET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC0343A0)
#define PEDNMPONAAO_SET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC034420)

inline static constexpr unsigned int PEDNMPONAAO_TypeDefinitionIndex = 51984;

	class PEDNMPONAAO : public ::System::Object
	{
	public:
		::System::String* _ChangeConfigPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* _UnlockConditions_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::DNFDBKCPBNM _RoleIdentifier_k__BackingField; // 0x30
		::System::Boolean _IsEarlyUnlock_k__BackingField; // 0x34
		::System::Boolean _AllowRepeatUnlockReward_k__BackingField; // 0x35
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _UnlockToast_k__BackingField; // 0x38
		::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x48
		::OIPMNNAHIFP _Identifier_k__BackingField; // 0x4C
		::System::Void _ctor(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + PEDNMPONAAO_CTOR_OFFSET))(this, a1);
		}

		::OIPMNNAHIFP get_Identifier()
		{
			return ((::OIPMNNAHIFP(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_IDENTIFIER_OFFSET))(this);
		}

		::DNFDBKCPBNM get_RoleIdentifier()
		{
			return ((::DNFDBKCPBNM(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_ROLEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_RoleIdentifier(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_ROLEIDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GenderType get_Gender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_GENDER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_UnlockConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_UNLOCKCONDITIONS_OFFSET))(this);
		}

		::System::Void set_UnlockConditions(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_UNLOCKCONDITIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEarlyUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_ISEARLYUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsEarlyUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_ISEARLYUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowRepeatUnlockReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this);
		}

		::System::Void set_AllowRepeatUnlockReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_UnlockToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_UNLOCKTOAST_OFFSET))(this);
		}

		::System::Void set_UnlockToast(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_UNLOCKTOAST_OFFSET))(this, a1);
		}

		::System::String* get_ChangeConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNMPONAAO_GET_CHANGECONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ChangeConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEDNMPONAAO_SET_CHANGECONFIGPATH_OFFSET))(this, a1);
		}

	};
