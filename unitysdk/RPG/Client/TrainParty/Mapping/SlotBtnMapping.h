#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PPAFCLJOBBM;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2BD0E0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BD0D0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE2BCC70)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2BD000)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_PDHLFFMCNLO_OFFSET UNITYSDK_OFFSET(0xE2BCBC0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_START_OFFSET UNITYSDK_OFFSET(0xE2BC900)

namespace RPG::Client::TrainParty::Mapping
{
	inline static constexpr unsigned int SlotBtnMapping_TypeDefinitionIndex = 74374;

	class SlotBtnMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _SlotID; // 0x18
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0x1C
		::UnityEngine::Transform* OJAHLJGABMJ; // 0x28
		::UnityEngine::RectTransform* BDCKIHNMDDK; // 0x30
		::UnityEngine::RectTransform* EODDCCMLIHH; // 0x38
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x40
		static ::UnityEngine::Vector3* StaticGet_FIHGKAPBIKF()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.TrainParty.Mapping", "SlotBtnMapping")->GetStaticField(0x6020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_ONDESTROY_OFFSET))(this);
		}

		::PPAFCLJOBBM* PDHLFFMCNLO()
		{
			return ((::PPAFCLJOBBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_PDHLFFMCNLO_OFFSET))(this);
		}

	};
}
