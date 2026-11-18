#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKHCGCJIMHC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_MONOSURFSCORE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18106560)
#define MOLEMOLE_MONOSURFSCORE_KBAHBJIKMBL_OFFSET UNITYSDK_OFFSET(0x18106A50)
#define MOLEMOLE_MONOSURFSCORE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x18106660)
#define MOLEMOLE_MONOSURFSCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18106E80)
#define MOLEMOLE_MONOSURFSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x18106E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfScore_TypeDefinitionIndex = 91711;

	class MonoSurfScore : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_NKMGMKHIOOL()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSurfScore_TypeDefinitionIndex)->GetStaticField(0x52120);
		}
		// static const ::System::String* HODNFDPLNJK; // 0x0
		// static const ::System::String* KGCEFAHJAHO; // 0x0
		// static const ::System::String* IALPGOLJHMJ; // 0x0
		::UnityEngine::Animation* self; // 0x18
		::UnityEngine::UI::TextItalicAdobeStyle* minute; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* second; // 0x28
		::UnityEngine::UI::TextItalicAdobeStyle* nano; // 0x30
		::UnityEngine::RectTransform* progressBar; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* material; // 0x40
		::System::Int32 IJOFJILALNC; // 0x48
		::JKHCGCJIMHC GAIBAIAIKAJ; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_INITIALIZE_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_UPDATETIME_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void KBAHBJIKMBL(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_KBAHBJIKMBL_OFFSET))(this, PMGFIHJAJHL);
		}
	};
}
