#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define GEJBEABEKPG_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x682A20)
#define GEJBEABEKPG_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6829C0)
#define GEJBEABEKPG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6828D0)
#define GEJBEABEKPG_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x682B00)
#define GEJBEABEKPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x116EB650)
#define GEJBEABEKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x6828A0)

inline static constexpr unsigned int GEJBEABEKPG_TypeDefinitionIndex = 49686;

struct alignas(4) GEJBEABEKPG
{
	static ::GEJBEABEKPG* StaticGet_FGBLILBNEHG()
	{
		return (::GEJBEABEKPG*)Il2CppClass::FromTypeDefinitionIndex(GEJBEABEKPG_TypeDefinitionIndex)->GetStaticField(0xEDF0);
	}
	::System::Int32 EIMPKMLHLKN; // 0x10
	::System::Single OMHBDCHBGOG; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable KMGHMCFIJIA; // 0x18

	::System::Void _ctor(::System::Int32 IFJECFEGAPP, ::System::Single PDFEDOCLDHG, ::UnityEngine::Animations::AnimatorControllerPlayable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + GEJBEABEKPG__CTOR_OFFSET))(this, IFJECFEGAPP, PDFEDOCLDHG, HKOFGPMIFHB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEJBEABEKPG__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJBEABEKPG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJBEABEKPG_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEJBEABEKPG_IBBLCAOMCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single OMPFLKCBFHF(::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEJBEABEKPG_OMPFLKCBFHF_OFFSET))(this, JFLDAALEMGB);
	}
};
