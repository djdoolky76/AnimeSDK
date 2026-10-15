#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7B9A40)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD7B98E0)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7B9520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex = 69934;

	class MonoEffectPluginAlchemizeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean EnableGradientColor; // 0x220
		::System::Byte _padding0[0x3];
		::System::Single GradientRange; // 0x224
		static ::System::Int32* StaticGet_KMLFHFCKOHI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAlchemizeOverlay")->GetStaticField(0x14340);
		}

		static ::System::Int32* StaticGet_HILHNCNKMKL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAlchemizeOverlay")->GetStaticField(0x14344);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_CCTOR_OFFSET))();
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_IFOEAAAKONL_OFFSET))(this);
		}

	};
}
