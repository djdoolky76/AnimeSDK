#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"
#include "unitysdk/UnityEngine/Color.h"

class PPLBILJNDGF;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1193C140)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_NLGHCKOOMPL_OFFSET UNITYSDK_OFFSET(0x1193C6B0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1193C0F0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1193C6F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByColorProperty_TypeDefinitionIndex = 86470;

	class MonoMaterialEffectAttachByColorProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 OLBJHIFBDBO; // 0x28
		::System::Int32 curveIx; // 0x2C
		::PPLBILJNDGF* LEOKEOFNDLH; // 0x30
		::UnityEngine::Renderer* BGHMFOCAHKH; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* PPLDAAJLAJH; // 0x48
		::System::String* MatName; // 0x50
		::UnityEngine::Color KJKBCMKPBBA; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void NLGHCKOOMPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_NLGHCKOOMPL_OFFSET))(this);
		}

		::System::Void AMEGHCHMIOD(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_AMEGHCHMIOD_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
