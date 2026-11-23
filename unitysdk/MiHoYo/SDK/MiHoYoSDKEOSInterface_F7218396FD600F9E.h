#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F7218396FD600F9E_A16597FCC800A211_OFFSET UNITYSDK_OFFSET(0x29B24D0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F7218396FD600F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_F7218396FD600F9E_TypeDefinitionIndex = 15607;

	class MiHoYoSDKEOSInterface_F7218396FD600F9E : public ::System::Object
	{
	public:
		::F00D975466190277* AEA717119D013F50; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F7218396FD600F9E__CTOR_OFFSET))(this);
		}

		::System::Void A16597FCC800A211(::System::Int32 FEC8DC0392823C8D, ::System::String* FECAF96EEBC85461)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F7218396FD600F9E_A16597FCC800A211_OFFSET))(this, FEC8DC0392823C8D, FECAF96EEBC85461);
		}
	};
}
