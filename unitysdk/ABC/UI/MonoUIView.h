#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class A44C343F1736A452;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Object; }
namespace System { class String; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define ABC_UI_MONOUIVIEW_A6560E3A3FE3582B_OFFSET UNITYSDK_OFFSET(0x21DD3F0)
#define ABC_UI_MONOUIVIEW_B393C42C704BE87A_OFFSET UNITYSDK_OFFSET(0x21DD630)
#define ABC_UI_MONOUIVIEW_B7BFE92B2F0DF66D_OFFSET UNITYSDK_OFFSET(0x21DD540)
#define ABC_UI_MONOUIVIEW_BAB923EF0078CB23_OFFSET UNITYSDK_OFFSET(0x21DD8B0)
#define ABC_UI_MONOUIVIEW_BC6434117D7AE41F_OFFSET UNITYSDK_OFFSET(0x21DD5E0)
#define ABC_UI_MONOUIVIEW_BDC6F51A92FA5296_OFFSET UNITYSDK_OFFSET(0x21DD6D0)
#define ABC_UI_MONOUIVIEW_E036796F51C57309_OFFSET UNITYSDK_OFFSET(0x21DD950)
#define ABC_UI_MONOUIVIEW_E66F0F89608F6E0A_OFFSET UNITYSDK_OFFSET(0x21DD770)
#define ABC_UI_MONOUIVIEW_F87AB4032597D67F_OFFSET UNITYSDK_OFFSET(0x21DD810)
#define ABC_UI_MONOUIVIEW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x21DD3A0)
#define ABC_UI_MONOUIVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIView_TypeDefinitionIndex = 8923;

	class MonoUIView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::A44C343F1736A452* AED407AF89D76B2A; // 0x20
		::System::Boolean ED599BD7C14B9F83; // 0x28
		::System::Byte _padding0[0x7];
		::System::Object* _textMeshProItems; // 0x30
		::System::Byte _padding1[0x8];
		::System::Object* _localizedTextItems; // 0x40
		::System::Byte _padding2[0x8];
		::System::Object* _buttonItems; // 0x50
		::System::Byte _padding3[0x8];
		::System::Object* _imageItems; // 0x60
		::System::Byte _padding4[0x8];
		::System::Object* _prefabLoaderItems; // 0x70
		::System::Byte _padding5[0x8];
		::System::Object* _gameObjectItems; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW__CTOR_OFFSET))(this);
		}

		::TMPro::TextMeshProUGUI* F87AB4032597D67F(::System::String* BA13F45D2668EF27)
		{
			return ((::TMPro::TextMeshProUGUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_F87AB4032597D67F_OFFSET))(this, BA13F45D2668EF27);
		}

		::ABC::UI::MonoButton* B7BFE92B2F0DF66D(::System::String* BA13F45D2668EF27)
		{
			return ((::ABC::UI::MonoButton*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_B7BFE92B2F0DF66D_OFFSET))(this, BA13F45D2668EF27);
		}

		::System::Void E036796F51C57309()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_E036796F51C57309_OFFSET))(this);
		}

		::ABC::UI::MonoLocalizedTmp* BAB923EF0078CB23(::System::String* BA13F45D2668EF27)
		{
			return ((::ABC::UI::MonoLocalizedTmp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_BAB923EF0078CB23_OFFSET))(this, BA13F45D2668EF27);
		}

		::UnityEngine::UI::Image* BDC6F51A92FA5296(::System::String* BA13F45D2668EF27)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_BDC6F51A92FA5296_OFFSET))(this, BA13F45D2668EF27);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::ABC::UI::MonoPrefabLoader* E66F0F89608F6E0A(::System::String* BA13F45D2668EF27)
		{
			return ((::ABC::UI::MonoPrefabLoader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_E66F0F89608F6E0A_OFFSET))(this, BA13F45D2668EF27);
		}

		::UnityEngine::GameObject* B393C42C704BE87A(::System::String* BA13F45D2668EF27)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_B393C42C704BE87A_OFFSET))(this, BA13F45D2668EF27);
		}

		::A44C343F1736A452* BC6434117D7AE41F()
		{
			return ((::A44C343F1736A452*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_BC6434117D7AE41F_OFFSET))(this);
		}

		::System::Void A6560E3A3FE3582B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_A6560E3A3FE3582B_OFFSET))(this);
		}
	};
}
