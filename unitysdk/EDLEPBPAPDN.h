#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBDDNMNIHIG;
namespace RPG::GameCore { class DeviceSettingConfig; }

#define EDLEPBPAPDN_BEKDECABOKI_OFFSET UNITYSDK_OFFSET(0x1332A960)
#define EDLEPBPAPDN_FFEDKCEDHIL_OFFSET UNITYSDK_OFFSET(0x1332A900)
#define EDLEPBPAPDN_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0x1332A660)

	class EDLEPBPAPDN : public ::System::Object
	{
	public:
		static ::KBDDNMNIHIG** StaticGet_HMPDKCFLOFJ()
		{
			return (::KBDDNMNIHIG**)UnitySDK::FromName("", "EDLEPBPAPDN")->GetStaticField(0x6FF90);
		}

		static ::RPG::GameCore::DeviceSettingConfig** StaticGet_KGKBIIIAJCL()
		{
			return (::RPG::GameCore::DeviceSettingConfig**)UnitySDK::FromName("", "EDLEPBPAPDN")->GetStaticField(0x6FF98);
		}

		static ::System::Void ODPAPLIIDDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDLEPBPAPDN_ODPAPLIIDDD_OFFSET))();
		}

		static ::RPG::GameCore::DeviceSettingConfig* FFEDKCEDHIL()
		{
			return ((::RPG::GameCore::DeviceSettingConfig*(*)())((::PBYTE)hIl2Cpp + EDLEPBPAPDN_FFEDKCEDHIL_OFFSET))();
		}

		static ::KBDDNMNIHIG* BEKDECABOKI()
		{
			return ((::KBDDNMNIHIG*(*)())((::PBYTE)hIl2Cpp + EDLEPBPAPDN_BEKDECABOKI_OFFSET))();
		}

	};
