#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOCAPSULEMESHRENDERER_ICAMFADOIHC_OFFSET UNITYSDK_OFFSET(0x1A915A70)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A914730)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_JDKPJBMKKEI_OFFSET UNITYSDK_OFFSET(0x1A915780)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_JLOCGHHLKBM_OFFSET UNITYSDK_OFFSET(0x1A914940)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A914470)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A9154C0)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A915730)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCapsuleMeshRenderer_TypeDefinitionIndex = 91371;

	class MonoCapsuleMeshRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 HBENONOCOCF = 0x10; // 0x0
		// static const ::System::Int32 DOBMJGMKFIN = 0x8; // 0x0
		::UnityEngine::Transform* HPEFMJFCIHN; // 0x18
		::UnityEngine::Vector3 MKEGNKPNOAB; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* BMCABGEMEOP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::CapsuleCollider* DKMCMJOACMB, ::UnityEngine::Transform* HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::CapsuleCollider*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_INITIALIZE_OFFSET))(this, AEIHFBNNLBP, DKMCMJOACMB, HODAIDNDKHD);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_ONDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* JLOCGHHLKBM(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 MBPAGFGBAFA, ::System::Int32 CHBMGIHCJPJ)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_JLOCGHHLKBM_OFFSET))(NCCDJLDKFGA, KKAMDFNMMJH, MBPAGFGBAFA, CHBMGIHCJPJ);
		}

		static ::System::Void ICAMFADOIHC(::Il2CppArray<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::Il2CppArray<::UnityEngine::Vector3>* AGLPILADKGJ, ::Il2CppArray<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Int32& FCHPEBMHEBA, ::System::Int32 MBPAGFGBAFA, ::System::Single CKAPDIELIEL, ::System::Single BFMMEICFNCD, ::System::Single MMFKCJOPJLC, ::System::Single MAFFLKEBDKF, ::System::Boolean NGKPICICOHL)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32&, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_ICAMFADOIHC_OFFSET))(DDCMDFBCOCJ, AGLPILADKGJ, CHPCHCGAFIN, FCHPEBMHEBA, MBPAGFGBAFA, CKAPDIELIEL, BFMMEICFNCD, MMFKCJOPJLC, MAFFLKEBDKF, NGKPICICOHL);
		}

		static ::System::Void JDKPJBMKKEI(::Il2CppArray<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::Il2CppArray<::UnityEngine::Vector3>* AGLPILADKGJ, ::Il2CppArray<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Int32& FCHPEBMHEBA, ::System::Int32 MBPAGFGBAFA, ::System::Int32 CHBMGIHCJPJ, ::System::Single NCCDJLDKFGA, ::System::Single FGAGIIBLHDD, ::System::Boolean NGKPICICOHL)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_JDKPJBMKKEI_OFFSET))(DDCMDFBCOCJ, AGLPILADKGJ, CHPCHCGAFIN, FCHPEBMHEBA, MBPAGFGBAFA, CHBMGIHCJPJ, NCCDJLDKFGA, FGAGIIBLHDD, NGKPICICOHL);
		}
	};
}
