#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class CharacterCustomBlushMonoPlugin; }
namespace System { class Object; }

#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9BFD00)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC9BFAC0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC9BFCF0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC9BF400)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xC9BF3C0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_GODCJMNGPKO_OFFSET UNITYSDK_OFFSET(0xC9BF460)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0xC9BEE20)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_HOBMEPPDPFA_OFFSET UNITYSDK_OFFSET(0xC9BF6F0)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xC9BFB30)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9BF640)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC9BFA60)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xC9BFC90)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xC9BFC30)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xC9BFB90)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC9BF990)
#define RPG_CLIENT_CHARACTERCUSTOMBLUSHBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xC9BFBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCustomBlushBehavior_TypeDefinitionIndex = 70259;

	class CharacterCustomBlushBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::System::Object*>* _LockedSnapshots; // 0x38
		::System::Boolean _LockedSnapshotsCaptured; // 0x40
		static ::System::Int32* StaticGet__CustomBlushClipMultiplierShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x154B0);
		}

		static ::System::Int32* StaticGet__CustomBlushWorldToLocalMatrix1ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x154B4);
		}

		static ::System::Int32* StaticGet__CustomBlushWorldToLocalMatrix2ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterCustomBlushBehavior")->GetStaticField(0x154B8);
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
