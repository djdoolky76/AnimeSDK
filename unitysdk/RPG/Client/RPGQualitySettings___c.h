#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PCResolution; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RPGQUALITYSETTINGS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE2A7A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE2A7D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS___C__GETALLDEVICERESOLUTIONS_B__76_0_OFFSET UNITYSDK_OFFSET(0xDE2A7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings___c_TypeDefinitionIndex = 67921;

	class RPGQualitySettings___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PCResolution*>** StaticGet___9__76_0()
		{
			return (::System::Comparison_1<::RPG::Client::PCResolution*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64320);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllDeviceResolutions_b__76_0(::RPG::Client::PCResolution* a1, ::RPG::Client::PCResolution* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C__GETALLDEVICERESOLUTIONS_B__76_0_OFFSET))(this, a1, a2);
		}

	};
}
