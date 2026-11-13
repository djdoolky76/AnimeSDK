#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class DEBEAKKOHLN;
namespace RPG::Client { class FlipbookControllMonoPlugin; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x19AE8D40)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x19AE88B0)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8D30)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_EHFKKCIOMDE_OFFSET UNITYSDK_OFFSET(0x19AE8CD0)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_EIPDBAKPAHD_OFFSET UNITYSDK_OFFSET(0x19AE8C20)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x19AE87D0)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_GLEEJFBNGNK_OFFSET UNITYSDK_OFFSET(0x19AE8A10)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x19AE8910)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19AE8530)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x19AE8810)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_MNJJEHCIJIC_OFFSET UNITYSDK_OFFSET(0x19AE8780)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x19AE8B60)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x19AE8970)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x19AE85C0)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x19AE89D0)
#define RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x19AE8BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FlipbookControllBehavior_TypeDefinitionIndex = 72580;

	class FlipbookControllBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Material* _Material; // 0x38
		::DEBEAKKOHLN* _RendererCache; // 0x40
		::System::Single _LocalTimer; // 0x48
		::System::Single _IimeMethod; // 0x4C
		static ::System::Int32* StaticGet__UseTimeOutput()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlipbookControllBehavior")->GetStaticField(0x148D0);
		}

		static ::System::Int32* StaticGet__TimeOutput()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlipbookControllBehavior")->GetStaticField(0x148D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void GLEEJFBNGNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_GLEEJFBNGNK_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void EHFKKCIOMDE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_EHFKKCIOMDE_OFFSET))(this, a1);
		}

		::System::Void EIPDBAKPAHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_EIPDBAKPAHD_OFFSET))(this);
		}

		::System::Void MNJJEHCIJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_MNJJEHCIJIC_OFFSET))(this);
		}

		::RPG::Client::FlipbookControllMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::FlipbookControllMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
