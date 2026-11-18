#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE544A70)
#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE544AB0)
#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__INITBYACTIVEEFFECTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xE544AC0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemDebuffInfoDialogContext___c_TypeDefinitionIndex = 61031;

	class ZenkovGemDebuffInfoDialogContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ZenkovGemDebuffInfoDialogContext___c_TypeDefinitionIndex)->GetStaticField(0x45490);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovGemDebuffInfoDialogContext___c_TypeDefinitionIndex)->GetStaticField(0x45498);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitByActiveEffects_b__4_0(::MoleMole::ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry a, ::MoleMole::ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry, ::MoleMole::ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT___C__INITBYACTIVEEFFECTS_B__4_0_OFFSET))(this, a, b);
		}
	};
}
