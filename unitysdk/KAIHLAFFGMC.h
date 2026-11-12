#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KAIHLAFFGMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5EA00)
#define KAIHLAFFGMC_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xBB5E940)
#define KAIHLAFFGMC_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xBB5E9E0)
#define KAIHLAFFGMC_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBB5E9C0)
#define KAIHLAFFGMC_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBB5E980)
#define KAIHLAFFGMC_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBB5E9A0)
#define KAIHLAFFGMC_GET_TIER_OFFSET UNITYSDK_OFFSET(0xBB5E920)
#define KAIHLAFFGMC_GET_UPGRADETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xBB5E960)
#define KAIHLAFFGMC_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xBB5E950)
#define KAIHLAFFGMC_SET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xBB5E9F0)
#define KAIHLAFFGMC_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBB5E9D0)
#define KAIHLAFFGMC_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBB5E990)
#define KAIHLAFFGMC_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBB5E9B0)
#define KAIHLAFFGMC_SET_TIER_OFFSET UNITYSDK_OFFSET(0xBB5E930)
#define KAIHLAFFGMC_SET_UPGRADETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xBB5E970)

inline static constexpr unsigned int KAIHLAFFGMC_TypeDefinitionIndex = 84848;

	class KAIHLAFFGMC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _DescParams_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::UInt32 _Tier_k__BackingField; // 0x30
		::System::UInt32 _BuffID_k__BackingField; // 0x34
		::System::UInt32 _UpgradeThreshold_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Tier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_TIER_OFFSET))(this);
		}

		::System::Void set_Tier(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_TIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UpgradeThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_UPGRADETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_UpgradeThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_UPGRADETHRESHOLD_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_DESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_GET_DESCPARAMS_OFFSET))(this);
		}

		::System::Void set_DescParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KAIHLAFFGMC_SET_DESCPARAMS_OFFSET))(this, a1);
		}

	};
