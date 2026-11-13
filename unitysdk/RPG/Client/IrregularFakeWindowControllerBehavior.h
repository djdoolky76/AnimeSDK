#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class IrregularFakeWindowControllerMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x17094AF0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x17094770)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x17094AE0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_DBEFJKMECPO_OFFSET UNITYSDK_OFFSET(0x17093D70)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17093BC0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x170947D0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x170939F0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LAABBLCDKJG_OFFSET UNITYSDK_OFFSET(0x17094990)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LANFHPCGLIM_OFFSET UNITYSDK_OFFSET(0x17093C00)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x17094710)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x17094930)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x170948D0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x17094830)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x17093A50)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x17094890)

namespace RPG::Client
{
	inline static constexpr unsigned int IrregularFakeWindowControllerBehavior_TypeDefinitionIndex = 72840;

	class IrregularFakeWindowControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x38
		static ::System::Int32* StaticGet_PID_WinSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x8590);
		}

		static ::System::Int32* StaticGet_PID_WinRightOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x8594);
		}

		static ::System::Int32* StaticGet_PID_FadeWindowAspect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x8598);
		}

		static ::System::Int32* StaticGet_PID_WinUpOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x859C);
		}

		static ::System::Int32* StaticGet_PID_WinOriginOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x85A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void DBEFJKMECPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_DBEFJKMECPO_OFFSET))(this);
		}

		::UnityEngine::Renderer* LANFHPCGLIM()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LANFHPCGLIM_OFFSET))(this);
		}

		::UnityEngine::Mesh* LAABBLCDKJG(::UnityEngine::Renderer* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LAABBLCDKJG_OFFSET))(this, a1);
		}

		::RPG::Client::IrregularFakeWindowControllerMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::IrregularFakeWindowControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
