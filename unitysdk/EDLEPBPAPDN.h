#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBDDNMNIHIG;
namespace RPG::GameCore { class DeviceSettingConfig; }

#define EDLEPBPAPDN_BEKDECABOKI_OFFSET UNITYSDK_OFFSET(0x140E7800)
#define EDLEPBPAPDN_FFEDKCEDHIL_OFFSET UNITYSDK_OFFSET(0x140E77A0)
#define EDLEPBPAPDN_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0x140E7500)

inline static constexpr unsigned int EDLEPBPAPDN_TypeDefinitionIndex = 70231;

	class EDLEPBPAPDN : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DeviceSettingConfig** StaticGet_KGKBIIIAJCL()
		{
			return (::RPG::GameCore::DeviceSettingConfig**)UnitySDK::FromName("", "EDLEPBPAPDN")->GetStaticField(0x73330);
		}

		static ::KBDDNMNIHIG** StaticGet_HMPDKCFLOFJ()
		{
			return (::KBDDNMNIHIG**)UnitySDK::FromName("", "EDLEPBPAPDN")->GetStaticField(0x73338);
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
