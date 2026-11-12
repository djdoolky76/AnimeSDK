#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPOBLIFMGN;

#define RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC30900)
#define RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_GET_ISNEWPLAYER_OFFSET UNITYSDK_OFFSET(0xDC30850)
#define RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_GET_ISOLDPLAYER_OFFSET UNITYSDK_OFFSET(0xDC30830)
#define RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_SET_ISOLDPLAYER_OFFSET UNITYSDK_OFFSET(0xDC30840)
#define RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_SYNC_OFFSET UNITYSDK_OFFSET(0xDC308A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerProfile_TypeDefinitionIndex = 66743;

	class GridFightPlayerProfile : public ::System::Object
	{
	public:
		::System::Boolean _IsOldPlayer_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsOldPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_GET_ISOLDPLAYER_OFFSET))(this);
		}

		::System::Void set_IsOldPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_SET_ISOLDPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_GET_ISNEWPLAYER_OFFSET))(this);
		}

		::System::Void Sync(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERPROFILE_SYNC_OFFSET))(this, a1);
		}

	};
}
