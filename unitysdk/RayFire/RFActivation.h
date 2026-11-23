#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireConnectivity; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RFACTIVATION_ACTIVATERIGID_OFFSET UNITYSDK_OFFSET(0x2952E20)
#define RAYFIRE_RFACTIVATION_ACTIVATESHARD_OFFSET UNITYSDK_OFFSET(0x2953560)
#define RAYFIRE_RFACTIVATION_ACTIVATIONOFFSETCOR_OFFSET UNITYSDK_OFFSET(0x2953810)
#define RAYFIRE_RFACTIVATION_ACTIVATIONVELOCITYCOR_OFFSET UNITYSDK_OFFSET(0x2953880)
#define RAYFIRE_RFACTIVATION_CHECKCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x2953910)
#define RAYFIRE_RFACTIVATION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29539A0)
#define RAYFIRE_RFACTIVATION_GET_HASUNY_OFFSET UNITYSDK_OFFSET(0x2954320)
#define RAYFIRE_RFACTIVATION_INACTIVECOR_OFFSET UNITYSDK_OFFSET(0x29539F0)
#define RAYFIRE_RFACTIVATION_OVERLAPACTIVATION_OFFSET UNITYSDK_OFFSET(0x2953A80)
#define RAYFIRE_RFACTIVATION_RESET_OFFSET UNITYSDK_OFFSET(0x29542E0)
#define RAYFIRE_RFACTIVATION__CTOR_OFFSET UNITYSDK_OFFSET(0x29542F0)

namespace RayFire
{
	inline static constexpr unsigned int RFActivation_TypeDefinitionIndex = 15409;

	class RFActivation : public ::System::Object
	{
	public:
		::System::Single byVelocity; // 0x10
		::System::Single byOffset; // 0x14
		::System::Single byDamage; // 0x18
		::System::Boolean byActivator; // 0x1C
		::System::Boolean byImpact; // 0x1D
		::System::Boolean byConnectivity; // 0x1E
		::System::Boolean unyielding; // 0x1F
		::System::Boolean activatable; // 0x20
		::System::Byte _padding0[0x7];
		::RayFire::RayfireConnectivity* connect; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* unyList; // 0x30
		::System::Boolean activated; // 0x38
		::System::Boolean inactiveCorState; // 0x39

		static ::System::Void ActivateShard(::RayFire::RFShard* A9B58EA01420571C, ::RayFire::RayfireRigidRoot* E88A7A0900B01658)
		{
			return ((::System::Void(*)(::RayFire::RFShard*, ::RayFire::RayfireRigidRoot*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_ACTIVATESHARD_OFFSET))(A9B58EA01420571C, E88A7A0900B01658);
		}

		::System::Void CopyFrom(::RayFire::RFActivation* B7C3196A6D8A6D0D)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFActivation*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_COPYFROM_OFFSET))(this, B7C3196A6D8A6D0D);
		}

		static ::System::Void OverlapActivation(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_OVERLAPACTIVATION_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Collections::IEnumerator* InactiveCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_INACTIVECOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Boolean get_HasUny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_GET_HASUNY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ActivationOffsetCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_ACTIVATIONOFFSETCOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Void CheckConnectivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_CHECKCONNECTIVITY_OFFSET))(this);
		}

		static ::System::Void ActivateRigid(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Boolean E9AAE645E1CD3B09)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_ACTIVATERIGID_OFFSET))(F2C7FF5A19F78852, E9AAE645E1CD3B09);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ActivationVelocityCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_ACTIVATIONVELOCITYCOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFACTIVATION_RESET_OFFSET))(this);
		}
	};
}
