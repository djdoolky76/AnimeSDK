#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIJHLNNBMGL;
namespace RPG::Client::LimaoNews { class LimaoNewsLimaoData; }
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDDF0E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF0FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_ISSHOWINMAINPAGE_OFFSET UNITYSDK_OFFSET(0xDDF12A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xDDF1280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xDDF1030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xDDF0DF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_ISSHOWINMAINPAGE_OFFSET UNITYSDK_OFFSET(0xDDF12B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xDDF1290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET UNITYSDK_OFFSET(0xDDF10F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET UNITYSDK_OFFSET(0xDDF1130)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLimaoData_TypeDefinitionIndex = 83064;

	class LimaoNewsLimaoData : public ::System::Object
	{
	public:
		::FIJHLNNBMGL* _LimaoRow; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsUserData* _UserData; // 0x18
		::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* ConditionIDList; // 0x20
		::System::Boolean _IsShowInMainPage_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _LimaoId_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsLimaoData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLimaoData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET))(this);
		}

		::FIJHLNNBMGL* _GetLimaoRow()
		{
			return ((::FIJHLNNBMGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* _GetUserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET))(this);
		}

		::System::UInt32 get_LimaoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET))(this);
		}

		::System::Void set_LimaoId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowInMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_ISSHOWINMAINPAGE_OFFSET))(this);
		}

		::System::Void set_IsShowInMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_ISSHOWINMAINPAGE_OFFSET))(this, a1);
		}

	};
}
