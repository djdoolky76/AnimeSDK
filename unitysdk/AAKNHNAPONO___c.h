#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define AAKNHNAPONO___C_FAOAGNPOEFF_OFFSET UNITYSDK_OFFSET(0x12CCFB90)
#define AAKNHNAPONO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CCFB40)
#define AAKNHNAPONO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CCFB80)

inline static constexpr unsigned int AAKNHNAPONO___c_TypeDefinitionIndex = 42754;

class AAKNHNAPONO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AAKNHNAPONO___c_TypeDefinitionIndex)->GetStaticField(0x42C60);
	}
	static ::System::Action_1<::UnityEngine::RectTransform*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(AAKNHNAPONO___c_TypeDefinitionIndex)->GetStaticField(0x42C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKNHNAPONO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNHNAPONO___C__CTOR_OFFSET))(this);
	}

	::System::Void FAOAGNPOEFF(::UnityEngine::RectTransform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AAKNHNAPONO___C_FAOAGNPOEFF_OFFSET))(this, LNEEMAGIHLB);
	}
};
