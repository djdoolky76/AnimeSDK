#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define FOKCLNLNMPD_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x787390)
#define FOKCLNLNMPD_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6829C0)
#define FOKCLNLNMPD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7872B0)
#define FOKCLNLNMPD_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x787470)
#define FOKCLNLNMPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C5240)
#define FOKCLNLNMPD__CTOR_OFFSET UNITYSDK_OFFSET(0x787290)

inline static constexpr unsigned int FOKCLNLNMPD_TypeDefinitionIndex = 52145;

struct alignas(4) FOKCLNLNMPD
{
	static ::FOKCLNLNMPD* StaticGet_FGBLILBNEHG()
	{
		return (::FOKCLNLNMPD*)Il2CppClass::FromTypeDefinitionIndex(FOKCLNLNMPD_TypeDefinitionIndex)->GetStaticField(0x10E40);
	}
	::System::Int32 EIMPKMLHLKN; // 0x10
	::System::Boolean OMHBDCHBGOG; // 0x14
	::System::Byte _padding0[0x3];
	::UnityEngine::Animations::AnimatorControllerPlayable KMGHMCFIJIA; // 0x18

	::System::Void _ctor(::System::Int32 IFJECFEGAPP, ::System::Boolean PDFEDOCLDHG, ::UnityEngine::Animations::AnimatorControllerPlayable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + FOKCLNLNMPD__CTOR_OFFSET))(this, IFJECFEGAPP, PDFEDOCLDHG, HKOFGPMIFHB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOKCLNLNMPD__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKCLNLNMPD_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKCLNLNMPD_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOKCLNLNMPD_IBBLCAOMCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OMPFLKCBFHF(::System::Boolean JFLDAALEMGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOKCLNLNMPD_OMPFLKCBFHF_OFFSET))(this, JFLDAALEMGB);
	}
};
