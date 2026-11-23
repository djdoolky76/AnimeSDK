#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/E1B97060789AEE86.h"
#include "unitysdk/E68AA4EB51923C98/B4DCD2F676F6053E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class A44C343F1736A452;
namespace ABC::UI { class CollectViewItem; }
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoViewScriptGenerateExtraSetting; }
namespace ABC::UI { class MonoVideoPlayer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define ABC_UI_MONOUIAUTOVIEW_A26B260EFDBBBB04_OFFSET UNITYSDK_OFFSET(0x1F873B0)
#define ABC_UI_MONOUIAUTOVIEW_A6560E3A3FE3582B_OFFSET UNITYSDK_OFFSET(0x1F868F0)
#define ABC_UI_MONOUIAUTOVIEW_B2065AB95388714B_OFFSET UNITYSDK_OFFSET(0x1F87320)
#define ABC_UI_MONOUIAUTOVIEW_B393C42C704BE87A_OFFSET UNITYSDK_OFFSET(0x1F86D60)
#define ABC_UI_MONOUIAUTOVIEW_B7BFE92B2F0DF66D_OFFSET UNITYSDK_OFFSET(0x1F86C80)
#define ABC_UI_MONOUIAUTOVIEW_BAB923EF0078CB23_OFFSET UNITYSDK_OFFSET(0x1F87090)
#define ABC_UI_MONOUIAUTOVIEW_BC6434117D7AE41F_OFFSET UNITYSDK_OFFSET(0x1F86D10)
#define ABC_UI_MONOUIAUTOVIEW_BDC6F51A92FA5296_OFFSET UNITYSDK_OFFSET(0x1F86EE0)
#define ABC_UI_MONOUIAUTOVIEW_E036796F51C57309_OFFSET UNITYSDK_OFFSET(0x1F87570)
#define ABC_UI_MONOUIAUTOVIEW_E66F0F89608F6E0A_OFFSET UNITYSDK_OFFSET(0x1F86F70)
#define ABC_UI_MONOUIAUTOVIEW_F7B5CD02A9228DDC_OFFSET UNITYSDK_OFFSET(0x1F87120)
#define ABC_UI_MONOUIAUTOVIEW_F87AB4032597D67F_OFFSET UNITYSDK_OFFSET(0x1F87000)
#define ABC_UI_MONOUIAUTOVIEW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x1F868A0)
#define ABC_UI_MONOUIAUTOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAutoView_TypeDefinitionIndex = 7928;

	class MonoUIAutoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::ABC::UI::CollectViewItem*>* autoCollectItems; // 0x20
		::System::Collections::Generic::List_1<::ABC::UI::CollectViewItem*>* customCollectItems; // 0x28
		::System::Boolean IsGenerateUICompScript; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* WidgetName; // 0x38
		::B39AAAD1233537D7::E1B97060789AEE86 genType; // 0x40
		::System::Byte _padding1[0x4];
		::ABC::UI::MonoUIAutoViewScriptGenerateExtraSetting* GenerateExtraSetting; // 0x48
		::E68AA4EB51923C98::B4DCD2F676F6053E UIScreenMode; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ABC::UI::CollectViewItem*>* B3A238753B60F2D5; // 0x58
		::System::Boolean ED599BD7C14B9F83; // 0x60
		::System::Byte _padding3[0x7];
		::A44C343F1736A452* AED407AF89D76B2A; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void A26B260EFDBBBB04(::ABC::UI::CollectViewItem* EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::CollectViewItem*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_A26B260EFDBBBB04_OFFSET))(this, EC35F88C87A83BEB);
		}

		::ABC::UI::MonoButton* B7BFE92B2F0DF66D(::System::String* BE54335E11B56BBE)
		{
			return ((::ABC::UI::MonoButton*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_B7BFE92B2F0DF66D_OFFSET))(this, BE54335E11B56BBE);
		}

		::System::Void A6560E3A3FE3582B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_A6560E3A3FE3582B_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E036796F51C57309()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_E036796F51C57309_OFFSET))(this);
		}

		::UnityEngine::UI::Image* BDC6F51A92FA5296(::System::String* BE54335E11B56BBE)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_BDC6F51A92FA5296_OFFSET))(this, BE54335E11B56BBE);
		}

		::ABC::UI::MonoLocalizedTmp* BAB923EF0078CB23(::System::String* BE54335E11B56BBE)
		{
			return ((::ABC::UI::MonoLocalizedTmp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_BAB923EF0078CB23_OFFSET))(this, BE54335E11B56BBE);
		}

		::ABC::UI::MonoVideoPlayer* B2065AB95388714B(::System::String* BE54335E11B56BBE)
		{
			return ((::ABC::UI::MonoVideoPlayer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_B2065AB95388714B_OFFSET))(this, BE54335E11B56BBE);
		}

		::ABC::UI::MonoPrefabLoader* E66F0F89608F6E0A(::System::String* BE54335E11B56BBE)
		{
			return ((::ABC::UI::MonoPrefabLoader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_E66F0F89608F6E0A_OFFSET))(this, BE54335E11B56BBE);
		}

		::UnityEngine::Transform* F7B5CD02A9228DDC(::System::String* BE54335E11B56BBE)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_F7B5CD02A9228DDC_OFFSET))(this, BE54335E11B56BBE);
		}

		::UnityEngine::GameObject* B393C42C704BE87A(::System::String* BE54335E11B56BBE)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_B393C42C704BE87A_OFFSET))(this, BE54335E11B56BBE);
		}

		::TMPro::TextMeshProUGUI* F87AB4032597D67F(::System::String* BE54335E11B56BBE)
		{
			return ((::TMPro::TextMeshProUGUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_F87AB4032597D67F_OFFSET))(this, BE54335E11B56BBE);
		}

		::A44C343F1736A452* BC6434117D7AE41F()
		{
			return ((::A44C343F1736A452*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_BC6434117D7AE41F_OFFSET))(this);
		}
	};
}
