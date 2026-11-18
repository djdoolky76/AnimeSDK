#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class PPLBILJNDGF;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x12B72460)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_NLGHCKOOMPL_OFFSET UNITYSDK_OFFSET(0x12B729B0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x12B72410)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B729F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByFloatProperty_TypeDefinitionIndex = 74351;

	class MonoMaterialEffectAttachByFloatProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
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
		::System::Single KJKBCMKPBBA; // 0x58
		::System::Single OMOBAFIBBMJ; // 0x5C
		::System::Single Factor; // 0x60
		::System::Boolean UseClamp; // 0x64
		::System::Byte _padding1[0x3];
		::System::Single Min; // 0x68
		::System::Single Max; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void NLGHCKOOMPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_NLGHCKOOMPL_OFFSET))(this);
		}

		::System::Void AMEGHCHMIOD(::PPLBILJNDGF* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::PPLBILJNDGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_AMEGHCHMIOD_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
