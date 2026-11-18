#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define IJJDINMFOEI_AIEOINEIMGB_OFFSET UNITYSDK_OFFSET(0x1ACB6C90)
#define IJJDINMFOEI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1ACB6CD0)
#define IJJDINMFOEI_DLBELENAKJK_OFFSET UNITYSDK_OFFSET(0x1ACB6DA0)
#define IJJDINMFOEI_HOCLGKGFBKC_OFFSET UNITYSDK_OFFSET(0x1ACB6BD0)
#define IJJDINMFOEI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1ACB6C30)
#define IJJDINMFOEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACB6BA0)
#define IJJDINMFOEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB6B90)

inline static constexpr unsigned int IJJDINMFOEI_TypeDefinitionIndex = 59082;

class IJJDINMFOEI : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve** StaticGet_OMFCJBLNEAG()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(IJJDINMFOEI_TypeDefinitionIndex)->GetStaticField(0x3B3C0);
	}
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::System::Single PPEMHLNCKJD; // 0x18
	::System::Boolean IHFCMKMMMPP; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single EEODALLOKMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJDINMFOEI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJJDINMFOEI__CCTOR_OFFSET))();
	}

	::System::Boolean HOCLGKGFBKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJDINMFOEI_HOCLGKGFBKC_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJDINMFOEI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean AIEOINEIMGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJDINMFOEI_AIEOINEIMGB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* JCKAENDEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IJJDINMFOEI_BBOMJDBNHIC_OFFSET))(this, MDPPNMIPDMP, JCKAENDEFCH);
	}

	::System::Boolean DLBELENAKJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJDINMFOEI_DLBELENAKJK_OFFSET))(this);
	}
};
