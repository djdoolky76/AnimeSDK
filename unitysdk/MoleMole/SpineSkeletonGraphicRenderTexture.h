#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/SpineSkeletonRenderTextureBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SpineRTRawImage; }
namespace MoleMole { class SpineSkeletonGraphicImage; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class OutlineEx; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AMINPJEIFOJ_OFFSET UNITYSDK_OFFSET(0x1A092DD0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x146AD720)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET UNITYSDK_OFFSET(0x146B0350)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BODOCPIFGGO_OFFSET UNITYSDK_OFFSET(0x1A092600)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BOPEJMDPLJN_OFFSET UNITYSDK_OFFSET(0x146B0A20)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CCJFEEEIEEK_OFFSET UNITYSDK_OFFSET(0x146B1290)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET UNITYSDK_OFFSET(0x146B0520)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET UNITYSDK_OFFSET(0x146ACB40)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_EGMEFOOEKLD_OFFSET UNITYSDK_OFFSET(0x146B1480)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_FAODCJBEKMO_OFFSET UNITYSDK_OFFSET(0x146ADB80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x146B0940)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x146B1230)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_KFMGANKLDOJ_OFFSET UNITYSDK_OFFSET(0x1A093420)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_LALHOPKAGED_OFFSET UNITYSDK_OFFSET(0x146B1240)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_LPPBDNJIKFF_OFFSET UNITYSDK_OFFSET(0x146B0120)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_NIELGPAELHK_OFFSET UNITYSDK_OFFSET(0x146B0CC0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_NOLCFGMAOCA_OFFSET UNITYSDK_OFFSET(0x146AFB20)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_OCKODPCAGCL_OFFSET UNITYSDK_OFFSET(0x146B07B0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x146AF870)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x146AF7B0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x146AF0C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONLBIAIEKHE_OFFSET UNITYSDK_OFFSET(0x1A093540)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x146B0300)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x146B04D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET UNITYSDK_OFFSET(0x146AE4D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET UNITYSDK_OFFSET(0x146AF070)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET UNITYSDK_OFFSET(0x146ACD50)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET UNITYSDK_OFFSET(0x146AD520)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x146B06A0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_TypeDefinitionIndex = 41791;

	class SpineSkeletonGraphicRenderTexture : public ::MoleMole::SpineSkeletonRenderTextureBase
	{
	public:
		::UnityEngine::UI::OutlineEx* outlineHolder; // 0xF8
		::System::Int32 shaderPassID; // 0x100
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicImage*>* imageStructList; // 0x108
		::UnityEngine::RectTransform* customRenderRect; // 0x110
		::Spine::Unity::SkeletonGraphic* GOBFPGODCBO; // 0x118
		::System::Boolean specificRTMaterial; // 0x120
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* meshRendererMaterialForTexture; // 0x128
		::System::Collections::Generic::List_1<::System::Object*>* meshMultiRendererMaterialForTexture; // 0x130
		::UnityEngine::CanvasRenderer* CGHNHHJPJJL; // 0x138
		::UnityEngine::RectTransform* LLNEHAMPNAK; // 0x140
		::MoleMole::SpineRTRawImage* OEOJKDDNMCF; // 0x148
		::UnityEngine::Material* IOFLHBAAPHJ; // 0x150
		::Il2CppArray<::UnityEngine::Vector3>* OPENGAEMFCB; // 0x158
		::System::Boolean GFKOLFMGAIM; // 0x160
		::System::Boolean IKDFKGEEAGE; // 0x161
		::System::Boolean KBGAJHIENPB; // 0x162
		::System::Byte _padding2[0x1];
		::Foundation::Coroutine::CoroutineHandle BOHCKOFEDBE; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void DoImageListDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET))(this);
		}

		::System::Void SetImageListMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET))(this);
		}

		::System::Void SetImageListRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetSpineMaterialTextureList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET))(this);
		}

		::System::Void LPPBDNJIKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_LPPBDNJIKFF_OFFSET))(this);
		}

		::System::Void OnSpineRTCreatedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET))(this);
		}

		::System::Void OnSpineRTReleasedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET))(this);
		}

		::System::Void BindRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET))(this);
		}

		::System::Void ClearRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET))(this);
		}

		::System::Void OCKODPCAGCL(::Spine::Unity::ISkeletonRenderer* CDEEOEIDNJL)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_OCKODPCAGCL_OFFSET))(this, CDEEOEIDNJL);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void BOPEJMDPLJN(::UnityEngine::Mesh* BEEGIMMGFPF, ::UnityEngine::Material* IOMCJECHGNG, ::UnityEngine::Texture* GLBPBKDPCBD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BOPEJMDPLJN_OFFSET))(this, BEEGIMMGFPF, IOMCJECHGNG, GLBPBKDPCBD);
		}

		::System::Void NIELGPAELHK(::System::Int32 ELJLCMBAFGM, ::Il2CppArray<::UnityEngine::Mesh*>* FLFAGFGMNGE, ::Il2CppArray<::UnityEngine::Material*>* BKGHHAKGPDN, ::Il2CppArray<::UnityEngine::Texture*>* JCPJFFHEAAK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_NIELGPAELHK_OFFSET))(this, ELJLCMBAFGM, FLFAGFGMNGE, BKGHHAKGPDN, JCPJFFHEAAK);
		}

		::System::Void FAODCJBEKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_FAODCJBEKMO_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void LALHOPKAGED(::Spine::Unity::ISkeletonRenderer* GOBFPGODCBO)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_LALHOPKAGED_OFFSET))(this, GOBFPGODCBO);
		}

		::System::Void CCJFEEEIEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CCJFEEEIEEK_OFFSET))(this);
		}

		::System::Void EGMEFOOEKLD(::Spine::Unity::SkeletonRendererInstruction* NCMKCHJPMBF)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_EGMEFOOEKLD_OFFSET))(this, NCMKCHJPMBF);
		}

		::System::Void NOLCFGMAOCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_NOLCFGMAOCA_OFFSET))(this);
		}

		::System::Void BODOCPIFGGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BODOCPIFGGO_OFFSET))(this);
		}

		::System::Void AMINPJEIFOJ(::UnityEngine::Camera* DPMFFFBLEDJ, ::UnityEngine::Vector3 CIHKEMEDDGC, ::UnityEngine::Vector3 JECMPDFFEBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AMINPJEIFOJ_OFFSET))(this, DPMFFFBLEDJ, CIHKEMEDDGC, JECMPDFFEBH);
		}

		::UnityEngine::Material* KFMGANKLDOJ(::UnityEngine::Texture* GLBPBKDPCBD)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_KFMGANKLDOJ_OFFSET))(this, GLBPBKDPCBD);
		}

		::UnityEngine::Material* ONLBIAIEKHE(::UnityEngine::Texture* GLBPBKDPCBD)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONLBIAIEKHE_OFFSET))(this, GLBPBKDPCBD);
		}
	};
}
