#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TextAsset; }
template <typename T> class FCECB52A00C1344E;

#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x42109F0)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERSLOOKUP_OFFSET UNITYSDK_OFFSET(0x4211180)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERSLOOKUP_OFFSET UNITYSDK_OFFSET(0x4211240)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1925A40)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_1_OFFSET UNITYSDK_OFFSET(0x4210AC0)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x4210D40)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES__CCTOR_OFFSET UNITYSDK_OFFSET(0x4211110)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int UnicodeLineBreakingRules_TypeDefinitionIndex = 18754;

	class UnicodeLineBreakingRules : public ::System::Object
	{
	public:
		static ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules** StaticGet_s_Instance()
		{
			return (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules**)Il2CppClass::FromTypeDefinitionIndex(UnicodeLineBreakingRules_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::FCECB52A00C1344E<::System::UInt32>** StaticGet_s_LeadingCharactersLookup()
		{
			return (::FCECB52A00C1344E<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UnicodeLineBreakingRules_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::FCECB52A00C1344E<::System::UInt32>** StaticGet_s_FollowingCharactersLookup()
		{
			return (::FCECB52A00C1344E<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UnicodeLineBreakingRules_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::TextAsset* m_UnicodeLineBreakingRules; // 0x10
		::UnityEngine::TextAsset* m_LeadingCharacters; // 0x18
		::UnityEngine::TextAsset* m_FollowingCharacters; // 0x20
		::System::Boolean m_UseModernHangulLineBreakingRules; // 0x28

		static ::System::Void LoadLineBreakingRules()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_OFFSET))();
		}

		::UnityEngine::TextAsset* get_leadingCharacters()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERS_OFFSET))(this);
		}

		::UnityEngine::TextAsset* get_followingCharacters()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERS_OFFSET))(this);
		}

		::FCECB52A00C1344E<::System::UInt32>* get_leadingCharactersLookup()
		{
			return ((::FCECB52A00C1344E<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERSLOOKUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES__CTOR_OFFSET))(this);
		}

		::System::Boolean get_useModernHangulLineBreakingRules()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(this);
		}

		static ::System::Void LoadLineBreakingRules_1(::UnityEngine::TextAsset* FB4E065B2BA1EADB, ::UnityEngine::TextAsset* FED959439938FE58)
		{
			return ((::System::Void(*)(::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_1_OFFSET))(FB4E065B2BA1EADB, FED959439938FE58);
		}

		static ::FCECB52A00C1344E<::System::UInt32>* GetCharacters(::UnityEngine::TextAsset* EFD09F0992A4635C)
		{
			return ((::FCECB52A00C1344E<::System::UInt32>*(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GETCHARACTERS_OFFSET))(EFD09F0992A4635C);
		}

		::FCECB52A00C1344E<::System::UInt32>* get_followingCharactersLookup()
		{
			return ((::FCECB52A00C1344E<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERSLOOKUP_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES__CCTOR_OFFSET))();
		}
	};
}
