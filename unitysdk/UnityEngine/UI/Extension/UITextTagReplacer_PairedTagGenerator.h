#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDLKFAMLAC_PAANKEAOJEI.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1C2E9E00)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E9EA0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_PairedTagGenerator_TypeDefinitionIndex = 45817;

	class UITextTagReplacer_PairedTagGenerator : public ::GJDLKFAMLAC_PAANKEAOJEI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::UInt16 leftToken, ::System::UInt16 rightToken, ::System::String* leftPrefix, ::System::Char wildcardEnd, ::System::String* rightTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::String*, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR_ADD_OFFSET))(this, leftToken, rightToken, leftPrefix, wildcardEnd, rightTag);
		}
	};
}
