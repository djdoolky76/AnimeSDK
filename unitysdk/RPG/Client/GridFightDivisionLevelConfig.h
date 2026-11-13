#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5A1090)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A1080)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1D59F350)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x1D5A1240)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONEXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x1D5A11A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x1D5A11C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D5A1160)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x1D5A1220)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x1D5A1200)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1D5A1180)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1D5A11E0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET UNITYSDK_OFFSET(0x1D59FB60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x1D5A1250)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONEXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x1D5A11B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x1D5A11D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D5A1170)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x1D5A1230)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x1D5A1210)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1D5A1190)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1D5A11F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionLevelConfig_TypeDefinitionIndex = 66070;

	class GridFightDivisionLevelConfig : public ::System::Object
	{
	public:
		::System::String* _DivisionIcon_k__BackingField; // 0x10
		::System::String* _DivisionShowPic_k__BackingField; // 0x18
		::System::UInt32 _DivisionExtraQuest_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _DivisionAbbr_k__BackingField; // 0x28
		::System::UInt32 _DivisionRewardQuest_k__BackingField; // 0x38
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x3C
		::RPG::Client::TextID _DivisionNameWithNum_k__BackingField; // 0x40
		::RPG::Client::TextID _DivisionName_k__BackingField; // 0x50
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightDivisionLevelConfig")->GetStaticField(0x705D0);
		}

		::System::Void _ctor(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightDivisionLevelConfig* GetConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET))(this);
		}

		::System::Void set_DivisionRewardQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionExtraQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONEXTRAQUEST_OFFSET))(this);
		}

		::System::Void set_DivisionExtraQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONEXTRAQUEST_OFFSET))(this, a1);
		}

		::System::String* get_DivisionIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET))(this);
		}

		::System::Void set_DivisionIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET))(this, a1);
		}

		::System::String* get_DivisionShowPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET))(this);
		}

		::System::Void set_DivisionShowPic(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::Void set_DivisionName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionNameWithNum()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET))(this);
		}

		::System::Void set_DivisionNameWithNum(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionAbbr()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET))(this);
		}

		::System::Void set_DivisionAbbr(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewBieDivision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET))(this);
		}

	};
}
