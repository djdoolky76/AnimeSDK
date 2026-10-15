#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class CharacterDissolve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9C9750)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC9C80E0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C96E0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_DNMKDPFNPGP_OFFSET UNITYSDK_OFFSET(0xC9C8380)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xC9C8000)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xC9C8140)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9C7BC0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC9C8080)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xC9C8260)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xC9C81A0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC9C7C60)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xC9C8200)

namespace RPG::Client
{
	class CharacterDissolveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Renderer* _Renderer; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _MatIndexes; // 0x40
		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15330);
		}

		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15334);
		}

		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15338);
		}

		static ::System::Int32* StaticGet__DissolveStShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x1533C);
		}

		static ::System::Int32* StaticGet__DissolveShadowOffShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15340);
		}

		static ::System::Int32* StaticGet__DissolveOutlineSize1ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15344);
		}

		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15348);
		}

		static ::System::Int32* StaticGet__DissolveMaskShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x1534C);
		}

		static ::System::Int32* StaticGet__DissolveComponentShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15350);
		}

		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15354);
		}

		static ::System::Int32* StaticGet__DitherAlphaShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15358);
		}

		static ::System::Int32* StaticGet__UsingDitherAlphaShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x1535C);
		}

		static ::System::Int32* StaticGet__DissolveOutlineSmoothStepShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15360);
		}

		static ::System::Int32* StaticGet__DissoveOnShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15364);
		}

		static ::System::Int32* StaticGet__DissolveOutlineOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15368);
		}

		static ::System::Int32* StaticGet__DissolveOutlineColor2ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x1536C);
		}

		static ::System::Int32* StaticGet__DissolveOutlineColor1ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15370);
		}

		static ::System::Int32* StaticGet__DissolveMaskUVSetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15374);
		}

		static ::System::Int32* StaticGet__DistortionStShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15378);
		}

		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x1537C);
		}

		static ::System::Int32* StaticGet__DissoveDirecMaskShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15380);
		}

		static ::System::Int32* StaticGet__DissolveOutlineSize2ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterDissolveBehavior")->GetStaticField(0x15384);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void OCIHINMJMBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_OCIHINMJMBE_OFFSET))(this);
		}

		::System::Void DNMKDPFNPGP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_DNMKDPFNPGP_OFFSET))(this, a1);
		}

		::RPG::Client::CharacterDissolve* get__Owner()
		{
			return ((::RPG::Client::CharacterDissolve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
