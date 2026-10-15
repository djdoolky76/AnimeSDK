#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginCtrlCamera; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define JCNLLEPCBGI_AGDKPPAAOKO_OFFSET UNITYSDK_OFFSET(0x16599A10)
#define JCNLLEPCBGI_BBMEJOOAOAL_OFFSET UNITYSDK_OFFSET(0x1659A330)
#define JCNLLEPCBGI_BLOMJCEJLFG_OFFSET UNITYSDK_OFFSET(0x16599F40)
#define JCNLLEPCBGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1659A400)
#define JCNLLEPCBGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16599600)
#define JCNLLEPCBGI_EJCMOECKIKD_OFFSET UNITYSDK_OFFSET(0x16599E90)
#define JCNLLEPCBGI_FBDJOABNKOO_OFFSET UNITYSDK_OFFSET(0x16599DE0)
#define JCNLLEPCBGI_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x16599EE0)
#define JCNLLEPCBGI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x165999A0)
#define JCNLLEPCBGI_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x165998F0)
#define JCNLLEPCBGI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16599590)
#define JCNLLEPCBGI_NMIPDBNGLBH_OFFSET UNITYSDK_OFFSET(0x16599670)
#define JCNLLEPCBGI_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x165998A0)

inline static constexpr unsigned int JCNLLEPCBGI_TypeDefinitionIndex = 70053;

	class JCNLLEPCBGI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean IOMHMMKAFKC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_DISPOSE_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void FBDJOABNKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_FBDJOABNKOO_OFFSET))(this);
		}

		::System::Void EJCMOECKIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_EJCMOECKIKD_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void NMIPDBNGLBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_NMIPDBNGLBH_OFFSET))(this, a1);
		}

		static ::System::Void AGDKPPAAOKO(::RPG::Client::MonoEffectPluginCtrlCamera* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffectPluginCtrlCamera*))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_AGDKPPAAOKO_OFFSET))(a1);
		}

		::System::Void BBMEJOOAOAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_BBMEJOOAOAL_OFFSET))(this, a1);
		}

		::System::Void BLOMJCEJLFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_BLOMJCEJLFG_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginCtrlCamera* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginCtrlCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLLEPCBGI_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
