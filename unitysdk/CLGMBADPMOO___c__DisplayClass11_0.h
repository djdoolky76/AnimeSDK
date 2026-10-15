#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLGMBADPMOO;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace System { class Object; }

#define CLGMBADPMOO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD779F80)
#define CLGMBADPMOO___C__DISPLAYCLASS11_0___GETORCREATEUI3DWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xD77A0E0)

inline static constexpr unsigned int CLGMBADPMOO___c__DisplayClass11_0_TypeDefinitionIndex = 80509;

	class CLGMBADPMOO___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Sofa::BaseSofaUI3DWindow* window; // 0x10
		::CLGMBADPMOO* __4__this; // 0x18
		::System::Object* viewModel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGMBADPMOO___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __GetOrCreateUI3DWindow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGMBADPMOO___C__DISPLAYCLASS11_0___GETORCREATEUI3DWINDOW_B__0_OFFSET))(this);
		}

	};
