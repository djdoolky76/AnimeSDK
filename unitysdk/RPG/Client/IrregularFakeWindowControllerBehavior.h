#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class IrregularFakeWindowControllerMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDAA730)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDDAA3B0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDDAA720)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_DBEFJKMECPO_OFFSET UNITYSDK_OFFSET(0xDDA99B0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDDA9800)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDDAA410)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDDA9630)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LAABBLCDKJG_OFFSET UNITYSDK_OFFSET(0xDDAA5D0)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_LANFHPCGLIM_OFFSET UNITYSDK_OFFSET(0xDDA9840)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xDDAA350)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xDDAA570)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xDDAA510)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDDAA470)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDDA9690)
#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xDDAA4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int IrregularFakeWindowControllerBehavior_TypeDefinitionIndex = 72840;

	class IrregularFakeWindowControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x38
		static ::System::Int32* StaticGet_PID_WinSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x7940);
		}

		static ::System::Int32* StaticGet_PID_WinRightOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x7944);
		}

		static ::System::Int32* StaticGet_PID_FadeWindowAspect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x7948);
		}

		static ::System::Int32* StaticGet_PID_WinOriginOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x794C);
		}

		static ::System::Int32* StaticGet_PID_WinUpOS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "IrregularFakeWindowControllerBehavior")->GetStaticField(0x7950);
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
