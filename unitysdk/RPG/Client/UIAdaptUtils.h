#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDHLHALKAK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E4C70)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0x1A0E7DD0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0x1A0E7EA0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET UNITYSDK_OFFSET(0x1A0E7F70)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E7CA0)
#define RPG_CLIENT_UIADAPTUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E8CE0)
#define RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E8310)
#define RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0x1A0E86D0)
#define RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E8770)
#define RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0x1A0E8130)
#define RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E8040)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E88B0)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E4E00)
#define RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET UNITYSDK_OFFSET(0x1A0E8B50)
#define RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET UNITYSDK_OFFSET(0x1A0E8820)
#define RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0x1A0E8570)
#define RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0x1A0E8620)
#define RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E84C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptUtils_TypeDefinitionIndex = 61357;

	class UIAdaptUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_IOSSafeAreaIndentFactor()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "UIAdaptUtils")->GetStaticField(0xCFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_CCTOR_OFFSET))();
		}

		static ::System::Void AdjustRectIndent(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectVerticalIndent(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectOffsetLeft(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectOffsetRight(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectScale(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenSpaceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void ClearCustomizedSafeAreaIndent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void TryAdjustIndent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET))(a1);
		}

		static ::System::Void PerformUIAdaptionOperation(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::LNDHLHALKAK*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::LNDHLHALKAK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET))(a1, a2);
		}

		static ::System::Void ResetUIAdaptionOperation(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::LNDHLHALKAK*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::LNDHLHALKAK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET))(a1, a2);
		}

		static ::System::Single GetDefaultCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetMaxCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetDeviceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenAdjustIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET))();
		}

		static ::System::Single get_ScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET))();
		}

		static ::System::Boolean get_IsAdjustAsCloudPhone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET))();
		}

	};
}
