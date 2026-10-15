#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PPAFCLJOBBM;

#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BD4E0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xE2BD4B0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xE2BD490)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0xE2BD150)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2BD100)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_PDHLFFMCNLO_OFFSET UNITYSDK_OFFSET(0xE2BD3E0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_REGISTER_OFFSET UNITYSDK_OFFSET(0xE2BD2D0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xE2BD4D0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xE2BD4A0)

namespace RPG::Client::TrainParty::Mapping
{
	inline static constexpr unsigned int SlotPosMapping_TypeDefinitionIndex = 74375;

	class SlotPosMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _SlotID_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Offset_k__BackingField; // 0x1C
		// static const ::System::Object HFKPKBCNELG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_REGISTER_OFFSET))(this);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_SLOTID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_OFFSET_OFFSET))(this, a1);
		}

		::PPAFCLJOBBM* PDHLFFMCNLO()
		{
			return ((::PPAFCLJOBBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_PDHLFFMCNLO_OFFSET))(this);
		}

	};
}
