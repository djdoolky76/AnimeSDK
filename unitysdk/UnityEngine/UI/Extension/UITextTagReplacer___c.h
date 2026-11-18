#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GJDLKFAMLAC_KOBHCOPIIBJ;

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1CDCA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1CDCE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__REPLACE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F1CDCF0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer___c_TypeDefinitionIndex = 45819;

	class UITextTagReplacer___c : public ::System::Object
	{
	public:
		static ::GJDLKFAMLAC_KOBHCOPIIBJ** StaticGet___9__3_0()
		{
			return (::GJDLKFAMLAC_KOBHCOPIIBJ**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer___c_TypeDefinitionIndex)->GetStaticField(0x42BE0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer___c_TypeDefinitionIndex)->GetStaticField(0x42BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Replace_b__3_0(::System::UInt16 token, ::System::UInt16 start, ::System::UInt16 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__REPLACE_B__3_0_OFFSET))(this, token, start, end);
		}
	};
}
