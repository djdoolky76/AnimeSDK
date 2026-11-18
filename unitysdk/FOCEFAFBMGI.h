#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FOCEFAFBMGI_DELETE_OFFSET UNITYSDK_OFFSET(0xBB70C40)
#define FOCEFAFBMGI_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0xBB70F10)
#define FOCEFAFBMGI__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB70E10)

inline static constexpr unsigned int FOCEFAFBMGI_TypeDefinitionIndex = 86611;

class FOCEFAFBMGI : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_KHHLFHFAIED()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(FOCEFAFBMGI_TypeDefinitionIndex)->GetStaticField(0x47F30);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_NBHIBFKFNFN()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(FOCEFAFBMGI_TypeDefinitionIndex)->GetStaticField(0x47F38);
	}
	static ::System::Int32* StaticGet_JIBOKGBJGEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FOCEFAFBMGI_TypeDefinitionIndex)->GetStaticField(0x10970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOCEFAFBMGI__CCTOR_OFFSET))();
	}

	static ::System::Void Delete(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOCEFAFBMGI_DELETE_OFFSET))(NJOAJLDJCCJ);
	}

	static ::UnityEngine::GameObject* OMPFLKCBFHF()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + FOCEFAFBMGI_OMPFLKCBFHF_OFFSET))();
	}
};
