#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GJDLKFAMLAC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITextTagReplacer_MatchReplacer; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDPAIREDTAGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C6CB230)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDSINGLETAGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C6CB0F0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_REPLACE_OFFSET UNITYSDK_OFFSET(0x1C6CA9D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_TypeDefinitionIndex = 45814;

	class UITextTagReplacer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__matchBuffer()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::String* Replace(::System::String* input, ::GJDLKFAMLAC* matchers, ::UnityEngine::UI::Extension::UITextTagReplacer_MatchReplacer* replacer)
		{
			return ((::System::String*(*)(::System::String*, ::GJDLKFAMLAC*, ::UnityEngine::UI::Extension::UITextTagReplacer_MatchReplacer*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_REPLACE_OFFSET))(input, matchers, replacer);
		}

		static ::GJDLKFAMLAC* BuildSingleTagMatcher(::System::UInt16 tokenId, ::System::String* prefix, ::System::Char wildcardEnd)
		{
			return ((::GJDLKFAMLAC*(*)(::System::UInt16, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDSINGLETAGMATCHER_OFFSET))(tokenId, prefix, wildcardEnd);
		}

		static ::GJDLKFAMLAC* BuildPairedTagMatcher(::System::UInt16 leftToken, ::System::UInt16 rightToken, ::System::String* leftPrefix, ::System::Char wildcardEnd, ::System::String* rightTag)
		{
			return ((::GJDLKFAMLAC*(*)(::System::UInt16, ::System::UInt16, ::System::String*, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDPAIREDTAGMATCHER_OFFSET))(leftToken, rightToken, leftPrefix, wildcardEnd, rightTag);
		}
	};
}
