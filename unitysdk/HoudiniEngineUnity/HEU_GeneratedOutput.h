#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x38679B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET UNITYSDK_OFFSET(0x3867AF0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET UNITYSDK_OFFSET(0x3867B20)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x3867C60)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x3867F30)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET UNITYSDK_OFFSET(0x3868180)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x3868360)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x38683D0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x38685B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET UNITYSDK_OFFSET(0x3868780)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x38687D0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x3868990)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x3868B50)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET UNITYSDK_OFFSET(0x3868CB0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x3868E00)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x3868ED0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x3869050)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneratedOutput_TypeDefinitionIndex = 18041;

	class HEU_GeneratedOutput : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_GeneratedOutputData* _outputData; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>* _childOutputs; // 0x18
		::System::Boolean isInstancer; // 0x20

		static ::System::Boolean IsOutputUsingMaterial(::UnityEngine::Material* F88278D4FAB8E4E0, ::HoudiniEngineUnity::HEU_GeneratedOutput* B7269378254B3BAC)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET))(F88278D4FAB8E4E0, B7269378254B3BAC);
		}

		::System::Void set_IsInstancer(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void DestroyGeneratedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* E546CDC29F110FF5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET))(E546CDC29F110FF5);
		}

		static ::System::Void ClearMaterialsNoLongerUsed(::Il2CppArray<::UnityEngine::Material*>* E4050377222AC2E9, ::Il2CppArray<::UnityEngine::Material*>* FF472B9776211D04)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET))(E4050377222AC2E9, FF472B9776211D04);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetGeneratedMaterialsForGameObject(::HoudiniEngineUnity::HEU_GeneratedOutput* B7269378254B3BAC, ::UnityEngine::GameObject* E963767EEDD053F3)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET))(B7269378254B3BAC, E963767EEDD053F3);
		}

		static ::System::Boolean IsOutputDataUsingMaterial(::UnityEngine::Material* F88278D4FAB8E4E0, ::HoudiniEngineUnity::HEU_GeneratedOutputData* AACC68027FEBA143)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET))(F88278D4FAB8E4E0, AACC68027FEBA143);
		}

		::System::Void WriteOutputToAssetCache(::UnityEngine::GameObject* A5DA638160034C89, ::System::String* A2575AB0D98ACBAA, ::System::Boolean AD8DA4D8964967AC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET))(this, A5DA638160034C89, A2575AB0D98ACBAA, AD8DA4D8964967AC);
		}

		static ::System::Void CopyMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* F9F392C126B0F53E, ::HoudiniEngineUnity::HEU_GeneratedOutputData* A665DDD373FBBC44)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET))(F9F392C126B0F53E, A665DDD373FBBC44);
		}

		static ::System::Void BakeGameObjectComponents(::UnityEngine::GameObject* A912C9BB56A14CD5, ::UnityEngine::GameObject* E5133820E6F3D3F5, ::System::String* B4BF73719BE11EB7, ::System::String* A2575AB0D98ACBAA, ::System::Boolean AD8DA4D8964967AC)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET))(A912C9BB56A14CD5, E5133820E6F3D3F5, B4BF73719BE11EB7, A2575AB0D98ACBAA, AD8DA4D8964967AC);
		}

		static ::System::Void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* AACC68027FEBA143)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET))(AACC68027FEBA143);
		}

		static ::System::Void ResetMaterialOverrides_1(::HoudiniEngineUnity::HEU_GeneratedOutput* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET))(B7269378254B3BAC);
		}

		::System::Boolean get_IsInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutput* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		static ::System::Void ClearGeneratedMaterialReferences(::HoudiniEngineUnity::HEU_GeneratedOutputData* A1A6172A4EC8C80C)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET))(A1A6172A4EC8C80C);
		}

		static ::System::Boolean HasLODGroup(::HoudiniEngineUnity::HEU_GeneratedOutput* B7269378254B3BAC)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET))(B7269378254B3BAC);
		}

		static ::System::Void DestroyAllGeneratedColliders(::HoudiniEngineUnity::HEU_GeneratedOutputData* AACC68027FEBA143)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET))(AACC68027FEBA143);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void DestroyGeneratedOutputChildren(::HoudiniEngineUnity::HEU_GeneratedOutput* E546CDC29F110FF5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET))(E546CDC29F110FF5);
		}

		static ::System::Void DestroyGeneratedOutputData(::HoudiniEngineUnity::HEU_GeneratedOutputData* A1A6172A4EC8C80C, ::System::Boolean E00DF8468FC90659)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET))(A1A6172A4EC8C80C, E00DF8468FC90659);
		}
	};
}
