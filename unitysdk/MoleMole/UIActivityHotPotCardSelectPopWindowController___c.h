#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D0D50)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D0D90)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A0D0DB0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_2_OFFSET UNITYSDK_OFFSET(0x1A0D0DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex = 85991;

	class UIActivityHotPotCardSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38BF0);
		}
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38BF8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GachaAndShow_b__25_2(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_2_OFFSET))(this, x);
		}

		::System::UInt32 _GachaAndShow_b__25_0(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_0_OFFSET))(this, x);
		}
	};
}
