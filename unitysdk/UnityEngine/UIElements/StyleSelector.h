#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B659F3243E27471C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PREVIOUSRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x2EEE5A0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PARTS_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PREVIOUSRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x42419B0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x4241B00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector_TypeDefinitionIndex = 13059;

	class StyleSelector : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>* m_Parts; // 0x10
		::A418C49FA6A8C1F7::B659F3243E27471C m_PreviousRelationship; // 0x18
		::System::Int32 pseudoStateMask; // 0x1C
		::System::Int32 negatedPseudoStateMask; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET))(this);
		}

		::System::Void set_previousRelationship(::A418C49FA6A8C1F7::B659F3243E27471C E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::A418C49FA6A8C1F7::B659F3243E27471C))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PREVIOUSRELATIONSHIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_parts(::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PARTS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>* get_parts()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET))(this);
		}

		::A418C49FA6A8C1F7::B659F3243E27471C get_previousRelationship()
		{
			return ((::A418C49FA6A8C1F7::B659F3243E27471C(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PREVIOUSRELATIONSHIP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR__CTOR_OFFSET))(this);
		}
	};
}
