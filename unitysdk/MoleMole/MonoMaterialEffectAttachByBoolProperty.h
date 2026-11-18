#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class PPLBILJNDGF;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x139F7260)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_NLGHCKOOMPL_OFFSET UNITYSDK_OFFSET(0x139F7800)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x139F7210)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x139F7840)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByBoolProperty_TypeDefinitionIndex = 65575;

	class MonoMaterialEffectAttachByBoolProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		// static const ::System::Single CHHMJLOMFEP; // 0x0
		// static const ::System::Single KJFBHLAHBCF; // 0x0
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 OLBJHIFBDBO; // 0x28
		::System::Int32 curveIx; // 0x2C
		::PPLBILJNDGF* LEOKEOFNDLH; // 0x30
		::UnityEngine::Renderer* BGHMFOCAHKH; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::System::Byte _padding0[0x4];
		::System::String* Keyword; // 0x48
		::UnityEngine::Material* PPLDAAJLAJH; // 0x50
		::System::String* MatName; // 0x58
		::System::Boolean KJKBCMKPBBA; // 0x60
		::System::Boolean OMOBAFIBBMJ; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void NLGHCKOOMPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_NLGHCKOOMPL_OFFSET))(this);
		}

		::System::Void AMEGHCHMIOD(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_AMEGHCHMIOD_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
