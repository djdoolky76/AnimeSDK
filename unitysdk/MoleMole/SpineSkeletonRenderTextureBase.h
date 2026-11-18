#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class GMMOHDLFNOL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AKLMCMIKIGK_OFFSET UNITYSDK_OFFSET(0x14B1EF20)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14B1DA70)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_CREATESPINERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x14B1DE30)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ECPIJFCFDNO_OFFSET UNITYSDK_OFFSET(0x14B1E1A0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_IEMHIKPKAJP_OFFSET UNITYSDK_OFFSET(0x14B1F200)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_IFLMIPPPBCK_OFFSET UNITYSDK_OFFSET(0x14B1F7E0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_INIDLMEMLIO_OFFSET UNITYSDK_OFFSET(0x14B1E450)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_MCHHDKFMFKI_OFFSET UNITYSDK_OFFSET(0x14B1ED10)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_NFOIFKJIJMI_OFFSET UNITYSDK_OFFSET(0x14B1EC30)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B1DB10)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_PAGGGFDEIFA_OFFSET UNITYSDK_OFFSET(0x14B1E3D0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_PODCFOFIOEM_OFFSET UNITYSDK_OFFSET(0x14B1DFF0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_RELEASESPINERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x14B1DDC0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1DF90)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonRenderTextureBase_TypeDefinitionIndex = 84511;

	class SpineSkeletonRenderTextureBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 maxRenderTextureSize; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* quad; // 0x20
		::System::Boolean useDeviceSize; // 0x28
		::System::Byte _padding1[0x7];
		::UnityEngine::Mesh* JMOCBIDDAMO; // 0x30
		::GMMOHDLFNOL* spineRTUnit; // 0x38
		::UnityEngine::RenderTexture* renderTexture; // 0x40
		::UnityEngine::Camera* targetCamera; // 0x48
		::UnityEngine::Rendering::CommandBuffer* FPILJJCDPBB; // 0x50
		::MoleMole::Vector2Int BNCHENOPKCB; // 0x58
		::MoleMole::Vector2Int LJBJJNGOFBK; // 0x60
		::MoleMole::Vector2Int MKJFIBBFAKO; // 0x68
		::UnityEngine::Vector2 EBEBHFGDMGP; // 0x70
		::UnityEngine::Vector3 HGLEFNOBCNK; // 0x78
		::UnityEngine::Vector3 LMPKONMKAJN; // 0x84
		::UnityEngine::Vector3 NDDCKIGLBJB; // 0x90
		::UnityEngine::Vector3 GIMGKGLGOEA; // 0x9C
		::UnityEngine::Vector2 BDBBIGGDHCB; // 0xA8
		::UnityEngine::Vector2 NLCAKNAAIKA; // 0xB0
		::UnityEngine::Vector2 KIFLMNODJMJ; // 0xB8
		::UnityEngine::Vector2 MEGAFCEGOEE; // 0xC0
		::System::Action* OnSpineRTCreated; // 0xC8
		::System::Action* OnSpineRTReleased; // 0xD0
		::UnityEngine::RectTransform* JJHAPIGOMLE; // 0xD8
		::UnityEngine::Vector2 HOJILPONKLD; // 0xE0
		::UnityEngine::Vector2 KILODEMAKDE; // 0xE8
		::System::Boolean IMMOELDJLKO; // 0xF0
		::System::Byte _padding2[0x3];
		::Foundation::Coroutine::CoroutineHandle CELOOICLIOA; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CreateSpineRenderTexture(::MoleMole::Vector2Int PBLHDELHONL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_CREATESPINERENDERTEXTURE_OFFSET))(this, PBLHDELHONL);
		}

		::System::Void ReleaseSpineRenderTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_RELEASESPINERENDERTEXTURE_OFFSET))(this);
		}

		static ::System::Void PODCFOFIOEM(::UnityEngine::RectTransform* FJEEKLKBFHN, ::UnityEngine::Vector2 BEPMDFENBMH, ::UnityEngine::Vector2 JCDPMKNIIPA)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_PODCFOFIOEM_OFFSET))(FJEEKLKBFHN, BEPMDFENBMH, JCDPMKNIIPA);
		}

		::System::Void ECPIJFCFDNO(::UnityEngine::RectTransform* FJEEKLKBFHN, ::UnityEngine::Vector2 BEPMDFENBMH, ::UnityEngine::Vector2 JCDPMKNIIPA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ECPIJFCFDNO_OFFSET))(this, FJEEKLKBFHN, BEPMDFENBMH, JCDPMKNIIPA);
		}

		::System::Void INIDLMEMLIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_INIDLMEMLIO_OFFSET))(this);
		}

		::System::Void NFOIFKJIJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_NFOIFKJIJMI_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 MCHHDKFMFKI(::UnityEngine::Camera* DPMFFFBLEDJ, ::UnityEngine::Vector3 CIHKEMEDDGC, ::UnityEngine::Vector3 JECMPDFFEBH, ::UnityEngine::Vector2 NKDADHOLDPK)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_MCHHDKFMFKI_OFFSET))(this, DPMFFFBLEDJ, CIHKEMEDDGC, JECMPDFFEBH, NKDADHOLDPK);
		}

		::UnityEngine::Matrix4x4 AKLMCMIKIGK(::UnityEngine::Camera* DPMFFFBLEDJ, ::UnityEngine::Vector3 CIHKEMEDDGC, ::UnityEngine::Vector3 JECMPDFFEBH, ::UnityEngine::Vector2 NKDADHOLDPK)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AKLMCMIKIGK_OFFSET))(this, DPMFFFBLEDJ, CIHKEMEDDGC, JECMPDFFEBH, NKDADHOLDPK);
		}

		::System::Void IEMHIKPKAJP(::UnityEngine::Vector3& CIHKEMEDDGC, ::UnityEngine::Vector3& JECMPDFFEBH, ::UnityEngine::Camera* DPMFFFBLEDJ, ::UnityEngine::Vector3 EHHOKNLPOJH, ::UnityEngine::Vector3 PHEPNCGOJOH, ::UnityEngine::Vector3 BMECLHIFFEG, ::UnityEngine::Vector3 IJJFGPGCOGD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_IEMHIKPKAJP_OFFSET))(this, CIHKEMEDDGC, JECMPDFFEBH, DPMFFFBLEDJ, EHHOKNLPOJH, PHEPNCGOJOH, BMECLHIFFEG, IJJFGPGCOGD);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* PAGGGFDEIFA()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_PAGGGFDEIFA_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 IFLMIPPPBCK(::UnityEngine::Camera* DPMFFFBLEDJ, ::UnityEngine::Vector3 CIHKEMEDDGC, ::UnityEngine::Vector3 JECMPDFFEBH, ::UnityEngine::Vector2 NKDADHOLDPK)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_IFLMIPPPBCK_OFFSET))(this, DPMFFFBLEDJ, CIHKEMEDDGC, JECMPDFFEBH, NKDADHOLDPK);
		}
	};
}
