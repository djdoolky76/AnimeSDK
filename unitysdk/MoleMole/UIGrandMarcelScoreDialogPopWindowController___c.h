#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IJPOMJDCMBC;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F1A3C0)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F1A400)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET UNITYSDK_OFFSET(0x18F1A410)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex = 85472;

	class UIGrandMarcelScoreDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489B0);
		}
		static ::System::Comparison_1<::IJPOMJDCMBC*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::IJPOMJDCMBC*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__16_0(::IJPOMJDCMBC* a, ::IJPOMJDCMBC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::IJPOMJDCMBC*, ::IJPOMJDCMBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET))(this, a, b);
		}
	};
}
