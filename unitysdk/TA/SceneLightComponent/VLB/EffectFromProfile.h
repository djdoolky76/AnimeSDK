#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace TA::SceneLightComponent::VLB { class EffectAbstractBase; }

#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x28B6570)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_ACCB502E132795B3_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_B03D768AA51B6616_OFFSET UNITYSDK_OFFSET(0x28B6470)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28B6620)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_FDD33A3E036CA6EB_OFFSET UNITYSDK_OFFSET(0x28B67F0)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int EffectFromProfile_TypeDefinitionIndex = 16280;

	class EffectFromProfile : public ::UnityEngine::MonoBehaviour
	{
	public:
		::TA::SceneLightComponent::VLB::EffectAbstractBase* m_EffectProfile; // 0x20
		::TA::SceneLightComponent::VLB::EffectAbstractBase* E6EFE20493E1D1BE; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void B03D768AA51B6616()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_B03D768AA51B6616_OFFSET))(this);
		}

		::System::Void FDD33A3E036CA6EB(::TA::SceneLightComponent::VLB::EffectAbstractBase* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::EffectAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_FDD33A3E036CA6EB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::TA::SceneLightComponent::VLB::EffectAbstractBase* ACCB502E132795B3()
		{
			return ((::TA::SceneLightComponent::VLB::EffectAbstractBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_ACCB502E132795B3_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFROMPROFILE_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
