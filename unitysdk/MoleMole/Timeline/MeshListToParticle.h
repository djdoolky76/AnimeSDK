#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALEKKFLAIND.h"
#include "unitysdk/MoleMole/Timeline/MeshListToParticle_ONJHMKCAFNE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_FGFBEFFLMJI_OFFSET UNITYSDK_OFFSET(0x19CF4D90)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19CF55E0)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETSCATTERPOINTS_OFFSET UNITYSDK_OFFSET(0x19CF5590)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GLNENNJELJM_OFFSET UNITYSDK_OFFSET(0x19CF3240)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_JBMNLDPOABG_OFFSET UNITYSDK_OFFSET(0x19CF4940)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_KLCMBLACOCJ_OFFSET UNITYSDK_OFFSET(0x19CF3050)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19CF5620)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19CF5660)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_PROCESSMESH_OFFSET UNITYSDK_OFFSET(0x19CF2E10)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF57A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MeshListToParticle_TypeDefinitionIndex = 44983;

	class MeshListToParticle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 numberOfPoints; // 0x18
		::MoleMole::Timeline::MeshListToParticle_ONJHMKCAFNE meshType; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* meshObjects; // 0x20
		::UnityEngine::Camera* meshCamera; // 0x28
		::System::Single pointSize; // 0x30
		::System::Boolean showPoints; // 0x34
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* ABKDEJOLLDE; // 0x38
		::UnityEngine::Transform* ALPBJEEMIME; // 0x40
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* LBADHAJGJML; // 0x48
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* OPEGIMILMGP; // 0x50
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* AFNLJINKGCG; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* BNBJOGFBBFF; // 0x60
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* EICBLPCCNJP; // 0x68
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* BPADDKMLJDF; // 0x70
		::System::Boolean LGBILNJPPCH; // 0x78
		::System::Byte _padding1[0x3];
		::System::Single ALDPOLIFLOB; // 0x7C
		::System::Collections::Generic::List_1<::System::Boolean>* ENJFINNHIBO; // 0x80
		::System::Single JJFCAMGPMMK; // 0x88
		::System::UInt32 PEAJINCHECB; // 0x8C
		::Il2CppArray<::ALEKKFLAIND>* meshPoints; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE__CTOR_OFFSET))(this);
		}

		::System::Boolean processMesh(::System::Single HMFMKLLIFBM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_PROCESSMESH_OFFSET))(this, HMFMKLLIFBM);
		}

		::Il2CppArray<::ALEKKFLAIND>* GetScatterPoints()
		{
			return ((::Il2CppArray<::ALEKKFLAIND>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETSCATTERPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMeshTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETMESHTRANSFORM_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void JBMNLDPOABG(::System::Int32 BIONMKKFOEJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_JBMNLDPOABG_OFFSET))(this, BIONMKKFOEJ);
		}

		::System::Boolean GLNENNJELJM(::System::Single HMFMKLLIFBM, ::UnityEngine::GameObject* MFGOPJPGBAJ, ::System::Int32 BIONMKKFOEJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GLNENNJELJM_OFFSET))(this, HMFMKLLIFBM, MFGOPJPGBAJ, BIONMKKFOEJ);
		}

		::System::Void KLCMBLACOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_KLCMBLACOCJ_OFFSET))(this);
		}

		::System::Void FGFBEFFLMJI(::System::Int32 BIONMKKFOEJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_FGFBEFFLMJI_OFFSET))(this, BIONMKKFOEJ);
		}
	};
}
