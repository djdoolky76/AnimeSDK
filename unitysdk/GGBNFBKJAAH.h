#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GGBNFBKJAAH_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x7C6520)
#define GGBNFBKJAAH_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x7C64C0)
#define GGBNFBKJAAH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7C62E0)
#define GGBNFBKJAAH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x7C6710)
#define GGBNFBKJAAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x18141250)
#define GGBNFBKJAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x7C6290)

inline static constexpr unsigned int GGBNFBKJAAH_TypeDefinitionIndex = 40735;

struct alignas(4) GGBNFBKJAAH
{
	static ::GGBNFBKJAAH* StaticGet_FGBLILBNEHG()
	{
		return (::GGBNFBKJAAH*)Il2CppClass::FromTypeDefinitionIndex(GGBNFBKJAAH_TypeDefinitionIndex)->GetStaticField(0xD900);
	}
	::System::Int32 CCANGCKMLLF; // 0x10
	::System::Int32 GIAPBEJMJNI; // 0x14
	::System::Int32 LEOMAHMJEOJ; // 0x18
	::UnityEngine::Vector3 OMHBDCHBGOG; // 0x1C
	::UnityEngine::Animations::AnimatorControllerPlayable KMGHMCFIJIA; // 0x28

	::System::Void _ctor(::System::Int32 AIDPLCHDGPD, ::System::Int32 HPJLDOJLIDO, ::System::Int32 JOPHECEMOJF, ::UnityEngine::Vector3 PDFEDOCLDHG, ::UnityEngine::Animations::AnimatorControllerPlayable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + GGBNFBKJAAH__CTOR_OFFSET))(this, AIDPLCHDGPD, HPJLDOJLIDO, JOPHECEMOJF, PDFEDOCLDHG, HKOFGPMIFHB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGBNFBKJAAH__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBNFBKJAAH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBNFBKJAAH_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGBNFBKJAAH_IBBLCAOMCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 OMPFLKCBFHF(::UnityEngine::Vector3 JFLDAALEMGB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGBNFBKJAAH_OMPFLKCBFHF_OFFSET))(this, JFLDAALEMGB);
	}
};
