#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIPartialBlur_ShapeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIPartialBlur; }
namespace RPG::Client { class UIPostProcessTween; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class CanvasScaler; }

#define RPG_CLIENT_UIPOSTPROCESSTWEEN_CFHNHLICCCO_OFFSET UNITYSDK_OFFSET(0xE3E63B0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E7CB0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE3B9C30)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_KIANPENBMDO_OFFSET UNITYSDK_OFFSET(0xE3E6D70)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_KJJCLDGHCFN_OFFSET UNITYSDK_OFFSET(0xE3E56C0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_LHIAMOMMCJC_OFFSET UNITYSDK_OFFSET(0xE3E5CD0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_LLMDPMKNDMN_OFFSET UNITYSDK_OFFSET(0xE3E7590)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0xE3B9D90)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETDISABLEUIBLURTWEEN_OFFSET UNITYSDK_OFFSET(0xE3E7760)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETUIMETA_OFFSET UNITYSDK_OFFSET(0xE3E5920)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xE3E77B0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN__UPDATEBLURPARAMS_G__FILLPARTIALBLURAREA_25_0_OFFSET UNITYSDK_OFFSET(0xE3E7810)

namespace RPG::Client
{
	class UIPostProcessTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIMeta* _UIMetaBlurFull; // 0x18
		::RPG::Client::UIMeta* _UIMetaBlurFullLast; // 0x20
		::RPG::Client::UIMeta* _UIMetaBlurPartial; // 0x28
		::UnityEngine::CanvasGroup* HAICCHDPBOG; // 0x30
		::UnityEngine::CanvasGroup* PEFNAMFFFDO; // 0x38
		::System::Boolean APGIDJGAFBE; // 0x40
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Vector3>* FJKLKJCBJGC; // 0x48
		::System::Boolean BBGDILMBDPC; // 0x50
		::System::Byte _padding1[0x7];
		::RPG::Client::UIMeta* _UIMetaVignette; // 0x58
		::UnityEngine::CanvasGroup* OBAECCLKOAF; // 0x60
		::System::Boolean DJDIGHHKKEJ; // 0x68
		::System::Byte _padding2[0x7];
		::RPG::Client::UIMeta* _UIMetaDOF; // 0x70
		::System::Boolean DCKJOPLDJDL; // 0x78
		::System::Byte _padding3[0x7];
		::RPG::Client::UIMeta* _UIMetaDisableMainCamera; // 0x80
		::UnityEngine::UI::CanvasScaler* KMKJADFCPNI; // 0x88
		static ::RPG::Client::UIPostProcessTween** StaticGet_FLMODBLFAGD()
		{
			return (::RPG::Client::UIPostProcessTween**)UnitySDK::FromName("RPG.Client", "UIPostProcessTween")->GetStaticField(0x3CB20);
		}

		// static const ::System::Object MaxPartialRectCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIPostProcessTween* get_Instance()
		{
			return ((::RPG::Client::UIPostProcessTween*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_GET_INSTANCE_OFFSET))();
		}

		::System::Single KJJCLDGHCFN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_KJJCLDGHCFN_OFFSET))(this);
		}

		::System::Void SetUIMeta(::RPG::Client::UIMeta* a1, ::RPG::Client::UIMeta* a2, ::RPG::Client::UIMeta* a3, ::RPG::Client::UIMeta* a4, ::RPG::Client::UIMeta* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_SETUIMETA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetDisableUIBlurTween(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_SETDISABLEUIBLURTWEEN_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_UPDATE_OFFSET))(this);
		}

		::System::Void LHIAMOMMCJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_LHIAMOMMCJC_OFFSET))(this);
		}

		::System::Void CFHNHLICCCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_CFHNHLICCCO_OFFSET))(this);
		}

		::System::Void KIANPENBMDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_KIANPENBMDO_OFFSET))(this);
		}

		::System::Void LLMDPMKNDMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_LLMDPMKNDMN_OFFSET))(this);
		}

		::System::Void _UpdateBlurParams_g__FillPartialBlurArea_25_0(::RPG::Client::UIPartialBlur* a1, ::RPG::Client::UIPartialBlur_ShapeType a2, ::UnityEngine::Camera* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPartialBlur*, ::RPG::Client::UIPartialBlur_ShapeType, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN__UPDATEBLURPARAMS_G__FILLPARTIALBLURAREA_25_0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
