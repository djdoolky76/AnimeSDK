#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Editor { class ShaderPassVarientCollection; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class ShaderVariantCollection; }

#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_AOMFLPOJANN_OFFSET UNITYSDK_OFFSET(0xE4AB980)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_BCOFNKCHOHG_OFFSET UNITYSDK_OFFSET(0xE4ACC60)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_BLPGBAIOKDN_OFFSET UNITYSDK_OFFSET(0xE4ABF20)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CCEHOPKEOFM_OFFSET UNITYSDK_OFFSET(0xE4AC650)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4ACFF0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AB220)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_DKFNMIKIGKL_OFFSET UNITYSDK_OFFSET(0xE4AC4D0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_GOENDEDEEHI_OFFSET UNITYSDK_OFFSET(0xE4ABD50)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_KHKMKKNMPDI_OFFSET UNITYSDK_OFFSET(0xE4AB3C0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_LPAMMNFHDDK_OFFSET UNITYSDK_OFFSET(0xE4AC180)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_OEMJPHNJACI_OFFSET UNITYSDK_OFFSET(0xE4AB7A0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE4AB2C0)

namespace RPG::Editor
{
	inline static constexpr unsigned int ShaderPassVarientCollection_TypeDefinitionIndex = 52008;

	class ShaderPassVarientCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* SPVCs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _SPVCollection; // 0x20
		static ::System::String** StaticGet__AssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Editor", "ShaderPassVarientCollection")->GetStaticField(0x54190);
		}

		static ::RPG::Editor::ShaderPassVarientCollection** StaticGet__Asset()
		{
			return (::RPG::Editor::ShaderPassVarientCollection**)UnitySDK::FromName("RPG.Editor", "ShaderPassVarientCollection")->GetStaticField(0x54198);
		}

		static ::Il2CppArray<::System::String*>** StaticGet__NoRuntimePassName()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Editor", "ShaderPassVarientCollection")->GetStaticField(0x541A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CCTOR_OFFSET))();
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_PJPFIHFAHGO_OFFSET))(this);
		}

		static ::System::Collections::Generic::SortedSet_1<::System::String*>* KHKMKKNMPDI(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::SortedSet_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_KHKMKKNMPDI_OFFSET))(a1);
		}

		::System::Void AOMFLPOJANN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_AOMFLPOJANN_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* OEMJPHNJACI(::UnityEngine::Shader* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_OEMJPHNJACI_OFFSET))(a1, a2);
		}

		::System::Void GOENDEDEEHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_GOENDEDEEHI_OFFSET))(this);
		}

		::System::Void BLPGBAIOKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_BLPGBAIOKDN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* LPAMMNFHDDK(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_LPAMMNFHDDK_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* DKFNMIKIGKL(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_DKFNMIKIGKL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* CCEHOPKEOFM(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_CCEHOPKEOFM_OFFSET))(a1);
		}

		static ::System::Boolean BCOFNKCHOHG(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Shader* a2, ::UnityEngine::ShaderVariantCollection* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::UnityEngine::Shader*, ::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_BCOFNKCHOHG_OFFSET))(a1, a2, a3);
		}

	};
}
