#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define FEPHBHBKMCC___C_MLIPCPBIOEH_OFFSET UNITYSDK_OFFSET(0x116AC420)
#define FEPHBHBKMCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116AC3D0)
#define FEPHBHBKMCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116AC410)

inline static constexpr unsigned int FEPHBHBKMCC___c_TypeDefinitionIndex = 86403;

class FEPHBHBKMCC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FEPHBHBKMCC___c_TypeDefinitionIndex)->GetStaticField(0x408D0);
	}
	static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FEPHBHBKMCC___c_TypeDefinitionIndex)->GetStaticField(0x408D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEPHBHBKMCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPHBHBKMCC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MLIPCPBIOEH(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FEPHBHBKMCC___C_MLIPCPBIOEH_OFFSET))(this, EHHHMFKHNAI);
	}
};
