#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::Config { class EffectLowPrefabHashMap; }
namespace System { class Action; }

#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CFPGCEODJGC_OFFSET UNITYSDK_OFFSET(0x1641FF20)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CHCDIPFANAL_OFFSET UNITYSDK_OFFSET(0x1641FCB0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1641FAF0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_FJJHNCEKPIM_OFFSET UNITYSDK_OFFSET(0x1641FC60)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_FMACJNCGEKH_OFFSET UNITYSDK_OFFSET(0x1641F970)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HJPFFOCAFKL_OFFSET UNITYSDK_OFFSET(0x1641FD30)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_NEEKICPBCED_OFFSET UNITYSDK_OFFSET(0x1641FF80)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_REGISTERASSETPATHREMAPPER_OFFSET UNITYSDK_OFFSET(0x1641F8B0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1641F960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLowPrefabRuntime_TypeDefinitionIndex = 85171;

	class EffectLowPrefabRuntime : public ::System::Object
	{
	public:
		static ::MoleMole::Config::EffectLowPrefabHashMap** StaticGet_DDIHNLOKCCJ()
		{
			return (::MoleMole::Config::EffectLowPrefabHashMap**)Il2CppClass::FromTypeDefinitionIndex(EffectLowPrefabRuntime_TypeDefinitionIndex)->GetStaticField(0x44B00);
		}
		static ::System::Boolean* StaticGet_IFOAPLENDFK()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectLowPrefabRuntime_TypeDefinitionIndex)->GetStaticField(0xFDB0);
		}
		static ::System::Boolean* StaticGet_LMPIFJHBEGH()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectLowPrefabRuntime_TypeDefinitionIndex)->GetStaticField(0xFDB1);
		}
		// static const ::System::String* AILDFEHMIBM; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterAssetPathRemapper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_REGISTERASSETPATHREMAPPER_OFFSET))();
		}

		static ::System::Void FMACJNCGEKH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_FMACJNCGEKH_OFFSET))();
		}

		static ::System::Void FJJHNCEKPIM(::MoleMole::Config::EffectLowPrefabHashMap* FFJOEPDPPON)
		{
			return ((::System::Void(*)(::MoleMole::Config::EffectLowPrefabHashMap*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_FJJHNCEKPIM_OFFSET))(FFJOEPDPPON);
		}

		static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
		}

		static ::Foundation::AssetPath CHCDIPFANAL(::Foundation::AssetPath KHGFAKJKDGG)
		{
			return ((::Foundation::AssetPath(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CHCDIPFANAL_OFFSET))(KHGFAKJKDGG);
		}

		static ::System::Boolean HJPFFOCAFKL(::Foundation::AssetPath& KHGFAKJKDGG, ::Foundation::AssetPath& OLPLDOBCLPE)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HJPFFOCAFKL_OFFSET))(KHGFAKJKDGG, OLPLDOBCLPE);
		}

		static ::System::Void CFPGCEODJGC(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_CFPGCEODJGC_OFFSET))(EGEGIMGMJHN);
		}

		static ::System::Boolean NEEKICPBCED()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_NEEKICPBCED_OFFSET))();
		}
	};
}
