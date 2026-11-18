#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define MB3_TEXTUREBAKER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1DD900)
#define MB3_TEXTUREBAKER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1DD940)
#define MB3_TEXTUREBAKER___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__101_0_OFFSET UNITYSDK_OFFSET(0x1F1DD950)

inline static constexpr unsigned int MB3_TextureBaker___c_TypeDefinitionIndex = 96172;

class MB3_TextureBaker___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureBaker___c_TypeDefinitionIndex)->GetStaticField(0x52D50);
	}
	static ::System::Predicate_1<::UnityEngine::GameObject*>** StaticGet___9__101_0()
	{
		return (::System::Predicate_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureBaker___c_TypeDefinitionIndex)->GetStaticField(0x52D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _PurgeNullsFromObjectsToCombine_b__101_0(::UnityEngine::GameObject* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__101_0_OFFSET))(this, obj);
	}
};
