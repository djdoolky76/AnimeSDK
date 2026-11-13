#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/MeshArrays.h"
#include "unitysdk/UnityEngine/ProBuilder/MeshSyncState.h"
#include "unitysdk/UnityEngine/ProBuilder/ProBuilderMesh_CacheValidState.h"
#include "unitysdk/UnityEngine/ProBuilder/RefreshMask.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class SharedVertex; }
namespace UnityEngine::ProBuilder { class UnwrapParameters; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDSHAREDVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2826C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOFACESELECTION_OFFSET UNITYSDK_OFFSET(0x1A283470)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOSHAREDVERTEX_OFFSET UNITYSDK_OFFSET(0x1A282520)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTHASBEENRESET_OFFSET UNITYSDK_OFFSET(0xD73BE30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0xD73BC70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_ELEMENTSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD73BFF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_MESHWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0xD73BAB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A27A820)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CACHESELECTION_OFFSET UNITYSDK_OFFSET(0x1A2827F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A283BF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0x1A27AB80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A27AEA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A27DB00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATEINSTANCEWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x1A27AFD0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A27B4A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1A27B610)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_OFFSET UNITYSDK_OFFSET(0x1A27B420)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A283B00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHCOLLIDERISASSIGNED_OFFSET UNITYSDK_OFFSET(0x1A27AA60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHFILTERISASSIGNED_OFFSET UNITYSDK_OFFSET(0x1A27A970)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GEOMETRYWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x1A27B160)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEEDGE_OFFSET UNITYSDK_OFFSET(0x1A2833B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEFACE_OFFSET UNITYSDK_OFFSET(0x1A283360)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEVERTEX_OFFSET UNITYSDK_OFFSET(0x1A283430)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1A280E60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_2_OFFSET UNITYSDK_OFFSET(0x1A2815A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_3_OFFSET UNITYSDK_OFFSET(0x1A280780)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_4_OFFSET UNITYSDK_OFFSET(0x1A281E30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2806C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOLORS_OFFSET UNITYSDK_OFFSET(0xD73B260)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETNORMALS_OFFSET UNITYSDK_OFFSET(0xD734630)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1A283060)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLES_OFFSET UNITYSDK_OFFSET(0x1A2801C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLE_OFFSET UNITYSDK_OFFSET(0x1A280040)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETTANGENTS_OFFSET UNITYSDK_OFFSET(0xD734710)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUNUSEDTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x1A27EE70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0xD73B580)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_OFFSET UNITYSDK_OFFSET(0xD729B40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICESINLIST_OFFSET UNITYSDK_OFFSET(0xD73A1B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICES_OFFSET UNITYSDK_OFFSET(0xD6C5D20)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B1D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0xD73B1F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0xD6DEDC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACECOUNT_OFFSET UNITYSDK_OFFSET(0xD6DBC40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD739970)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACES_OFFSET UNITYSDK_OFFSET(0xD739990)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FILTER_OFFSET UNITYSDK_OFFSET(0xD739860)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_ID_OFFSET UNITYSDK_OFFSET(0xD734800)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD73B7E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHFORMATVERSION_OFFSET UNITYSDK_OFFSET(0xD73C390)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHSYNCSTATE_OFFSET UNITYSDK_OFFSET(0xD73C1C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESH_OFFSET UNITYSDK_OFFSET(0xD71F5C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B1B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0xD715710)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73A130)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xD73A150)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_PRESERVEMESHASSETONDESTROY_OFFSET UNITYSDK_OFFSET(0xD739950)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0xD6F7AF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x1A282750)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A282F00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A282F40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGECOUNT_OFFSET UNITYSDK_OFFSET(0x1A2827B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283320)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGES_OFFSET UNITYSDK_OFFSET(0x1A2831F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACECOUNT_OFFSET UNITYSDK_OFFSET(0x1A282770)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDEXES_OFFSET UNITYSDK_OFFSET(0x1A283170)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283300)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283250)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283340)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICESCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2827D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A282F20)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A282790)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2831B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURELOOKUP_OFFSET UNITYSDK_OFFSET(0xD6C6720)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0xD73A120)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0xD6C1E10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73A110)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0xD6F7A90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0xD73B380)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES2INTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES3INTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B500)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES_OFFSET UNITYSDK_OFFSET(0xD73B520)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0xD73B940)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_UNWRAPPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD739840)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_USERCOLLISIONS_OFFSET UNITYSDK_OFFSET(0xD739820)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0xD739940)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD6D7DF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_HASARRAYS_OFFSET UNITYSDK_OFFSET(0xD6CB750)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INCREMENTVERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A27AE90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATECACHES_OFFSET UNITYSDK_OFFSET(0xD6E4DF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATEFACES_OFFSET UNITYSDK_OFFSET(0xD739BF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDTEXTURELOOKUP_OFFSET UNITYSDK_OFFSET(0xD739AF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0xD7399F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ISVALIDTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x1A27EF70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_MAKEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1A27DAB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A27AD80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILDWITHPOSITIONSANDFACES_OFFSET UNITYSDK_OFFSET(0x1A27B540)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A27AC20)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1A27E970)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHNORMALS_OFFSET UNITYSDK_OFFSET(0x1A27EAF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1A27ECB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHUV_OFFSET UNITYSDK_OFFSET(0x1A27E070)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A27BD60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVEFROMFACESELECTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x1A283AD0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTHASBEENRESET_OFFSET UNITYSDK_OFFSET(0xD73BF10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0xD73BD50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_ELEMENTSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD73C0D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_MESHWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0xD73BB90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1A27AC80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0x1A27F450)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETGROUPUV_OFFSET UNITYSDK_OFFSET(0x1A27F380)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A27F8F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDEDGES_OFFSET UNITYSDK_OFFSET(0x1A2837D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_1_OFFSET UNITYSDK_OFFSET(0x1A283500)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1A283720)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A283920)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0xD6C7CA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0xD6C7B30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETTEXTURESCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1A2824E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETUVS_OFFSET UNITYSDK_OFFSET(0xD729F70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICESCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1A281FE0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICES_OFFSET UNITYSDK_OFFSET(0xD6C6F90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B1E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0xD6E0D90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD739980)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACES_OFFSET UNITYSDK_OFFSET(0xD6C7A50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_MESH_OFFSET UNITYSDK_OFFSET(0xD73C1B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_NORMALSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B1C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73A140)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xD6E0D10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_PRESERVEMESHASSETONDESTROY_OFFSET UNITYSDK_OFFSET(0xD739960)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x1A282760)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDEDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283330)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACEINDICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283310)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283260)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A283350)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0xD6F5B60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD6E4CF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0xD6F5C60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0xD73B400)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES2INTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES3INTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B510)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURESINTERNAL_OFFSET UNITYSDK_OFFSET(0xD73B4D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES_OFFSET UNITYSDK_OFFSET(0xD6E0E40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_UNWRAPPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD739850)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_USERCOLLISIONS_OFFSET UNITYSDK_OFFSET(0xD739830)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_TOMESH_OFFSET UNITYSDK_OFFSET(0x1A27B860)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_UNUSEDELEMENTGROUP_OFFSET UNITYSDK_OFFSET(0x1A27EF80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__236_0_OFFSET UNITYSDK_OFFSET(0x1A283CC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_0_OFFSET UNITYSDK_OFFSET(0x1A283D50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_1_OFFSET UNITYSDK_OFFSET(0x1A283D90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SET_SELECTEDFACESINTERNAL_B__222_0_OFFSET UNITYSDK_OFFSET(0x1A283C30)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_TypeDefinitionIndex = 45479;

	class ProBuilderMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 m_MeshFormatVersion; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* m_Faces; // 0x20
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* m_SharedVertices; // 0x28
		::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState m_CacheValid; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_SharedVertexLookup; // 0x38
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* m_SharedTextures; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_SharedTextureLookup; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* m_Positions; // 0x50
		::Il2CppArray<::UnityEngine::Vector2>* m_Textures0; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures2; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures3; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* m_Tangents; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* m_Normals; // 0x78
		::Il2CppArray<::UnityEngine::Color>* m_Colors; // 0x80
		::System::Boolean _userCollisions_k__BackingField; // 0x88
		::System::Byte _padding2[0x7];
		::UnityEngine::ProBuilder::UnwrapParameters* m_UnwrapParameters; // 0x90
		::System::Boolean m_PreserveMeshAssetOnDestroy; // 0x98
		::System::Byte _padding3[0x7];
		::System::String* assetGuid; // 0xA0
		::UnityEngine::Mesh* m_Mesh; // 0xA8
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0xB0
		::UnityEngine::MeshFilter* m_MeshFilter; // 0xB8
		::System::UInt16 m_VersionIndex; // 0xC0
		::System::Boolean m_IsSelectable; // 0xC2
		::System::Byte _padding4[0x5];
		::Il2CppArray<::System::Int32>* m_SelectedFaces; // 0xC8
		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* m_SelectedEdges; // 0xD0
		::Il2CppArray<::System::Int32>* m_SelectedVertices; // 0xD8
		::System::Boolean m_SelectedCacheDirty; // 0xE0
		::System::Byte _padding5[0x3];
		::System::Int32 m_SelectedSharedVerticesCount; // 0xE4
		::System::Int32 m_SelectedCoincidentVertexCount; // 0xE8
		::System::Byte _padding6[0x4];
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_SelectedSharedVertices; // 0xF0
		::System::Collections::Generic::List_1<::System::Int32>* m_SelectedCoincidentVertices; // 0xF8
		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_elementSelectionChanged()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "ProBuilderMesh")->GetStaticField(0x67F60);
		}

		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_meshWillBeDestroyed()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "ProBuilderMesh")->GetStaticField(0x67F68);
		}

		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_componentHasBeenReset()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "ProBuilderMesh")->GetStaticField(0x67F70);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_CachedHashSet()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder", "ProBuilderMesh")->GetStaticField(0x67F78);
		}

		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_componentWillBeDestroyed()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "ProBuilderMesh")->GetStaticField(0x67F80);
		}

		// static const ::System::Object k_MeshFilterHideFlags; // 0x0
		// static const ::System::Object k_UVChannelCount; // 0x0
		// static const ::System::Object k_MeshFormatVersion; // 0x0
		// static const ::System::Object k_MeshFormatVersionSubmeshMaterialRefactor; // 0x0
		// static const ::System::Object k_MeshFormatVersionAutoUVScaleOffset; // 0x0
		// static const ::System::Object maxVertexCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CCTOR_OFFSET))();
		}

		::System::Boolean get_userCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_USERCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_userCollisions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_USERCOLLISIONS_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::UnwrapParameters* get_unwrapParameters()
		{
			return ((::UnityEngine::ProBuilder::UnwrapParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_UNWRAPPARAMETERS_OFFSET))(this);
		}

		::System::Void set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::UnwrapParameters*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_UNWRAPPARAMETERS_OFFSET))(this, a1);
		}

		::UnityEngine::MeshRenderer* get_renderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_filter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FILTER_OFFSET))(this);
		}

		::System::UInt16 get_versionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERSIONINDEX_OFFSET))(this);
		}

		::System::Boolean get_preserveMeshAssetOnDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_PRESERVEMESHASSETONDESTROY_OFFSET))(this);
		}

		::System::Void set_preserveMeshAssetOnDestroy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_PRESERVEMESHASSETONDESTROY_OFFSET))(this, a1);
		}

		::System::Boolean HasArrays(::UnityEngine::ProBuilder::MeshArrays a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_HASARRAYS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* get_facesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACESINTERNAL_OFFSET))(this);
		}

		::System::Void set_facesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACESINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* get_faces()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACES_OFFSET))(this);
		}

		::System::Void set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACES_OFFSET))(this, a1);
		}

		::System::Void InvalidateSharedVertexLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDVERTEXLOOKUP_OFFSET))(this);
		}

		::System::Void InvalidateSharedTextureLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDTEXTURELOOKUP_OFFSET))(this);
		}

		::System::Void InvalidateFaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATEFACES_OFFSET))(this);
		}

		::System::Void InvalidateCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATECACHES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVerticesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICESINTERNAL_OFFSET))(this);
		}

		::System::Void set_sharedVerticesInternal(::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICESINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVertices()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICES_OFFSET))(this);
		}

		::System::Void set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_sharedVertexLookup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTEXLOOKUP_OFFSET))(this);
		}

		::System::Void SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDVERTICES_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedTextures()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURES_OFFSET))(this);
		}

		::System::Void set_sharedTextures(::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDTEXTURES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_sharedTextureLookup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURELOOKUP_OFFSET))(this);
		}

		::System::Void SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDTEXTURES_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_positionsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONSINTERNAL_OFFSET))(this);
		}

		::System::Void set_positionsInternal(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONSINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_positions()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GetVertices(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICES_OFFSET))(this, a1);
		}

		::System::Void GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICESINLIST_OFFSET))(this, a1);
		}

		::System::Void SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_normals()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_normalsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALSINTERNAL_OFFSET))(this);
		}

		::System::Void set_normalsInternal(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_NORMALSINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetNormals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETNORMALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* get_colorsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORSINTERNAL_OFFSET))(this);
		}

		::System::Void set_colorsInternal(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORSINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Color>* get_colors()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* GetColors()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOLORS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* get_tangents()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_tangentsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTSINTERNAL_OFFSET))(this);
		}

		::System::Void set_tangentsInternal(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTSINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetTangents()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETTANGENTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_texturesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURESINTERNAL_OFFSET))(this);
		}

		::System::Void set_texturesInternal(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURESINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures2Internal()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES2INTERNAL_OFFSET))(this);
		}

		::System::Void set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES2INTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures3Internal()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES3INTERNAL_OFFSET))(this);
		}

		::System::Void set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES3INTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* get_textures()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES_OFFSET))(this);
		}

		::System::Void set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES_OFFSET))(this, a1);
		}

		::System::Void GetUVs(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_OFFSET))(this, a1, a2);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* GetUVs_1(::System::Int32 a1)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_1_OFFSET))(this, a1);
		}

		::System::Void SetUVs(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETUVS_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_faceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACECOUNT_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_edgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_EDGECOUNT_OFFSET))(this);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_triangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		static ::System::Void add_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_MESHWILLBEDESTROYED_OFFSET))(a1);
		}

		static ::System::Void remove_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_MESHWILLBEDESTROYED_OFFSET))(a1);
		}

		static ::System::Void add_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTWILLBEDESTROYED_OFFSET))(a1);
		}

		static ::System::Void remove_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTWILLBEDESTROYED_OFFSET))(a1);
		}

		static ::System::Void add_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTHASBEENRESET_OFFSET))(a1);
		}

		static ::System::Void remove_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTHASBEENRESET_OFFSET))(a1);
		}

		static ::System::Void add_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_ELEMENTSELECTIONCHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_ELEMENTSELECTIONCHANGED_OFFSET))(a1);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_MESH_OFFSET))(this, a1);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_ID_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::MeshSyncState get_meshSyncState()
		{
			return ((::UnityEngine::ProBuilder::MeshSyncState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHSYNCSTATE_OFFSET))(this);
		}

		::System::Int32 get_meshFormatVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHFORMATVERSION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ONDESTROY_OFFSET))(this);
		}

		::System::Void IncrementVersionIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INCREMENTVERSIONINDEX_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEAR_OFFSET))(this);
		}

		::System::Void EnsureMeshFilterIsAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHFILTERISASSIGNED_OFFSET))(this);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateInstanceWithPoints(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATEINSTANCEWITHPOINTS_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create_2(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a3, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a4, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a5)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GeometryWithPoints(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GEOMETRYWITHPOINTS_OFFSET))(this, a1);
		}

		::System::Void RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILDWITHPOSITIONSANDFACES_OFFSET))(this, a1, a2);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILD_OFFSET))(this);
		}

		::System::Void ToMesh(::UnityEngine::MeshTopology a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_TOMESH_OFFSET))(this, a1);
		}

		::System::Void MakeUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_MAKEUNIQUE_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void Refresh(::UnityEngine::ProBuilder::RefreshMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::RefreshMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESH_OFFSET))(this, a1);
		}

		::System::Void EnsureMeshColliderIsAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHCOLLIDERISASSIGNED_OFFSET))(this);
		}

		::System::Int32 GetUnusedTextureGroup(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUNUSEDTEXTUREGROUP_OFFSET))(this, a1);
		}

		static ::System::Boolean IsValidTextureGroup(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ISVALIDTEXTUREGROUP_OFFSET))(a1);
		}

		::System::Int32 UnusedElementGroup(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_UNUSEDELEMENTGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHUV_OFFSET))(this, a1);
		}

		::System::Void SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETGROUPUV_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshColors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHCOLORS_OFFSET))(this);
		}

		::System::Void SetFaceColor(::UnityEngine::ProBuilder::Face* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETFACECOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshNormals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHNORMALS_OFFSET))(this);
		}

		::System::Void RefreshTangents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHTANGENTS_OFFSET))(this);
		}

		::System::Int32 GetSharedVertexHandle(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_OFFSET))(this, a1);
		}

		::System::Void GetCoincidentVertices_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetCoincidentVertices_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetCoincidentVertices_3(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetCoincidentVertices_4(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICESCOINCIDENT_OFFSET))(this, a1);
		}

		::System::Void SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETTEXTURESCOINCIDENT_OFFSET))(this, a1);
		}

		::System::Void AddToSharedVertex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOSHAREDVERTEX_OFFSET))(this, a1, a2);
		}

		::System::Void AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SharedVertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDSHAREDVERTEX_OFFSET))(this, a1);
		}

		::System::Boolean get_selectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTABLE_OFFSET))(this);
		}

		::System::Void set_selectable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTABLE_OFFSET))(this, a1);
		}

		::System::Int32 get_selectedFaceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACECOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedEdgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGECOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedSharedVerticesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICESCOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedCoincidentVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTEXCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_selectedSharedVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_selectedCoincidentVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTICES_OFFSET))(this);
		}

		::System::Void CacheSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CACHESELECTION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* GetSelectedFaces()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSELECTEDFACES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_selectedFaceIndexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDEXES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_selectedVertices()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTICES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_selectedEdges()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* get_selectedFacesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedFacesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACESINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_selectedFaceIndicesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDICESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedFaceIndicesInternal(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACEINDICESINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* get_selectedEdgesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedEdgesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDEDGESINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_selectedIndexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDINDEXESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedIndexesInternal(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDINDEXESINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* GetActiveFace()
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEFACE_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge GetActiveEdge()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEEDGE_OFFSET))(this);
		}

		::System::Int32 GetActiveVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEVERTEX_OFFSET))(this);
		}

		::System::Void AddToFaceSelection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOFACESELECTION_OFFSET))(this, a1);
		}

		::System::Void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_OFFSET))(this, a1);
		}

		::System::Void SetSelectedFaces_1(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_1_OFFSET))(this, a1);
		}

		::System::Void SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDEDGES_OFFSET))(this, a1);
		}

		::System::Void SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDVERTICES_OFFSET))(this, a1);
		}

		::System::Void RemoveFromFaceSelectionAtIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVEFROMFACESELECTIONATINDEX_OFFSET))(this, a1);
		}

		::System::Void ClearSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEARSELECTION_OFFSET))(this);
		}

		::System::Int32 _set_selectedFacesInternal_b__222_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SET_SELECTEDFACESINTERNAL_B__222_0_OFFSET))(this, a1);
		}

		::System::Int32 _SetSelectedFaces_b__236_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__236_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _SetSelectedFaces_b__237_0(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _SetSelectedFaces_b__237_1(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_1_OFFSET))(this, a1);
		}

	};
}
