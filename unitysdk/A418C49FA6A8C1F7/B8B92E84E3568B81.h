#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class String; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define A418C49FA6A8C1F7_B8B92E84E3568B81_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x4344CE0)
#define A418C49FA6A8C1F7_B8B92E84E3568B81__CTOR_OFFSET UNITYSDK_OFFSET(0x3212AC0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int B8B92E84E3568B81_TypeDefinitionIndex = 13575;

	struct alignas(8) B8B92E84E3568B81
	{
		::System::String* E67211D321B1E764; // 0x10
		::UnityEngine::UIElements::StyleSheet* A09E23F4346ABE8E; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>* E828837D1932022D; // 0x20

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_B8B92E84E3568B81_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* F79B4D487F303AB2, ::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48, ::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>* A42ACAFFFCA3E117)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_B8B92E84E3568B81__CTOR_OFFSET))(this, F79B4D487F303AB2, A3240E0B408E3C48, A42ACAFFFCA3E117);
		}
	};
}
