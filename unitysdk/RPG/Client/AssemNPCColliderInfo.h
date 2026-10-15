#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AssemNPCColliderInfo; }

#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0xC69A990)
#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC69A980)
#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO_GET_DEFAULTINFO_OFFSET UNITYSDK_OFFSET(0xC69A900)

namespace RPG::Client
{
	class AssemNPCColliderInfo : public ::System::Object
	{
	public:
		::System::Single CenterY; // 0x10
		::System::Single Height; // 0x14
		::System::Single Radius; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssemNPCColliderInfo* get_DefaultInfo()
		{
			return ((::RPG::Client::AssemNPCColliderInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO_GET_DEFAULTINFO_OFFSET))();
		}

		::RPG::Client::AssemNPCColliderInfo* AEOIKFNKAAP()
		{
			return ((::RPG::Client::AssemNPCColliderInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO_AEOIKFNKAAP_OFFSET))(this);
		}

	};
}
