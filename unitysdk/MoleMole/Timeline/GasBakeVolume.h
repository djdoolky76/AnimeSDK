#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/MoleMole/Timeline/GasBakeVolume_EPECNEECDIP.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEEXISTINGVOLUME_OFFSET UNITYSDK_OFFSET(0x13F247F0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEVOLUME_OFFSET UNITYSDK_OFFSET(0x13F22FB0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BLURSCATTERLEVEL_OFFSET UNITYSDK_OFFSET(0x13F21B40)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_CALCULATESPOTDIRECTIONPOINTLIGHTS_OFFSET UNITYSDK_OFFSET(0x13F1F840)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_CFEMDFAGBJO_OFFSET UNITYSDK_OFFSET(0x13F24A40)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPOSEFINALCOLOR_OFFSET UNITYSDK_OFFSET(0x13F20280)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEBLURREDEMISSIONVOLUME_OFFSET UNITYSDK_OFFSET(0x13F22660)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEINITIALEMISSIONVOLUME_OFFSET UNITYSDK_OFFSET(0x13F21310)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_CPIOOCBPGLO_OFFSET UNITYSDK_OFFSET(0x13F23210)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_DEDLOBOGHBO_OFFSET UNITYSDK_OFFSET(0x13F217C0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EDMOLPDALBM_1_OFFSET UNITYSDK_OFFSET(0x13F251B0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EDMOLPDALBM_OFFSET UNITYSDK_OFFSET(0x13F25330)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EJFEGPDLJGM_OFFSET UNITYSDK_OFFSET(0x13F20190)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EKDEOALMLGL_OFFSET UNITYSDK_OFFSET(0x13F20EF0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EVALSPOTDIRECTIONPOINTLIGHTS_OFFSET UNITYSDK_OFFSET(0x13F1E7B0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_GENERATEDENSITYLOD_OFFSET UNITYSDK_OFFSET(0x13F1E250)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_INITKERNEL_OFFSET UNITYSDK_OFFSET(0x13F1D5B0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F257F0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13F253D0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13F25390)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x13F25420)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_OOFGLLGANKC_OFFSET UNITYSDK_OFFSET(0x13F1DEC0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_PMMLCKKMBFE_OFFSET UNITYSDK_OFFSET(0x13F1F050)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_RELEASE_OFFSET UNITYSDK_OFFSET(0x13F24AE0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_RESET_OFFSET UNITYSDK_OFFSET(0x13F25470)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETINPUTVOLUME_OFFSET UNITYSDK_OFFSET(0x13F1D880)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETMATERIALTEXTURE_OFFSET UNITYSDK_OFFSET(0x13F24040)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F25B60)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x13F25840)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GasBakeVolume_TypeDefinitionIndex = 85699;

	class GasBakeVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CCEOHHOMFIA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GasBakeVolume_TypeDefinitionIndex)->GetStaticField(0x11520);
		}
		::UnityEngine::Rendering::CommandBuffer* MAKOIKJIIBD; // 0x18
		::UnityEngine::ComputeShader* bakeVolumeShader; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* lights; // 0x28
		::System::Boolean useDisabledLight; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 pointLightFalloff; // 0x34
		::System::Single densityScale; // 0x40
		::UnityEngine::Color smokeColor; // 0x44
		::System::Boolean smokeColorByDensity; // 0x54
		::System::Byte _padding1[0x3];
		::UnityEngine::Gradient* densityColorRamp; // 0x58
		::UnityEngine::Texture2D* NICBNKGEPEM; // 0x60
		::UnityEngine::Vector2 densityColorMinMax; // 0x68
		::UnityEngine::Color shadowColor; // 0x70
		::System::Single shadowDensity; // 0x80
		::System::Single ambientLightScale; // 0x84
		::System::Single ambientShadowScale; // 0x88
		::System::Byte _padding2[0x4];
		::UnityEngine::Cubemap* ambientSkyBox; // 0x90
		::System::Boolean enableScatter; // 0x98
		::System::Byte _padding3[0x3];
		::System::Single scatterIntensity; // 0x9C
		::UnityEngine::Gradient* scatterColorRamp; // 0xA0
		::UnityEngine::Texture2D* FHEEFIEFIDN; // 0xA8
		::UnityEngine::Vector2 scatterRampMinMax; // 0xB0
		::System::Boolean enableScatterBlur; // 0xB8
		::System::Byte _padding4[0x3];
		::System::Int32 scatterBlurSteps; // 0xBC
		::System::Single scatterBlurFallOff; // 0xC0
		::System::Int32 scatterBlurVoxels; // 0xC4
		::System::Boolean enableScatterMask; // 0xC8
		::System::Byte _padding5[0x3];
		::System::Single scatterMaskCenter; // 0xCC
		::System::Single scatterMaskWidth; // 0xD0
		::System::Boolean enableFire; // 0xD4
		::System::Byte _padding6[0x3];
		::System::Single fireIntensity; // 0xD8
		::System::Byte _padding7[0x4];
		::UnityEngine::Gradient* fireColorRamp; // 0xE0
		::UnityEngine::Texture2D* MGEBHJCPKOB; // 0xE8
		::UnityEngine::Vector2 fireRampMinMax; // 0xF0
		::System::Boolean enableFireMask; // 0xF8
		::System::Byte _padding8[0x3];
		::System::Single fireMaskCenter; // 0xFC
		::System::Single fireMaskWidth; // 0x100
		::System::Boolean smoothShade; // 0x104
		::System::Byte _padding9[0x3];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Light*>* JGJEFKNNJEA; // 0x108
		::UnityEngine::RenderTexture* JDBJLCBPGMM; // 0x110
		::Il2CppArray<::UnityEngine::RenderTexture*>* ANOPOHIOODO; // 0x118
		::UnityEngine::RenderTexture* BLGOIIEEGDN; // 0x120
		::UnityEngine::RenderTexture* CEFJOCLJBFH; // 0x128
		::Il2CppArray<::UnityEngine::RenderTexture*>* FLIBKJFFHAB; // 0x130
		::Il2CppArray<::UnityEngine::RenderTexture*>* LGKNNNCKDDC; // 0x138
		::Il2CppArray<::System::Single>* MEJPCPONJMP; // 0x140
		::Il2CppArray<::System::Single>* GGHCKPHHOLB; // 0x148
		::Il2CppArray<::UnityEngine::Vector3Int>* MHONKCEBIIF; // 0x150
		::UnityEngine::ComputeBuffer* IOIPFHBLJKC; // 0x158
		::System::Int32 LALEGEOBNLK; // 0x160
		::System::Int32 LPMCPCMGOLD; // 0x164
		::System::Int32 DKODPICEJPH; // 0x168
		::System::Int32 EMHKPNLINFE; // 0x16C
		::System::Int32 HOKMPFPGCOB; // 0x170
		::System::Int32 JAJEAFCNDBO; // 0x174
		::System::Int32 HMNLOCGIBPD; // 0x178
		::System::Int32 CODJMEFKEPM; // 0x17C
		::System::Int32 BPOOIPDLOIP; // 0x180
		::System::Int32 GPLKAJGIKNK; // 0x184
		::UnityEngine::MaterialPropertyBlock* LOBJBDIGEKA; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME__CCTOR_OFFSET))();
		}

		::System::Void InitKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_INITKERNEL_OFFSET))(this);
		}

		::System::Void SetInputVolume(::UnityEngine::RenderTexture* GFIPKHNOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETINPUTVOLUME_OFFSET))(this, GFIPKHNOCKA);
		}

		::System::Void GenerateDensityLOD(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_GENERATEDENSITYLOD_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void EvalSpotDirectionPointLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EVALSPOTDIRECTIONPOINTLIGHTS_OFFSET))(this);
		}

		::System::Void CalculateSpotDirectionPointLights(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_CALCULATESPOTDIRECTIONPOINTLIGHTS_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void ComposeFinalColor(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPOSEFINALCOLOR_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void ComputeInitialEmissionVolume(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEINITIALEMISSIONVOLUME_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void BlurScatterLevel(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO, ::System::Int32 MOBNMDEDJIP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BLURSCATTERLEVEL_OFFSET))(this, DMPEOJCCCLO, MOBNMDEDJIP);
		}

		::System::Void ComputeBlurredEmissionVolume(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEBLURREDEMISSIONVOLUME_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void BakeVolume(::UnityEngine::RenderTexture* GFIPKHNOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEVOLUME_OFFSET))(this, GFIPKHNOCKA);
		}

		::System::Void BakeExistingVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEEXISTINGVOLUME_OFFSET))(this);
		}

		::System::Void SetMaterialTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETMATERIALTEXTURE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_RELEASE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_RESET_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_LATEUPDATE_OFFSET))(this);
		}

		::MoleMole::Timeline::GasBakeVolume_EPECNEECDIP PMMLCKKMBFE(::UnityEngine::Light* DPGFPHIMDEL)
		{
			return ((::MoleMole::Timeline::GasBakeVolume_EPECNEECDIP(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_PMMLCKKMBFE_OFFSET))(this, DPGFPHIMDEL);
		}

		::System::Void EDMOLPDALBM(::UnityEngine::ComputeBuffer*& DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EDMOLPDALBM_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void EKDEOALMLGL(::UnityEngine::Texture2D*& FMHIDFFGNGC, ::UnityEngine::Gradient* HENDAMBFAIN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*&, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EKDEOALMLGL_OFFSET))(this, FMHIDFFGNGC, HENDAMBFAIN);
		}

		::System::Void CPIOOCBPGLO(::UnityEngine::Rendering::CommandBuffer* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_CPIOOCBPGLO_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void EDMOLPDALBM_1(::UnityEngine::RenderTexture*& FJEEKLKBFHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EDMOLPDALBM_1_OFFSET))(this, FJEEKLKBFHN);
		}

		::System::Void DEDLOBOGHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_DEDLOBOGHBO_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* EJFEGPDLJGM(::UnityEngine::Vector3 EJCBEJMGFAJ)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EJFEGPDLJGM_OFFSET))(this, EJCBEJMGFAJ);
		}

		::UnityEngine::Vector4 CFEMDFAGBJO(::UnityEngine::Vector3 HFMHOELKCAJ, ::System::Single ALPANKAJAGK)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_CFEMDFAGBJO_OFFSET))(this, HFMHOELKCAJ, ALPANKAJAGK);
		}

		::UnityEngine::RenderTexture* OOFGLLGANKC(::UnityEngine::RenderTexture* FKDLJCGEBNI, ::UnityEngine::Vector3Int AIBBIMPJOOP, ::UnityEngine::RenderTextureFormat PAKEJIKLFBH, ::UnityEngine::RenderTextureReadWrite KADLALDPBNK)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3Int, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_OOFGLLGANKC_OFFSET))(this, FKDLJCGEBNI, AIBBIMPJOOP, PAKEJIKLFBH, KADLALDPBNK);
		}
	};
}
