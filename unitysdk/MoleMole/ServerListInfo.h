#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPFGCNCGKD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SERVERLISTINFO_GETSERVERHOST_OFFSET UNITYSDK_OFFSET(0x198D2030)
#define MOLEMOLE_SERVERLISTINFO_GETSERVERNAME_OFFSET UNITYSDK_OFFSET(0x198D1FB0)
#define MOLEMOLE_SERVERLISTINFO_GETSERVERTITLE_OFFSET UNITYSDK_OFFSET(0x198D1FF0)
#define MOLEMOLE_SERVERLISTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x198D21B0)

namespace MoleMole
{
	inline static constexpr unsigned int ServerListInfo_TypeDefinitionIndex = 79345;

	class ServerListInfo : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* dispatch_url; // 0x18
		::System::Int32 retcode; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* title; // 0x28
		::System::Int64 stop_begin_time; // 0x30
		::System::Int64 stop_end_time; // 0x38
		::System::String* msg; // 0x40
		::System::String* env; // 0x48
		::System::String* biz; // 0x50
		::System::Int32 area; // 0x58
		::System::Int32 psn_region; // 0x5C
		::System::String* ping_url; // 0x60
		::System::Boolean is_recommend; // 0x68
		::System::Byte _padding1[0x7];
		::System::String* ip; // 0x70
		::System::Int32 port; // 0x78
		::System::Byte _padding2[0x4];
		::System::String* noticeRegion; // 0x80
		::OEPFGCNCGKD Status; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO__CTOR_OFFSET))(this);
		}

		::System::String* GetServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERNAME_OFFSET))(this);
		}

		::System::String* GetServerTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERTITLE_OFFSET))(this);
		}

		::System::String* GetServerHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERHOST_OFFSET))(this);
		}
	};
}
