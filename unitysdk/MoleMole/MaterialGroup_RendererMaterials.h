#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x130E3360)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x130E2980)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_SHADEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x130E2D30)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x130E2ED0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x130E2DB0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E2E80)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x130E2E10)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_RendererMaterials_TypeDefinitionIndex = 48528;

	class MaterialGroup_RendererMaterials : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EMPTY_MATERIALS()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_RendererMaterials_TypeDefinitionIndex)->GetStaticField(0x34AD0);
		}
		::Il2CppArray<::UnityEngine::Material*>* _materials; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Boolean materialsInstanced; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _shadedMaterials; // 0x28
		::System::Boolean skipped; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_shadedMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_SHADEDMATERIALS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_TOSTRING_OFFSET))(this);
		}

		::System::Void HNDGJKPNIHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_HNDGJKPNIHA_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
