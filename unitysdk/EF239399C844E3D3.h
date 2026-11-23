#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define EF239399C844E3D3_B3E23578EB43DE56_OFFSET UNITYSDK_OFFSET(0x2998D20)
#define EF239399C844E3D3_EBD24F0D5B129F91_OFFSET UNITYSDK_OFFSET(0x2998DA0)
#define EF239399C844E3D3_FADAC8872EDCF472_OFFSET UNITYSDK_OFFSET(0x2999090)
#define EF239399C844E3D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x29991D0)

inline static constexpr unsigned int EF239399C844E3D3_TypeDefinitionIndex = 15627;

class EF239399C844E3D3 : public ::System::Object
{
public:
	static ::System::String** StaticGet_E384BCC9C0E6012E()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EF239399C844E3D3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::AssetBundle** StaticGet_ED73F8778FB1ACE6()
	{
		return (::UnityEngine::AssetBundle**)Il2CppClass::FromTypeDefinitionIndex(EF239399C844E3D3_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::String* FADAC8872EDCF472(::System::String* B823BD107ED98484)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + EF239399C844E3D3_FADAC8872EDCF472_OFFSET))(B823BD107ED98484);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF239399C844E3D3__CCTOR_OFFSET))();
	}

	static ::System::Void B3E23578EB43DE56(::UnityEngine::GameObject* AD1247287D2D9217)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EF239399C844E3D3_B3E23578EB43DE56_OFFSET))(AD1247287D2D9217);
	}

	static ::UnityEngine::Object* EBD24F0D5B129F91(::System::String* EFF983A80A48BB2A, ::System::Type* A288CB28FC2A6DA3)
	{
		return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + EF239399C844E3D3_EBD24F0D5B129F91_OFFSET))(EFF983A80A48BB2A, A288CB28FC2A6DA3);
	}
};
