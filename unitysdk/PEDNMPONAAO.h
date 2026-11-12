#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define PEDNMPONAAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC93A930)
#define PEDNMPONAAO_GET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC93A8B0)
#define PEDNMPONAAO_GET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC93A910)
#define PEDNMPONAAO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC93A8D0)
#define PEDNMPONAAO_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xC93A850)
#define PEDNMPONAAO_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC93A820)
#define PEDNMPONAAO_GET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC93A890)
#define PEDNMPONAAO_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC93A830)
#define PEDNMPONAAO_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC93A870)
#define PEDNMPONAAO_GET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC93A8F0)
#define PEDNMPONAAO_SET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC93A8C0)
#define PEDNMPONAAO_SET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC93A920)
#define PEDNMPONAAO_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC93A8E0)
#define PEDNMPONAAO_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xC93A860)
#define PEDNMPONAAO_SET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC93A8A0)
#define PEDNMPONAAO_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC93A840)
#define PEDNMPONAAO_SET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC93A880)
#define PEDNMPONAAO_SET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC93A900)

inline static constexpr unsigned int PEDNMPONAAO_TypeDefinitionIndex = 53089;

	class PEDNMPONAAO : public ::System::Object
	{
	public:
		::System::String* _ChangeConfigPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* _UnlockConditions_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::Boolean _IsEarlyUnlock_k__BackingField; // 0x30
		::System::Boolean _AllowRepeatUnlockReward_k__BackingField; // 0x31
		::System::Byte _padding0[0x2];
		::OIPMNNAHIFP _Identifier_k__BackingField; // 0x34
		::RPG::Client::TextID _UnlockToast_k__BackingField; // 0x38
		::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x48
		::DNFDBKCPBNM _RoleIdentifier_k__BackingField; // 0x4C
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
