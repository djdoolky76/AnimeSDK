#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Comparison_1; }

#define EMLDNCLBCLB___C_KGDHPIMMJLJ_OFFSET UNITYSDK_OFFSET(0x11A9CD90)
#define EMLDNCLBCLB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A9CD40)
#define EMLDNCLBCLB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9CD80)

inline static constexpr unsigned int EMLDNCLBCLB___c_TypeDefinitionIndex = 48398;

class EMLDNCLBCLB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::Vector3>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(EMLDNCLBCLB___c_TypeDefinitionIndex)->GetStaticField(0x4F440);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMLDNCLBCLB___c_TypeDefinitionIndex)->GetStaticField(0x4F448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLDNCLBCLB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDNCLBCLB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KGDHPIMMJLJ(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMLDNCLBCLB___C_KGDHPIMMJLJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
