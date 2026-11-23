#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/AAC3287C47C3DDE5.h"
#include "unitysdk/RayFire/RFFade_A3FA61906B48A271.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFFADE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29F6E50)
#define RAYFIRE_RFFADE_DEMOLITIONFADE_OFFSET UNITYSDK_OFFSET(0x29F6EB0)
#define RAYFIRE_RFFADE_FADECHECK_OFFSET UNITYSDK_OFFSET(0x29F7000)
#define RAYFIRE_RFFADE_FADEEXCLUDE_1_OFFSET UNITYSDK_OFFSET(0x29F7040)
#define RAYFIRE_RFFADE_FADEEXCLUDE_OFFSET UNITYSDK_OFFSET(0x29F7160)
#define RAYFIRE_RFFADE_FADEMOVEDOWN_1_OFFSET UNITYSDK_OFFSET(0x29F7240)
#define RAYFIRE_RFFADE_FADEMOVEDOWN_OFFSET UNITYSDK_OFFSET(0x29F72D0)
#define RAYFIRE_RFFADE_FADESCALEDOWNCOR_1_OFFSET UNITYSDK_OFFSET(0x29F7340)
#define RAYFIRE_RFFADE_FADESCALEDOWNCOR_OFFSET UNITYSDK_OFFSET(0x29F73B0)
#define RAYFIRE_RFFADE_FADE_1_OFFSET UNITYSDK_OFFSET(0x29F7440)
#define RAYFIRE_RFFADE_FADE_OFFSET UNITYSDK_OFFSET(0x29F7500)
#define RAYFIRE_RFFADE_LIVINGCOR_1_OFFSET UNITYSDK_OFFSET(0x29F7690)
#define RAYFIRE_RFFADE_LIVINGCOR_OFFSET UNITYSDK_OFFSET(0x29F7600)
#define RAYFIRE_RFFADE_RESET_OFFSET UNITYSDK_OFFSET(0x29F7720)
#define RAYFIRE_RFFADE_SIMULATIONCOR_OFFSET UNITYSDK_OFFSET(0x29F7730)
#define RAYFIRE_RFFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x29F77A0)

namespace RayFire
{
	inline static constexpr unsigned int RFFade_TypeDefinitionIndex = 15791;

	class RFFade : public ::System::Object
	{
	public:
		::System::Boolean onDemolition; // 0x10
		::System::Boolean onActivation; // 0x11
		::System::Byte _padding0[0x2];
		::RayFire::RFFade_A3FA61906B48A271 lifeType; // 0x14
		::System::Single lifeTime; // 0x18
		::System::Single lifeVariation; // 0x1C
		::E33DBE3D45A5731A::AAC3287C47C3DDE5 fadeType; // 0x20
		::System::Single fadeTime; // 0x24
		::System::Single sizeFilter; // 0x28
		::System::Int32 state; // 0x2C
		::System::Boolean stop; // 0x30
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 position; // 0x34

		static ::System::Collections::IEnumerator* FadeMoveDown(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADEMOVEDOWN_OFFSET))(E9D1ABA13C0D414F);
		}

		static ::System::Void FadeExclude(::RayFire::RayfireRigidRoot* A525E46A9CD93677, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADEEXCLUDE_OFFSET))(A525E46A9CD93677, A9B58EA01420571C);
		}

		static ::System::Void FadeExclude_1(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADEEXCLUDE_1_OFFSET))(E9D1ABA13C0D414F);
		}

		::System::Void DemolitionFade(::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* B82C3A0E86A0498C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_DEMOLITIONFADE_OFFSET))(this, B82C3A0E86A0498C);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_RESET_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFFade* E8ADD7DED0859197)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFFade*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_COPYFROM_OFFSET))(this, E8ADD7DED0859197);
		}

		static ::System::Boolean FadeCheck(::UnityEngine::GameObject* AD1247287D2D9217, ::RayFire::RFFade* FFD8EDB2E59B8093)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::RayFire::RFFade*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADECHECK_OFFSET))(AD1247287D2D9217, FFD8EDB2E59B8093);
		}

		static ::System::Collections::IEnumerator* FadeScaleDownCor(::RayFire::RayfireRigidRoot* A525E46A9CD93677, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADESCALEDOWNCOR_OFFSET))(A525E46A9CD93677, A9B58EA01420571C);
		}

		static ::System::Collections::IEnumerator* FadeScaleDownCor_1(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADESCALEDOWNCOR_1_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Collections::IEnumerator* LivingCor(::RayFire::RayfireRigidRoot* A525E46A9CD93677, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_LIVINGCOR_OFFSET))(this, A525E46A9CD93677, A9B58EA01420571C);
		}

		static ::System::Void Fade(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADE_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Collections::IEnumerator* FadeMoveDown_1(::RayFire::RayfireRigidRoot* A525E46A9CD93677, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADEMOVEDOWN_1_OFFSET))(A525E46A9CD93677, A9B58EA01420571C);
		}

		::System::Collections::IEnumerator* LivingCor_1(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_LIVINGCOR_1_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void Fade_1(::RayFire::RayfireRigidRoot* F2C7FF5A19F78852, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_FADE_1_OFFSET))(F2C7FF5A19F78852, A9B58EA01420571C);
		}

		static ::System::Collections::IEnumerator* SimulationCor(::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_SIMULATIONCOR_OFFSET))(F64C72FFEBBF3A94);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE__CTOR_OFFSET))(this);
		}
	};
}
