#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/HoYoText.h"
#include "unitysdk/UnityEngine/UIVertex.h"
namespace MiHoYo::SDK { class HrefClickEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class VertexHelper; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E306370)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E306250)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GETOUTPUTTEXT_OFFSET UNITYSDK_OFFSET(0x1E305080)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x1E3030A0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E305EB0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E303FD0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_REPLACERICHTEXT_OFFSET UNITYSDK_OFFSET(0x1E305C40)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1E3030C0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x1E3030B0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_UPDATEQUADIMAGE_OFFSET UNITYSDK_OFFSET(0x1E303120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_TypeDefinitionIndex = 47484;

	class MiHoYoSDKLinkImageText : public ::MiHoYo::SDK::HoYoUI::HoYoText
	{
	public:
		::System::String* m_OutputText; // 0x1F0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_ImagesPool; // 0x1F8
		::System::Collections::Generic::List_1<::System::Int32>* m_ImagesVertexIndex; // 0x200
		::System::Collections::Generic::List_1<::System::Object*>* m_HrefInfos; // 0x208
		::MiHoYo::SDK::HrefClickEvent* m_OnHrefClick; // 0x210
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x218
		::UnityEngine::UIVertex vert; // 0x220
		static ::System::Func_2<::System::String*, ::UnityEngine::Sprite*>** StaticGet_funLoadSprite()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Sprite*>**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKLinkImageText")->GetStaticField(0x1EC30);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_s_HrefRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKLinkImageText")->GetStaticField(0x1EC38);
		}

		static ::System::Text::StringBuilder** StaticGet_s_TextBuilder()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKLinkImageText")->GetStaticField(0x1EC40);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_s_ImageRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKLinkImageText")->GetStaticField(0x1EC48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::HrefClickEvent* get_onHrefClick()
		{
			return ((::MiHoYo::SDK::HrefClickEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GET_ONHREFCLICK_OFFSET))(this);
		}

		::System::Void set_onHrefClick(::MiHoYo::SDK::HrefClickEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HrefClickEvent*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SET_ONHREFCLICK_OFFSET))(this, a1);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void UpdateQuadImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_UPDATEQUADIMAGE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::String* GetOutputText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GETOUTPUTTEXT_OFFSET))(this, a1);
		}

		::System::String* ReplaceRichText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_REPLACERICHTEXT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOINTERCLICK_OFFSET))(this, a1);
		}

	};
}
