#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define E951F899E182737D_B74B17F1EAC11B7A_OFFSET UNITYSDK_OFFSET(0x247DFC0)
#define E951F899E182737D_EB47178851B8DD1A_OFFSET UNITYSDK_OFFSET(0x247DDC0)
#define E951F899E182737D_F6ECA18F07899826_OFFSET UNITYSDK_OFFSET(0x247E0B0)
#define E951F899E182737D_F709D8FAAB5732EF_OFFSET UNITYSDK_OFFSET(0x247E6E0)
#define E951F899E182737D__CCTOR_OFFSET UNITYSDK_OFFSET(0x247E760)
#define E951F899E182737D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E951F899E182737D_TypeDefinitionIndex = 4567;

class E951F899E182737D : public ::System::Object
{
public:
	static ::UnityEngine::SceneManagement::Scene* StaticGet_A7C4C2F236689B59()
	{
		return (::UnityEngine::SceneManagement::Scene*)Il2CppClass::FromTypeDefinitionIndex(E951F899E182737D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_A61547FDC6F2A64B()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E951F899E182737D_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_BC7E7ABC4E00DD39()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(E951F899E182737D_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::String* F709D8FAAB5732EF(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + E951F899E182737D_F709D8FAAB5732EF_OFFSET))(EFF983A80A48BB2A);
	}

	static ::UnityEngine::GameObject* EB47178851B8DD1A(::System::String* A14C7967A8F5B3FE, ::System::String* EFF983A80A48BB2A)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E951F899E182737D_EB47178851B8DD1A_OFFSET))(A14C7967A8F5B3FE, EFF983A80A48BB2A);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E951F899E182737D__CCTOR_OFFSET))();
	}

	static ::UnityEngine::GameObject* F6ECA18F07899826(::System::String* F79B4D487F303AB2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + E951F899E182737D_F6ECA18F07899826_OFFSET))(F79B4D487F303AB2);
	}

	static ::UnityEngine::GameObject* B74B17F1EAC11B7A(::System::String* F79B4D487F303AB2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + E951F899E182737D_B74B17F1EAC11B7A_OFFSET))(F79B4D487F303AB2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E951F899E182737D__CTOR_OFFSET))(this);
	}
};
