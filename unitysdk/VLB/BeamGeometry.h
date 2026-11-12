#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/VLB/MeshType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_2.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class IMCPKODGAEO_FLFPOKJBPOI;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace VLB { class VolumetricLightBeam; }

#define VLB_BEAMGEOMETRY_CAEPDOLLDHH_OFFSET UNITYSDK_OFFSET(0xF508DA0)
#define VLB_BEAMGEOMETRY_CDFLFEIIHOH_OFFSET UNITYSDK_OFFSET(0xF506B90)
#define VLB_BEAMGEOMETRY_CTOR_OFFSET UNITYSDK_OFFSET(0xF5097D0)
#define VLB_BEAMGEOMETRY_DEALIHENNLG_OFFSET UNITYSDK_OFFSET(0xF509090)
#define VLB_BEAMGEOMETRY_GET_CONEMESH_OFFSET UNITYSDK_OFFSET(0xF506000)
#define VLB_BEAMGEOMETRY_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0xF505FE0)
#define VLB_BEAMGEOMETRY_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0xF505FC0)
#define VLB_BEAMGEOMETRY_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xF506060)
#define VLB_BEAMGEOMETRY_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xF5060B0)
#define VLB_BEAMGEOMETRY_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xF506020)
#define VLB_BEAMGEOMETRY_GOOLBIDODEO_OFFSET UNITYSDK_OFFSET(0xF508A30)
#define VLB_BEAMGEOMETRY_HIHJMMLHOEH_OFFSET UNITYSDK_OFFSET(0xF506230)
#define VLB_BEAMGEOMETRY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF506810)
#define VLB_BEAMGEOMETRY_JIDPEMCFGDK_OFFSET UNITYSDK_OFFSET(0xF5088D0)
#define VLB_BEAMGEOMETRY_MCMMNBECLLD_OFFSET UNITYSDK_OFFSET(0xF509080)
#define VLB_BEAMGEOMETRY_MOPAIOCMEJC_OFFSET UNITYSDK_OFFSET(0xF5062D0)
#define VLB_BEAMGEOMETRY_NMLAICHECKA_1_OFFSET UNITYSDK_OFFSET(0xF508B90)
#define VLB_BEAMGEOMETRY_NMLAICHECKA_2_OFFSET UNITYSDK_OFFSET(0xF508C30)
#define VLB_BEAMGEOMETRY_NMLAICHECKA_3_OFFSET UNITYSDK_OFFSET(0xF508CD0)
#define VLB_BEAMGEOMETRY_NMLAICHECKA_OFFSET UNITYSDK_OFFSET(0xF508AF0)
#define VLB_BEAMGEOMETRY_OIPHAACIBNC_OFFSET UNITYSDK_OFFSET(0xF508990)
#define VLB_BEAMGEOMETRY_OJOMDAJNNKG_OFFSET UNITYSDK_OFFSET(0xF508A60)
#define VLB_BEAMGEOMETRY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF506200)
#define VLB_BEAMGEOMETRY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF506640)
#define VLB_BEAMGEOMETRY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF506470)
#define VLB_BEAMGEOMETRY_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0xF509710)
#define VLB_BEAMGEOMETRY_REGENERATEMESH_OFFSET UNITYSDK_OFFSET(0xF506E40)
#define VLB_BEAMGEOMETRY_SETCLIPPINGPLANEOFF_OFFSET UNITYSDK_OFFSET(0xF509040)
#define VLB_BEAMGEOMETRY_SETCLIPPINGPLANE_OFFSET UNITYSDK_OFFSET(0xF508FF0)
#define VLB_BEAMGEOMETRY_SET_CONEMESH_OFFSET UNITYSDK_OFFSET(0xF506010)
#define VLB_BEAMGEOMETRY_SET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0xF505FF0)
#define VLB_BEAMGEOMETRY_SET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0xF505FD0)
#define VLB_BEAMGEOMETRY_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xF506080)
#define VLB_BEAMGEOMETRY_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xF5060D0)
#define VLB_BEAMGEOMETRY_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xF506040)
#define VLB_BEAMGEOMETRY_START_OFFSET UNITYSDK_OFFSET(0xF506100)
#define VLB_BEAMGEOMETRY_SYNCMATERIAL_OFFSET UNITYSDK_OFFSET(0xF508AB0)
#define VLB_BEAMGEOMETRY_UPDATEMATERIALANDBOUNDS_OFFSET UNITYSDK_OFFSET(0xF507100)
#define VLB_BEAMGEOMETRY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xF508E60)

namespace VLB
{
	inline static constexpr unsigned int BeamGeometry_TypeDefinitionIndex = 50052;

	class BeamGeometry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::VLB::VolumetricLightBeam* KNCIKKHBPPJ; // 0x18
		::UnityEngine::Matrix4x4 GCLFIELNAEG; // 0x20
		::VLB::MeshType MHGKGPLNFDK; // 0x60
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* OFEIJIAHFHI; // 0x68
		::UnityEngine::MeshRenderer* _meshRenderer_k__BackingField; // 0x70
		::UnityEngine::MeshFilter* _meshFilter_k__BackingField; // 0x78
		::UnityEngine::Mesh* _coneMesh_k__BackingField; // 0x80
		::IMCPKODGAEO_FLFPOKJBPOI* PHMBKJPIPCN; // 0x88
		::UnityEngine::Plane BBKFDIMGPII; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshRenderer* get_meshRenderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_MESHRENDERER_OFFSET))(this);
		}

		::System::Void set_meshRenderer(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_MESHRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_MESHFILTER_OFFSET))(this);
		}

		::System::Void set_meshFilter(::UnityEngine::MeshFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_MESHFILTER_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_coneMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_CONEMESH_OFFSET))(this);
		}

		::System::Void set_coneMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_CONEMESH_OFFSET))(this, a1);
		}

		::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_SORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_SORTINGORDER_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean HIHJMMLHOEH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_HIHJMMLHOEH_OFFSET))();
		}

		::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*> MOPAIOCMEJC()
		{
			return ((::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_MOPAIOCMEJC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONDISABLE_OFFSET))(this);
		}

		::System::Void Initialize(::VLB::VolumetricLightBeam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::VolumetricLightBeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void RegenerateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_REGENERATEMESH_OFFSET))(this);
		}

		::System::Void JIDPEMCFGDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_JIDPEMCFGDK_OFFSET))(this);
		}

		::System::Boolean OIPHAACIBNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_OIPHAACIBNC_OFFSET))(this);
		}

		::System::Boolean GOOLBIDODEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GOOLBIDODEO_OFFSET))(this);
		}

		::System::Boolean OJOMDAJNNKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_OJOMDAJNNKG_OFFSET))(this);
		}

		::System::Boolean CDFLFEIIHOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_CDFLFEIIHOH_OFFSET))(this);
		}

		::System::Void SyncMaterial(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SYNCMATERIAL_OFFSET))(this, a1);
		}

		::System::Void NMLAICHECKA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_NMLAICHECKA_OFFSET))(this, a1, a2);
		}

		::System::Void NMLAICHECKA_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_NMLAICHECKA_1_OFFSET))(this, a1, a2);
		}

		::System::Void NMLAICHECKA_2(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_NMLAICHECKA_2_OFFSET))(this, a1, a2);
		}

		::System::Void NMLAICHECKA_3(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_NMLAICHECKA_3_OFFSET))(this, a1, a2);
		}

		::System::Void CAEPDOLLDHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_CAEPDOLLDHH_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMaterialAndBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_UPDATEMATERIALANDBOUNDS_OFFSET))(this);
		}

		::System::Void SetClippingPlane(::UnityEngine::Plane a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Plane))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SETCLIPPINGPLANE_OFFSET))(this, a1);
		}

		::System::Void SetClippingPlaneOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SETCLIPPINGPLANEOFF_OFFSET))(this);
		}

		::System::Void MCMMNBECLLD(::UnityEngine::Rendering::ScriptableRenderContext a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_MCMMNBECLLD_OFFSET))(this, a1, a2);
		}

		::System::Void OnWillRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONWILLRENDEROBJECT_OFFSET))(this);
		}

		::System::Void DEALIHENNLG(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_DEALIHENNLG_OFFSET))(this, a1);
		}

	};
}
