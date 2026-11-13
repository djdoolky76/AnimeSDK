#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DNBDHGNLIPK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB01F0)
#define DNBDHGNLIPK_GET_DESC_OFFSET UNITYSDK_OFFSET(0x12CB0170)
#define DNBDHGNLIPK_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x12CB0190)
#define DNBDHGNLIPK_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x12CB01D0)
#define DNBDHGNLIPK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12CB0150)
#define DNBDHGNLIPK_GET_STATID_OFFSET UNITYSDK_OFFSET(0x12CB0130)
#define DNBDHGNLIPK_GET_TIERREQUIREVALUELIST_OFFSET UNITYSDK_OFFSET(0x12CB01B0)
#define DNBDHGNLIPK_SET_DESC_OFFSET UNITYSDK_OFFSET(0x12CB0180)
#define DNBDHGNLIPK_SET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x12CB01A0)
#define DNBDHGNLIPK_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x12CB01E0)
#define DNBDHGNLIPK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x12CB0160)
#define DNBDHGNLIPK_SET_STATID_OFFSET UNITYSDK_OFFSET(0x12CB0140)
#define DNBDHGNLIPK_SET_TIERREQUIREVALUELIST_OFFSET UNITYSDK_OFFSET(0x12CB01C0)

inline static constexpr unsigned int DNBDHGNLIPK_TypeDefinitionIndex = 84477;

	class DNBDHGNLIPK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _TierRequireValueList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::GameCore::B51RacingStatType _StatID_k__BackingField; // 0x20
		::System::Single _ExtraRatio_k__BackingField; // 0x24
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::B51RacingStatType get_StatID()
		{
			return ((::RPG::GameCore::B51RacingStatType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_STATID_OFFSET))(this);
		}

		::System::Void set_StatID(::RPG::GameCore::B51RacingStatType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_STATID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_DESC_OFFSET))(this, a1);
		}

		::System::Single get_ExtraRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_EXTRARATIO_OFFSET))(this);
		}

		::System::Void set_ExtraRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_EXTRARATIO_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_TierRequireValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_TIERREQUIREVALUELIST_OFFSET))(this);
		}

		::System::Void set_TierRequireValueList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_TIERREQUIREVALUELIST_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNBDHGNLIPK_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
