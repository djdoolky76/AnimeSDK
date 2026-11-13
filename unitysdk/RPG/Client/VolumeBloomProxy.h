#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::CustomRP { class RPGBloom; }

#define RPG_CLIENT_VOLUMEBLOOMPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7E890)
#define RPG_CLIENT_VOLUMEBLOOMPROXY_GET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1BC7E6F0)
#define RPG_CLIENT_VOLUMEBLOOMPROXY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BC7E780)
#define RPG_CLIENT_VOLUMEBLOOMPROXY_SET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1BC7E730)
#define RPG_CLIENT_VOLUMEBLOOMPROXY__REGISTER_B__3_0_OFFSET UNITYSDK_OFFSET(0x1BC7E8E0)
#define RPG_CLIENT_VOLUMEBLOOMPROXY__REGISTER_B__3_1_OFFSET UNITYSDK_OFFSET(0x1BC7E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeBloomProxy_TypeDefinitionIndex = 75129;

	class VolumeBloomProxy
	{
	public:
		::System::Boolean _ControlEnabled; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single _BloomThreshold; // 0x3C
		::System::Single _BloomIntensity; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY_CTOR_OFFSET))(this);
		}

		::System::Boolean get_ControlEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY_GET_CONTROLENABLED_OFFSET))(this);
		}

		::System::Void set_ControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY_SET_CONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY_REGISTER_OFFSET))(this);
		}

		::System::Void _Register_b__3_0(::RPG::CustomRP::RPGBloom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBloom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY__REGISTER_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _Register_b__3_1(::RPG::CustomRP::RPGBloom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBloom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEBLOOMPROXY__REGISTER_B__3_1_OFFSET))(this, a1);
		}

	};
}
