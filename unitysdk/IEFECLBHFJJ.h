#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGOJCCPHHAC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define IEFECLBHFJJ_ABJIJHDOMHN_OFFSET UNITYSDK_OFFSET(0x13A95FD0)
#define IEFECLBHFJJ_AEGDLGKFAPD_OFFSET UNITYSDK_OFFSET(0x13A95EA0)
#define IEFECLBHFJJ_AMMLDAKPNJK_OFFSET UNITYSDK_OFFSET(0x140DBB20)
#define IEFECLBHFJJ_CLLLJCFMBMI_OFFSET UNITYSDK_OFFSET(0x140DBC50)
#define IEFECLBHFJJ_HOJNJPLBIAM_OFFSET UNITYSDK_OFFSET(0x140DBEB0)
#define IEFECLBHFJJ_JBIIFOMPEJJ_OFFSET UNITYSDK_OFFSET(0x13A96100)
#define IEFECLBHFJJ_NAHCJCEGMHK_OFFSET UNITYSDK_OFFSET(0x140DBAA0)
#define IEFECLBHFJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x140DB5F0)

inline static constexpr unsigned int IEFECLBHFJJ_TypeDefinitionIndex = 59994;

class IEFECLBHFJJ : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_INKLFPCGLNN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IEFECLBHFJJ_TypeDefinitionIndex)->GetStaticField(0xD550);
	}
	static ::System::Int32* StaticGet_LFMOFOJLMFA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IEFECLBHFJJ_TypeDefinitionIndex)->GetStaticField(0xD554);
	}
	static ::System::Int32* StaticGet_JLOFONPNCDJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IEFECLBHFJJ_TypeDefinitionIndex)->GetStaticField(0xD558);
	}
	// static const ::System::Single HALPALAHJHI; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFECLBHFJJ__CCTOR_OFFSET))();
	}

	static ::IGOJCCPHHAC NAHCJCEGMHK(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::IGOJCCPHHAC(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_NAHCJCEGMHK_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::System::Int32 AMMLDAKPNJK(::IGOJCCPHHAC OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_AMMLDAKPNJK_OFFSET))(OBNIAHNMHPF);
	}

	static ::Foundation::Function::FixedPolynomial CLLLJCFMBMI(::System::Single DIEDFPOBONN, ::System::Single LOFBEAGJKNF)
	{
		return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_CLLLJCFMBMI_OFFSET))(DIEDFPOBONN, LOFBEAGJKNF);
	}

	static ::System::Single HOJNJPLBIAM(::UnityEngine::Keyframe& GBGCFJMGALM)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_HOJNJPLBIAM_OFFSET))(GBGCFJMGALM);
	}

	static ::System::Int32 AEGDLGKFAPD(::IGOJCCPHHAC OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_AEGDLGKFAPD_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Int32 ABJIJHDOMHN(::IGOJCCPHHAC OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_ABJIJHDOMHN_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Single JBIIFOMPEJJ(::UnityEngine::Keyframe& GBGCFJMGALM)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IEFECLBHFJJ_JBIIFOMPEJJ_OFFSET))(GBGCFJMGALM);
	}
};
