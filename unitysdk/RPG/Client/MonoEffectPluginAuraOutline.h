#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_ANOJNLJFJCG_OFFSET UNITYSDK_OFFSET(0xD7C3EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7C4080)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7C3FB0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7C3AA0)

namespace RPG::Client
{
	class MonoEffectPluginAuraOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Single AuraScrPosScale; // 0x220
		::System::Single OutlineAuraWidth; // 0x224
		::System::Single OutlineAuraOffset; // 0x228
		::UnityEngine::Color AuraColor1; // 0x22C
		::UnityEngine::Color AuraColor2; // 0x23C
		::UnityEngine::Vector4 AuraNoise_ST; // 0x24C
		::UnityEngine::Vector4 DisStep; // 0x25C
		::UnityEngine::Vector4 Smooth; // 0x26C
		::UnityEngine::Vector4 AuraSpeed; // 0x27C
		::UnityEngine::Vector4 Aurafresnel; // 0x28C
		::System::Boolean PartsSelection; // 0x29C
		::System::Boolean HideCharaParts; // 0x29D
		::System::Boolean ShowID0; // 0x29E
		::System::Boolean ShowID1; // 0x29F
		::System::Boolean ShowID2; // 0x2A0
		::System::Boolean ShowID3; // 0x2A1
		::System::Boolean ShowID4; // 0x2A2
		::System::Boolean ShowID5; // 0x2A3
		::System::Boolean ShowID6; // 0x2A4
		::System::Boolean ShowID7; // 0x2A5
		static ::Il2CppArray<::System::Int32>** StaticGet_CJNJFEIAECK()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x5F5D0);
		}

		static ::System::Int32* StaticGet_GKGDBANLPJD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145D0);
		}

		static ::System::Int32* StaticGet_IAOODBDDNJI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145D4);
		}

		static ::System::Int32* StaticGet_NFOELAMKEND()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145D8);
		}

		static ::System::Int32* StaticGet_LGOPPJIALAK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145DC);
		}

		static ::System::Int32* StaticGet_DHHCNGLJLEN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145E0);
		}

		static ::System::Int32* StaticGet_BCPDFKGFOOF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145E4);
		}

		static ::System::Int32* StaticGet_PIMBGNJOEPF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145E8);
		}

		static ::System::Int32* StaticGet_BPLIPDPAGGD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145EC);
		}

		static ::System::Int32* StaticGet_KBGHONJEEAB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145F0);
		}

		static ::System::Int32* StaticGet_NADJGIMJGIP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145F4);
		}

		static ::System::Int32* StaticGet_EMBEMDDBENG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145F8);
		}

		static ::System::Int32* StaticGet_IGCLPGGJINP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginAuraOutline")->GetStaticField(0x145FC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_CCTOR_OFFSET))();
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Int32 ANOJNLJFJCG(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_ANOJNLJFJCG_OFFSET))(this, a1, a2, a3);
		}

	};
}
