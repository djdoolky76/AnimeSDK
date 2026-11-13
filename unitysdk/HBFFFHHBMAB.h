#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/OOFGNEDEFCF.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HBFFFHHBMAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C159490)
#define HBFFFHHBMAB_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1C159390)
#define HBFFFHHBMAB_GET_DEVICEUPGRADECOUNTREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1C1593D0)
#define HBFFFHHBMAB_GET_LEVELIDS_OFFSET UNITYSDK_OFFSET(0x1C1593B0)
#define HBFFFHHBMAB_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1C159410)
#define HBFFFHHBMAB_GET_PRICEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1C159470)
#define HBFFFHHBMAB_GET_PROGRESSAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C1593F0)
#define HBFFFHHBMAB_GET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x1C159450)
#define HBFFFHHBMAB_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C159430)
#define HBFFFHHBMAB_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1C1593A0)
#define HBFFFHHBMAB_SET_DEVICEUPGRADECOUNTREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1C1593E0)
#define HBFFFHHBMAB_SET_LEVELIDS_OFFSET UNITYSDK_OFFSET(0x1C1593C0)
#define HBFFFHHBMAB_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1C159420)
#define HBFFFHHBMAB_SET_PRICEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1C159480)
#define HBFFFHHBMAB_SET_PROGRESSAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C159400)
#define HBFFFHHBMAB_SET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x1C159460)
#define HBFFFHHBMAB_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C159440)

inline static constexpr unsigned int HBFFFHHBMAB_TypeDefinitionIndex = 77052;

	class HBFFFHHBMAB : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::OCKCNOOHILK>* _LevelIds_k__BackingField; // 0x10
		::System::Single _PriceMultiplier_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _TitleDesc_k__BackingField; // 0x20
		::System::UInt32 _ProgressAmount_k__BackingField; // 0x30
		::System::UInt32 _DeviceUpgradeCountRequirement_k__BackingField; // 0x34
		::RPG::Client::TextID _Title_k__BackingField; // 0x38
		::BAMIOFOKCEB _CycleId_k__BackingField; // 0x48
		::OOFGNEDEFCF _PerformanceId_k__BackingField; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_CTOR_OFFSET))(this);
		}

		::BAMIOFOKCEB get_CycleId()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleId(::BAMIOFOKCEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_CYCLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::OCKCNOOHILK>* get_LevelIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::OCKCNOOHILK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_LEVELIDS_OFFSET))(this);
		}

		::System::Void set_LevelIds(::System::Collections::Generic::IReadOnlyList_1<::OCKCNOOHILK>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::OCKCNOOHILK>*))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_LEVELIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_DeviceUpgradeCountRequirement()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_DEVICEUPGRADECOUNTREQUIREMENT_OFFSET))(this);
		}

		::System::Void set_DeviceUpgradeCountRequirement(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_DEVICEUPGRADECOUNTREQUIREMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_PROGRESSAMOUNT_OFFSET))(this);
		}

		::System::Void set_ProgressAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_PROGRESSAMOUNT_OFFSET))(this, a1);
		}

		::OOFGNEDEFCF get_PerformanceId()
		{
			return ((::OOFGNEDEFCF(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::Void set_PerformanceId(::OOFGNEDEFCF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOFGNEDEFCF))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_PERFORMANCEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_TITLEDESC_OFFSET))(this);
		}

		::System::Void set_TitleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_TITLEDESC_OFFSET))(this, a1);
		}

		::System::Single get_PriceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_GET_PRICEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_PriceMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFFFHHBMAB_SET_PRICEMULTIPLIER_OFFSET))(this, a1);
		}

	};
