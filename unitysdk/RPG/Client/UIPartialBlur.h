#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIPartialBlur_ShapeType.h"
#include "unitysdk/RPG/Client/UIPartialBlur_UnitType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIPartialBlur; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIPARTIALBLUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xEE9F160)
#define RPG_CLIENT_UIPARTIALBLUR_CTOR_OFFSET UNITYSDK_OFFSET(0xEE9F150)
#define RPG_CLIENT_UIPARTIALBLUR_GET_RECTTRANS_OFFSET UNITYSDK_OFFSET(0xEE84A20)
#define RPG_CLIENT_UIPARTIALBLUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEE9EE50)
#define RPG_CLIENT_UIPARTIALBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEE9ECC0)
#define RPG_CLIENT_UIPARTIALBLUR_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xEE9EF10)
#define RPG_CLIENT_UIPARTIALBLUR_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xEE9EF60)
#define RPG_CLIENT_UIPARTIALBLUR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xEE9EFB0)
#define RPG_CLIENT_UIPARTIALBLUR_PROCREGISTEREDUIPARTIALBLUR_OFFSET UNITYSDK_OFFSET(0xEE9E740)
#define RPG_CLIENT_UIPARTIALBLUR_TRYGETUIMETA_OFFSET UNITYSDK_OFFSET(0xEE9E930)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPartialBlur_TypeDefinitionIndex = 75203;

	class UIPartialBlur : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIPartialBlur_ShapeType Shape; // 0x18
		::RPG::Client::UIPartialBlur_UnitType RectRoundType; // 0x1C
		::System::Single RLeftTop; // 0x20
		::System::Single RRightTop; // 0x24
		::System::Single RLeftBottom; // 0x28
		::System::Single RRightBottom; // 0x2C
		::System::Single BlurSmooth; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* _RectTrans; // 0x38
		static ::System::Collections::Generic::List_1<::RPG::Client::UIPartialBlur*>** StaticGet_RegisterUIPartialBlur()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::UIPartialBlur*>**)UnitySDK::FromName("RPG.Client", "UIPartialBlur")->GetStaticField(0x47010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_CCTOR_OFFSET))();
		}

		static ::System::Void ProcRegisteredUIPartialBlur()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_PROCREGISTEREDUIPARTIALBLUR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_RectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_GET_RECTTRANS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Boolean TryGetUIMeta(::RPG::Client::UIMeta* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTIALBLUR_TRYGETUIMETA_OFFSET))(this, a1);
		}

	};
}
