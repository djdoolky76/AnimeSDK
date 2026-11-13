#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OANOGADDKKH;
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CBC5F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC5FA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISOFFICIAL_OFFSET UNITYSDK_OFFSET(0x1CBC6270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISVAILD_OFFSET UNITYSDK_OFFSET(0x1CBC5FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERICON_OFFSET UNITYSDK_OFFSET(0x1CBC60C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1CBC5FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1CBC6180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1CBC5FC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA__GETUSERROW_OFFSET UNITYSDK_OFFSET(0x1CBC6060)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsUserData_TypeDefinitionIndex = 83077;

	class LimaoNewsUserData : public ::System::Object
	{
	public:
		::System::UInt32 _UserID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsUserData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISVAILD_OFFSET))(this);
		}

		::System::String* get_UserIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_UserName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERNAME_OFFSET))(this);
		}

		::System::Boolean get_IsOfficial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISOFFICIAL_OFFSET))(this);
		}

		::OANOGADDKKH* _GetUserRow()
		{
			return ((::OANOGADDKKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA__GETUSERROW_OFFSET))(this);
		}

	};
}
