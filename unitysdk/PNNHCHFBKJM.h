#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define PNNHCHFBKJM_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x848F10)
#define PNNHCHFBKJM_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6829C0)
#define PNNHCHFBKJM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x848E30)
#define PNNHCHFBKJM_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x848FF0)
#define PNNHCHFBKJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6A8E30)
#define PNNHCHFBKJM__CTOR_OFFSET UNITYSDK_OFFSET(0x848E10)

inline static constexpr unsigned int PNNHCHFBKJM_TypeDefinitionIndex = 63263;

struct alignas(4) PNNHCHFBKJM
{
	static ::PNNHCHFBKJM* StaticGet_FGBLILBNEHG()
	{
		return (::PNNHCHFBKJM*)Il2CppClass::FromTypeDefinitionIndex(PNNHCHFBKJM_TypeDefinitionIndex)->GetStaticField(0x10E60);
	}
	::System::Int32 EIMPKMLHLKN; // 0x10
	::System::Int32 OMHBDCHBGOG; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable KMGHMCFIJIA; // 0x18

	::System::Void _ctor(::System::Int32 IFJECFEGAPP, ::System::Int32 PDFEDOCLDHG, ::UnityEngine::Animations::AnimatorControllerPlayable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + PNNHCHFBKJM__CTOR_OFFSET))(this, IFJECFEGAPP, PDFEDOCLDHG, HKOFGPMIFHB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNHCHFBKJM__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNHCHFBKJM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNHCHFBKJM_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNNHCHFBKJM_IBBLCAOMCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OMPFLKCBFHF(::System::Int32 JFLDAALEMGB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNNHCHFBKJM_OMPFLKCBFHF_OFFSET))(this, JFLDAALEMGB);
	}
};
