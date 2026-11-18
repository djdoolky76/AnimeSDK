#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define GLMBIOOIKHO_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x7221C0)
#define GLMBIOOIKHO_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6829C0)
#define GLMBIOOIKHO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7220F0)
#define GLMBIOOIKHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DE5940)
#define GLMBIOOIKHO__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEFB0)

inline static constexpr unsigned int GLMBIOOIKHO_TypeDefinitionIndex = 84405;

struct alignas(4) GLMBIOOIKHO
{
	static ::GLMBIOOIKHO* StaticGet_FGBLILBNEHG()
	{
		return (::GLMBIOOIKHO*)Il2CppClass::FromTypeDefinitionIndex(GLMBIOOIKHO_TypeDefinitionIndex)->GetStaticField(0x11A30);
	}
	::System::Int32 EIMPKMLHLKN; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::Animations::AnimatorControllerPlayable KMGHMCFIJIA; // 0x18

	::System::Void _ctor(::System::Int32 IFJECFEGAPP, ::UnityEngine::Animations::AnimatorControllerPlayable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + GLMBIOOIKHO__CTOR_OFFSET))(this, IFJECFEGAPP, HKOFGPMIFHB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMBIOOIKHO__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBIOOIKHO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBIOOIKHO_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBIOOIKHO_IBBLCAOMCKF_OFFSET))(this);
	}
};
