#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0xDAA1290)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDAA0770)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA0700)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0xDAA0F60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONEXTRAREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xDAA0A20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0xDAA0A70)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA09B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xDAA0930)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAMEFORSTAGE_OFFSET UNITYSDK_OFFSET(0xDAA0B10)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0xDAA0F10)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xDAA09D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0xDAA0AC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAA0910)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISNEWBIEDIVISION_OFFSET UNITYSDK_OFFSET(0xDAA0FF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xDAA0970)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0xDAA1130)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDAA0950)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xDAA0990)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA09C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xDAA0940)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xDAA0920)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xDAA0980)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDAA0960)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xDAA09A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__GETDIVISIONNAME_OFFSET UNITYSDK_OFFSET(0xDAA0B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionConfig_TypeDefinitionIndex = 66068;

	class GridFightDivisionConfig : public ::System::Object
	{
	public:
		::RPG::Client::GridFightDivisionLevelConfig* _DivisionLevelConfig_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _SeasonID_k__BackingField; // 0x1C
		::System::Boolean _IsPromotion_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x24
		::System::Nullable_1<::System::UInt32> _PrevDivisionID; // 0x28
		::System::UInt32 _Progress_k__BackingField; // 0x30
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightDivisionConfig")->GetStaticField(0x6CDF0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightDivisionConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ISPROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_SEASONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionLevelConfig* get_DivisionLevelConfig()
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_DivisionLevelConfig(::RPG::Client::GridFightDivisionLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVELCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONREWARDQUEST_OFFSET))(this);
		}

		::System::UInt32 get_DivisionExtraRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONEXTRAREWARDQUEST_OFFSET))(this);
		}

		::System::String* get_DivisionIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONICON_OFFSET))(this);
		}

		::System::String* get_DivisionShowPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONSHOWPIC_OFFSET))(this);
		}

		::System::String* get_DivisionNameForStage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAMEFORSTAGE_OFFSET))(this);
		}

		::System::String* get_DivisionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::String* get_DivisionAbbr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONABBR_OFFSET))(this);
		}

		::System::Boolean get_IsNewBieDivision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISNEWBIEDIVISION_OFFSET))(this);
		}

		::System::UInt32 get_PrevDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PREVDIVISIONID_OFFSET))(this);
		}

		::System::String* _GetDivisionName(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__GETDIVISIONNAME_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightDivisionConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_COMPARETO_OFFSET))(this, a1);
		}

	};
}
