#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_BC8D9FB024C690B9_AC8554944F521A8F_OFFSET UNITYSDK_OFFSET(0x4188410)
#define UNITYENGINE_BC8D9FB024C690B9_E533AF4E283266AC_OFFSET UNITYSDK_OFFSET(0x4188560)
#define UNITYENGINE_BC8D9FB024C690B9_E76D48DEFAAB55CB_OFFSET UNITYSDK_OFFSET(0x4188400)
#define UNITYENGINE_BC8D9FB024C690B9_EC15EFFB543D7B25_OFFSET UNITYSDK_OFFSET(0x41884B0)
#define UNITYENGINE_BC8D9FB024C690B9_F3D985F3F361FE85_OFFSET UNITYSDK_OFFSET(0x4188420)
#define UNITYENGINE_BC8D9FB024C690B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x4188440)
#define UNITYENGINE_BC8D9FB024C690B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int BC8D9FB024C690B9_TypeDefinitionIndex = 17781;

	class BC8D9FB024C690B9 : public ::System::Object
	{
	public:
		static ::UnityEngine::BC8D9FB024C690B9** StaticGet_EDC70DA8AFACD2E4()
		{
			return (::UnityEngine::BC8D9FB024C690B9**)Il2CppClass::FromTypeDefinitionIndex(BC8D9FB024C690B9_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::BC8D9FB024C690B9** StaticGet_E9EE594083523C52()
		{
			return (::UnityEngine::BC8D9FB024C690B9**)Il2CppClass::FromTypeDefinitionIndex(BC8D9FB024C690B9_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::UnityEngine::Object* F3D985F3F361FE85(::System::String* EFF983A80A48BB2A, ::System::Type* A8C3D92FA7B1AF39)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9_F3D985F3F361FE85_OFFSET))(this, EFF983A80A48BB2A, A8C3D92FA7B1AF39);
		}

		static ::UnityEngine::BC8D9FB024C690B9* EC15EFFB543D7B25()
		{
			return ((::UnityEngine::BC8D9FB024C690B9*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9_EC15EFFB543D7B25_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Object*>* E76D48DEFAAB55CB(::System::Type* A8C3D92FA7B1AF39)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9_E76D48DEFAAB55CB_OFFSET))(this, A8C3D92FA7B1AF39);
		}

		::UnityEngine::Shader* AC8554944F521A8F(::System::String* F79B4D487F303AB2)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9_AC8554944F521A8F_OFFSET))(this, F79B4D487F303AB2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::BC8D9FB024C690B9* E533AF4E283266AC()
		{
			return ((::UnityEngine::BC8D9FB024C690B9*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9_E533AF4E283266AC_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BC8D9FB024C690B9__CCTOR_OFFSET))();
		}
	};
}
