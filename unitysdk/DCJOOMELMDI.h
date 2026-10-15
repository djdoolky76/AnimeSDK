#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectPluginUITrack; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RectTransform; }

#define DCJOOMELMDI_BEKMIKLOHBB_OFFSET UNITYSDK_OFFSET(0xE24B460)
#define DCJOOMELMDI_CCTOR_OFFSET UNITYSDK_OFFSET(0xE24C160)
#define DCJOOMELMDI_CLMBAONBHEI_OFFSET UNITYSDK_OFFSET(0xE24BF30)
#define DCJOOMELMDI_COOGLDNKAIO_OFFSET UNITYSDK_OFFSET(0xE24B2D0)
#define DCJOOMELMDI_CTOR_OFFSET UNITYSDK_OFFSET(0xE24C150)
#define DCJOOMELMDI_DIABIEFHAEF_OFFSET UNITYSDK_OFFSET(0xE24AB70)
#define DCJOOMELMDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE249F50)
#define DCJOOMELMDI_DJDGLOCEIGA_OFFSET UNITYSDK_OFFSET(0xE24B990)
#define DCJOOMELMDI_EAEHNLMFJMC_OFFSET UNITYSDK_OFFSET(0xE24C070)
#define DCJOOMELMDI_EHGCCAIJEJH_OFFSET UNITYSDK_OFFSET(0xE24A140)
#define DCJOOMELMDI_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xE24A410)
#define DCJOOMELMDI_HMJEKICPINP_OFFSET UNITYSDK_OFFSET(0xE24BFD0)
#define DCJOOMELMDI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xE24A6B0)
#define DCJOOMELMDI_ILPPJLNEEOP_OFFSET UNITYSDK_OFFSET(0xE24AEE0)
#define DCJOOMELMDI_JGODFDFIFPN_OFFSET UNITYSDK_OFFSET(0xE24A720)
#define DCJOOMELMDI_KEKOEDAJIFC_OFFSET UNITYSDK_OFFSET(0xE24AC20)
#define DCJOOMELMDI_KENKPFMIJIP_OFFSET UNITYSDK_OFFSET(0xE24B5C0)
#define DCJOOMELMDI_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xE24A050)
#define DCJOOMELMDI_KLONNIFDDKK_OFFSET UNITYSDK_OFFSET(0xE24B340)
#define DCJOOMELMDI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE249EE0)
#define DCJOOMELMDI_MMDFIEFHNLL_OFFSET UNITYSDK_OFFSET(0xE24B050)
#define DCJOOMELMDI_OMJOEIODCNK_OFFSET UNITYSDK_OFFSET(0xE24B1C0)
#define DCJOOMELMDI_PMFNFPPAGJB_OFFSET UNITYSDK_OFFSET(0xE24A5C0)

	class DCJOOMELMDI : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MeshRenderer* BPDNHCHACII; // 0x18
		::UnityEngine::RectTransform* OIGGFCOBKCG; // 0x20
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x28
		::System::Boolean PIPLLENMLIM; // 0x30
		::System::Boolean GLFDHPDMJJP; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single PGMIOKKLHIE; // 0x34
		::UnityEngine::Vector3 KINACPIEDJH; // 0x38
		::UnityEngine::Vector3 JJCCINGEOKI; // 0x44
		::UnityEngine::Vector3 OANHPPNGGAF; // 0x50
		static ::UnityEngine::Vector2* StaticGet_GDLJCEMLNMN()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "DCJOOMELMDI")->GetStaticField(0x14530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJOOMELMDI_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + DCJOOMELMDI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCJOOMELMDI_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PMFNFPPAGJB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCJOOMELMDI_PMFNFPPAGJB_OFFSET))(this, a1);
		}

		::System::Void JGODFDFIFPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_JGODFDFIFPN_OFFSET))(this);
		}

		::System::Void KEKOEDAJIFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_KEKOEDAJIFC_OFFSET))(this);
		}

		::System::Void EHGCCAIJEJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_EHGCCAIJEJH_OFFSET))(this);
		}

		::System::Void ILPPJLNEEOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_ILPPJLNEEOP_OFFSET))(this);
		}

		::System::Void MMDFIEFHNLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_MMDFIEFHNLL_OFFSET))(this);
		}

		::System::Void COOGLDNKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCJOOMELMDI_COOGLDNKAIO_OFFSET))(this, a1);
		}

		::System::Void OMJOEIODCNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_OMJOEIODCNK_OFFSET))(this);
		}

		::System::Void DIABIEFHAEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCJOOMELMDI_DIABIEFHAEF_OFFSET))(this, a1);
		}

		::System::Void KENKPFMIJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_KENKPFMIJIP_OFFSET))(this);
		}

		::System::Void DJDGLOCEIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_DJDGLOCEIGA_OFFSET))(this);
		}

		::System::Boolean KLONNIFDDKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_KLONNIFDDKK_OFFSET))(this);
		}

		::System::Boolean BEKMIKLOHBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_BEKMIKLOHBB_OFFSET))(this);
		}

		::UnityEngine::Vector3 EAEHNLMFJMC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DCJOOMELMDI_EAEHNLMFJMC_OFFSET))(this, a1);
		}

		::System::Single CLMBAONBHEI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_CLMBAONBHEI_OFFSET))(this);
		}

		::System::Single HMJEKICPINP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_HMJEKICPINP_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginUITrack* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginUITrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOOMELMDI_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
