#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE254F30)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE254E70)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xE254B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex = 71972;

	class MonoEffectPluginOverlayCharaExtraData : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean RootPos; // 0x220
		static ::System::Int32* StaticGet_KIOEMCMACBD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginOverlayCharaExtraData")->GetStaticField(0x13A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_CCTOR_OFFSET))();
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_IFOEAAAKONL_OFFSET))(this);
		}

	};
}
