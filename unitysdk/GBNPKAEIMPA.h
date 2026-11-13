#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/RPG/GameCore/ExtraLevelResultType.h"
#include "unitysdk/RPG/GameCore/SpecialGuestType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GBNPKAEIMPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B886D80)
#define GBNPKAEIMPA_GET_EXTRALEVELRESULTID_OFFSET UNITYSDK_OFFSET(0x1B886D60)
#define GBNPKAEIMPA_GET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1B886D40)
#define GBNPKAEIMPA_GET_INSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x1B886D20)
#define GBNPKAEIMPA_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1B886CE0)
#define GBNPKAEIMPA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B886C60)
#define GBNPKAEIMPA_GET_REQUIREDCOIN_OFFSET UNITYSDK_OFFSET(0x1B886C80)
#define GBNPKAEIMPA_GET_REQUIREDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B886CA0)
#define GBNPKAEIMPA_GET_SPECIALGUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B886CC0)
#define GBNPKAEIMPA_GET_TALKGROUPID_OFFSET UNITYSDK_OFFSET(0x1B886D00)
#define GBNPKAEIMPA_SET_EXTRALEVELRESULTID_OFFSET UNITYSDK_OFFSET(0x1B886D70)
#define GBNPKAEIMPA_SET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1B886D50)
#define GBNPKAEIMPA_SET_INSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x1B886D30)
#define GBNPKAEIMPA_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1B886CF0)
#define GBNPKAEIMPA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B886C70)
#define GBNPKAEIMPA_SET_REQUIREDCOIN_OFFSET UNITYSDK_OFFSET(0x1B886C90)
#define GBNPKAEIMPA_SET_REQUIREDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B886CB0)
#define GBNPKAEIMPA_SET_SPECIALGUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B886CD0)
#define GBNPKAEIMPA_SET_TALKGROUPID_OFFSET UNITYSDK_OFFSET(0x1B886D10)

inline static constexpr unsigned int GBNPKAEIMPA_TypeDefinitionIndex = 77062;

	class GBNPKAEIMPA : public ::System::Object
	{
	public:
		::System::String* _LevelConfigPath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* _SpecialGuestIds_k__BackingField; // 0x18
		::System::UInt32 _InstructionId_k__BackingField; // 0x20
		::System::UInt32 _TalkGroupId_k__BackingField; // 0x24
		::OCKCNOOHILK _LevelId_k__BackingField; // 0x28
		::System::UInt32 _ExtraLevelResultId_k__BackingField; // 0x2C
		::RPG::GameCore::ExtraLevelResultType _ExtraLevelResultType_k__BackingField; // 0x30
		::System::UInt32 _RequiredCustomerCount_k__BackingField; // 0x34
		::System::UInt32 _RequiredCoin_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_CTOR_OFFSET))(this);
		}

		::OCKCNOOHILK get_LevelId()
		{
			return ((::OCKCNOOHILK(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::OCKCNOOHILK a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RequiredCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_REQUIREDCOIN_OFFSET))(this);
		}

		::System::Void set_RequiredCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_REQUIREDCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_RequiredCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_REQUIREDCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Void set_RequiredCustomerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_REQUIREDCUSTOMERCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* get_SpecialGuestIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_SPECIALGUESTIDS_OFFSET))(this);
		}

		::System::Void set_SpecialGuestIds(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>*))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_SPECIALGUESTIDS_OFFSET))(this, a1);
		}

		::System::String* get_LevelConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_LEVELCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_LevelConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_LEVELCONFIGPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalkGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_TALKGROUPID_OFFSET))(this);
		}

		::System::Void set_TalkGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_TALKGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstructionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_INSTRUCTIONID_OFFSET))(this);
		}

		::System::Void set_InstructionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_INSTRUCTIONID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ExtraLevelResultType get_ExtraLevelResultType()
		{
			return ((::RPG::GameCore::ExtraLevelResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_EXTRALEVELRESULTTYPE_OFFSET))(this);
		}

		::System::Void set_ExtraLevelResultType(::RPG::GameCore::ExtraLevelResultType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExtraLevelResultType))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_EXTRALEVELRESULTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraLevelResultId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_GET_EXTRALEVELRESULTID_OFFSET))(this);
		}

		::System::Void set_ExtraLevelResultId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNPKAEIMPA_SET_EXTRALEVELRESULTID_OFFSET))(this, a1);
		}

	};
