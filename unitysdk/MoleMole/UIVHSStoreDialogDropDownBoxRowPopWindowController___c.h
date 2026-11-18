#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PBGINNDMHAB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B24840)
#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B24880)
#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__INITSELECTTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x13B24890)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex = 43568;

	class UIVHSStoreDialogDropDownBoxRowPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C780);
		}
		static ::System::Func_2<::PBGINNDMHAB*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::PBGINNDMHAB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSelectType_b__9_0(::PBGINNDMHAB* template_)
		{
			return ((::System::Int32(*)(::PVOID, ::PBGINNDMHAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__INITSELECTTYPE_B__9_0_OFFSET))(this, template_);
		}
	};
}
