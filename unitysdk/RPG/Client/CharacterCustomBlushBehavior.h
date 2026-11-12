#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class CharacterCustomBlushMonoPlugin; }
namespace System { class Object; }

#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD32CFC0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD32CD80)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD32CFB0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD32C6C0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD32C680)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GODCJMNGPKO_OFFSET UNITYSDK_OFFSET(0xD32C720)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0xD32C0E0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HOBMEPPDPFA_OFFSET UNITYSDK_OFFSET(0xD32C9B0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD32CDF0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD32C900)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD32CD20)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xD32CF50)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD32CEF0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD32CE50)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD32CC50)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD32CEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCustomBlushBehavior_TypeDefinitionIndex = 72225;

	class CharacterCustomBlushBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::System::Object*>* _LockedSnapshots; // 0x38
		::System::Boolean _LockedSnapshotsCaptured; // 0x40
		static ::System::Int32* StaticGet__CustomBlushWorldToLocalMatrix1ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x14B60);
		}

		static ::System::Int32* StaticGet__CustomBlushWorldToLocalMatrix2ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x14B64);
		}

		static ::System::Int32* StaticGet__CustomBlushClipMultiplierShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x14B68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void HNJCLJMEAJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HNJCLJMEAJJ_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::RPG::Client::CharacterCustomBlushMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::CharacterCustomBlushMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void HOBMEPPDPFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HOBMEPPDPFA_OFFSET))(this);
		}

		::System::Void GODCJMNGPKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GODCJMNGPKO_OFFSET))(this);
		}

	};
}
