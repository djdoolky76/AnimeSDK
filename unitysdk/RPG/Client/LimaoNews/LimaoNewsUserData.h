#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OANOGADDKKH;
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3CCF90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD3E3730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISOFFICIAL_OFFSET UNITYSDK_OFFSET(0xD3D23D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_ISVAILD_OFFSET UNITYSDK_OFFSET(0xD3D2190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERICON_OFFSET UNITYSDK_OFFSET(0xD3D2220)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xD3E3740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xD3D22E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0xD3E3750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSUSERDATA__GETUSERROW_OFFSET UNITYSDK_OFFSET(0xD3E3760)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsUserData_TypeDefinitionIndex = 80300;

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
