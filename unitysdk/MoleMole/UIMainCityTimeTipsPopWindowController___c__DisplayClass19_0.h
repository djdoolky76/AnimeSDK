#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHCPLALCEDG;
class EFGGKIFLFDJ;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186C94B0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET UNITYSDK_OFFSET(0x186C94C0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET UNITYSDK_OFFSET(0x186C9600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 57512;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* content; // 0x10
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x18
		::CHCPLALCEDG* cfgMgr; // 0x20
		::System::Int32 cnt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshDesc_b__1(::EFGGKIFLFDJ* a, ::EFGGKIFLFDJ* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EFGGKIFLFDJ*, ::EFGGKIFLFDJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshDesc_g__AddTextRow_0(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET))(this, key);
		}
	};
}
