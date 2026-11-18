#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHJDJLLPFEA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D25C20)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D25C60)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x15D25C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex = 81878;

	class UIOverlordFeastPromotionPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FHJDJLLPFEA*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::FHJDJLLPFEA*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x422C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x422C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshView_b__9_0(::FHJDJLLPFEA* t)
		{
			return ((::System::String*(*)(::PVOID, ::FHJDJLLPFEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, t);
		}
	};
}
