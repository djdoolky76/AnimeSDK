#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDLKFAMLAC_PAANKEAOJEI.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_SINGLETAGGENERATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1EBC7660)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_SINGLETAGGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC7700)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_SingleTagGenerator_TypeDefinitionIndex = 45815;

	class UITextTagReplacer_SingleTagGenerator : public ::GJDLKFAMLAC_PAANKEAOJEI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_SINGLETAGGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::UInt16 tokenId, ::System::String* prefix, ::System::Char wildcardEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_SINGLETAGGENERATOR_ADD_OFFSET))(this, tokenId, prefix, wildcardEnd);
		}
	};
}
