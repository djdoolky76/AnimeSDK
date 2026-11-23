#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class TerrainLayer; }
namespace UnityEngine { class Transform; }

#define ABC_TECHART_TERRAINMATERIALCOMBINER_BACKUPPROTECTEDAREA_OFFSET UNITYSDK_OFFSET(0x2893920)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CALCULATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x2893AD0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARLABELS_OFFSET UNITYSDK_OFFSET(0x2893BD0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARMATERIALIDMAP_OFFSET UNITYSDK_OFFSET(0x2893C70)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARTEXTLABELS_OFFSET UNITYSDK_OFFSET(0x2893DE0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARWORKAREA_OFFSET UNITYSDK_OFFSET(0x2894020)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CREATECOMBINATIONTEXTLABELS_OFFSET UNITYSDK_OFFSET(0x2894210)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CREATELABELCONTAINER_OFFSET UNITYSDK_OFFSET(0x2894470)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CREATEMATERIALLISTLABEL_OFFSET UNITYSDK_OFFSET(0x2894600)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CREATETEXTMESH_OFFSET UNITYSDK_OFFSET(0x28947C0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_CREATETEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x2894A50)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATECOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x2894BE0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATEMATERIALCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x2895110)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATEMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x2895750)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATESINGLECOMBINATION_OFFSET UNITYSDK_OFFSET(0x2895AB0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATESINGLEMATERIALDISPLAY_OFFSET UNITYSDK_OFFSET(0x2895C90)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GETCOMBINATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x2895E30)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_GETMAXCOMBINATIONCOLUMNS_OFFSET UNITYSDK_OFFSET(0x2895EA0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_ISINWORKAREA_OFFSET UNITYSDK_OFFSET(0x2895F40)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2895FC0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2896010)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_PIXELTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x2896220)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_PREVIEWCOMBINATIONLAYOUT_OFFSET UNITYSDK_OFFSET(0x2896460)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_PREVIEWWORKAREA_OFFSET UNITYSDK_OFFSET(0x28970D0)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_RESTOREPROTECTEDAREA_OFFSET UNITYSDK_OFFSET(0x2897420)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_TRYCREATETEXTMESHPRO_OFFSET UNITYSDK_OFFSET(0x2897560)
#define ABC_TECHART_TERRAINMATERIALCOMBINER_VERIFYWEIGHTDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x2897730)
#define ABC_TECHART_TERRAINMATERIALCOMBINER__CTOR_OFFSET UNITYSDK_OFFSET(0x2897A00)

namespace ABC::TechArt
{
	inline static constexpr unsigned int TerrainMaterialCombiner_TypeDefinitionIndex = 16193;

	class TerrainMaterialCombiner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Terrain* targetTerrain; // 0x20
		::System::Int32 combinationWidth; // 0x28
		::System::Int32 combinationHeight; // 0x2C
		::System::Int32 spacing; // 0x30
		::System::Int32 materialWidthA; // 0x34
		::System::Int32 materialWidthB; // 0x38
		::System::Int32 fadeStartOffsetRatio; // 0x3C
		::System::Int32 fadeWidthRatio; // 0x40
		::System::Int32 fadeEndOffsetRatio; // 0x44
		::System::Boolean enableWorkAreaLimit; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 workAreaHeight; // 0x4C
		::UnityEngine::E46B881AA2636190 workAreaPreviewColor; // 0x50
		::System::Int32 materialListWidth; // 0x60
		::System::Int32 materialListHeight; // 0x64
		::System::Int32 materialListSpacing; // 0x68
		::System::Int32 materialListOffset; // 0x6C
		::System::Boolean enableTextLabels; // 0x70
		::System::Byte _padding1[0x3];
		::System::Single textHeight; // 0x74
		::System::Single textSize; // 0x78
		::UnityEngine::E46B881AA2636190 textColor; // 0x7C
		::System::Byte _padding2[0x4];
		::System::String* textFontName; // 0x90
		::System::Single referenceDistance; // 0x98
		::System::Single labelOffsetRatio; // 0x9C
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* textLabels; // 0xA0
		::UnityEngine::Transform* labelContainer; // 0xA8
		::System::Object* protectedAreaData; // 0xB0
		::System::Int32 protectedAreaStartY; // 0xB8

		::System::Void GenerateSingleMaterialDisplay(::System::Int32 AB37EDC84A0257FF, ::System::Int32 F25ED3707BE4E770, ::System::Int32 B26F599D5A1F3D15, ::System::Object* FEA5F22CE40B3372)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATESINGLEMATERIALDISPLAY_OFFSET))(this, AB37EDC84A0257FF, F25ED3707BE4E770, B26F599D5A1F3D15, FEA5F22CE40B3372);
		}

		::System::Void CreateTextMesh(::UnityEngine::GameObject* A91D32698E2D3D34, ::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CREATETEXTMESH_OFFSET))(this, A91D32698E2D3D34, E97E8D008427A296);
		}

		::System::Void CreateMaterialListLabel(::UnityEngine::TerrainLayer* A7443E7D25D3D43B, ::System::Int32 BCC2CB8E63F11010, ::System::Int32 A4DEAE5459245C80, ::System::Int32 AB37EDC84A0257FF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainLayer*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CREATEMATERIALLISTLABEL_OFFSET))(this, A7443E7D25D3D43B, BCC2CB8E63F11010, A4DEAE5459245C80, AB37EDC84A0257FF);
		}

		::UnityEngine::Vector3 PixelToWorldPosition(::System::Single BCC2CB8E63F11010, ::System::Single A4DEAE5459245C80)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_PIXELTOWORLDPOSITION_OFFSET))(this, BCC2CB8E63F11010, A4DEAE5459245C80);
		}

		::System::Void ClearTextLabels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARTEXTLABELS_OFFSET))(this);
		}

		::System::Void GenerateCombinations(::Il2CppArray<::UnityEngine::TerrainLayer*>* B14A2E1E67C165FF, ::System::Object* FEA5F22CE40B3372, ::System::Int32 F42689B146774BE7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TerrainLayer*>*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATECOMBINATIONS_OFFSET))(this, B14A2E1E67C165FF, FEA5F22CE40B3372, F42689B146774BE7);
		}

		::System::Void GenerateMaterialList(::Il2CppArray<::UnityEngine::TerrainLayer*>* B14A2E1E67C165FF, ::System::Object* FEA5F22CE40B3372, ::System::Int32 F42689B146774BE7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TerrainLayer*>*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATEMATERIALLIST_OFFSET))(this, B14A2E1E67C165FF, FEA5F22CE40B3372, F42689B146774BE7);
		}

		::System::Void RestoreProtectedArea(::System::Object* FEA5F22CE40B3372)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_RESTOREPROTECTEDAREA_OFFSET))(this, FEA5F22CE40B3372);
		}

		::System::Int32 GetMaxCombinationColumns(::System::Int32 E25FD90F535AE1AC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GETMAXCOMBINATIONCOLUMNS_OFFSET))(this, E25FD90F535AE1AC);
		}

		::System::Void VerifyWeightDistribution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_VERIFYWEIGHTDISTRIBUTION_OFFSET))(this);
		}

		::System::Void CreateLabelContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CREATELABELCONTAINER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_ONENABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateTextObject(::System::String* E97E8D008427A296, ::UnityEngine::Vector3 EB211B01816ACA79)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CREATETEXTOBJECT_OFFSET))(this, E97E8D008427A296, EB211B01816ACA79);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER__CTOR_OFFSET))(this);
		}

		::System::Void ClearLabels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARLABELS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CreateCombinationTextLabels(::UnityEngine::TerrainLayer* B675311D8BAFBFD2, ::UnityEngine::TerrainLayer* F7229A4C23B8155B, ::System::Int32 BCC2CB8E63F11010, ::System::Int32 A4DEAE5459245C80)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainLayer*, ::UnityEngine::TerrainLayer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CREATECOMBINATIONTEXTLABELS_OFFSET))(this, B675311D8BAFBFD2, F7229A4C23B8155B, BCC2CB8E63F11010, A4DEAE5459245C80);
		}

		::System::Void GenerateMaterialCombinations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATEMATERIALCOMBINATIONS_OFFSET))(this);
		}

		::System::Void PreviewCombinationLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_PREVIEWCOMBINATIONLAYOUT_OFFSET))(this);
		}

		::System::Boolean TryCreateTextMeshPro(::UnityEngine::GameObject* A91D32698E2D3D34, ::System::String* E97E8D008427A296)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_TRYCREATETEXTMESHPRO_OFFSET))(this, A91D32698E2D3D34, E97E8D008427A296);
		}

		::System::Single CalculateWeight(::System::Int32 BB8C609F76620E45)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CALCULATEWEIGHT_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Void ClearMaterialIDMap(::System::Object* FEA5F22CE40B3372)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARMATERIALIDMAP_OFFSET))(this, FEA5F22CE40B3372);
		}

		::System::Void BackupProtectedArea(::System::Object* FEA5F22CE40B3372, ::System::Int32 F42689B146774BE7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_BACKUPPROTECTEDAREA_OFFSET))(this, FEA5F22CE40B3372, F42689B146774BE7);
		}

		::System::Void PreviewWorkArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_PREVIEWWORKAREA_OFFSET))(this);
		}

		::System::Void ClearWorkArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_CLEARWORKAREA_OFFSET))(this);
		}

		::System::Boolean IsInWorkArea(::System::Int32 A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_ISINWORKAREA_OFFSET))(this, A0A0D02932F12CFD);
		}

		::System::Int32 GetCombinationCount(::System::Int32 E25FD90F535AE1AC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GETCOMBINATIONCOUNT_OFFSET))(this, E25FD90F535AE1AC);
		}

		::System::Void GenerateSingleCombination(::System::Int32 EA7E0A51F2355819, ::System::Int32 A88C3E6A6F837FA3, ::System::Int32 F25ED3707BE4E770, ::System::Int32 B26F599D5A1F3D15, ::System::Object* FEA5F22CE40B3372)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_TECHART_TERRAINMATERIALCOMBINER_GENERATESINGLECOMBINATION_OFFSET))(this, EA7E0A51F2355819, A88C3E6A6F837FA3, F25ED3707BE4E770, B26F599D5A1F3D15, FEA5F22CE40B3372);
		}
	};
}
