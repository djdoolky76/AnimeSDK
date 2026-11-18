#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }

#define CLGLEEGCBFK___C_LPGEAOEJCEE_OFFSET UNITYSDK_OFFSET(0x19A18260)
#define CLGLEEGCBFK___C_OMMPAFHJCMD_OFFSET UNITYSDK_OFFSET(0x19A181F0)
#define CLGLEEGCBFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A181A0)
#define CLGLEEGCBFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A181E0)

inline static constexpr unsigned int CLGLEEGCBFK___c_TypeDefinitionIndex = 51388;

class CLGLEEGCBFK___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(CLGLEEGCBFK___c_TypeDefinitionIndex)->GetStaticField(0x37140);
	}
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(CLGLEEGCBFK___c_TypeDefinitionIndex)->GetStaticField(0x37148);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CLGLEEGCBFK___c_TypeDefinitionIndex)->GetStaticField(0x37150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLGLEEGCBFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OMMPAFHJCMD(::UnityEngine::Component* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK___C_OMMPAFHJCMD_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Boolean LPGEAOEJCEE(::UnityEngine::Component* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK___C_LPGEAOEJCEE_OFFSET))(this, NFFNEFLKPDG);
	}
};
