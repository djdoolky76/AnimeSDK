#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::CustomRP { class RPGColorGrading; }

#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7F570)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_ENABLECOLORGRADING_OFFSET UNITYSDK_OFFSET(0x1BC7F3D0)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_GET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1BC7F420)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BC7F4B0)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_SET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x1BC7F460)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY__REGISTER_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BC7F5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeColorGradingProxy_TypeDefinitionIndex = 75130;

	class VolumeColorGradingProxy
	{
	public:
		::System::Boolean _ColorGradingEnabled; // 0x38
		::System::Boolean _ColorSaturationGlobalOverrideState; // 0x39
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector4 _ColorSaturationGlobalColor; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_CTOR_OFFSET))(this);
		}

		::System::Void EnableColorGrading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_ENABLECOLORGRADING_OFFSET))(this, a1);
		}

		::System::Boolean get_ControlEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_GET_CONTROLENABLED_OFFSET))(this);
		}

		::System::Void set_ControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_SET_CONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_REGISTER_OFFSET))(this);
		}

		::System::Void _Register_b__4_0(::RPG::CustomRP::RPGColorGrading* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY__REGISTER_B__4_0_OFFSET))(this, a1);
		}

	};
}
