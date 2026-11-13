#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class FiveDimStaffRollUISlot; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_AKCIFIFGCLO_OFFSET UNITYSDK_OFFSET(0x19AD8000)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19AD7110)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_BDBOGJHLEIG_OFFSET UNITYSDK_OFFSET(0x19AD7190)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x19AD8870)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_DKFIHMMDGHA_OFFSET UNITYSDK_OFFSET(0x19AD87B0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_FNFMADMFEOI_OFFSET UNITYSDK_OFFSET(0x19AD82B0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_JGAMBLHILEC_OFFSET UNITYSDK_OFFSET(0x19AD8150)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19AD7360)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x19AD7440)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19AD7FB0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x19AD8100)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_TRYUPDATETRIGGERBYUIRECT_OFFSET UNITYSDK_OFFSET(0x19AD7640)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_UPDATETRIGGERSIZE_1_OFFSET UNITYSDK_OFFSET(0x19AD7490)
#define RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_UPDATETRIGGERSIZE_OFFSET UNITYSDK_OFFSET(0x19AD73B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffEntryTrigger_TypeDefinitionIndex = 61684;

	class FiveDimStaffEntryTrigger : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::String* EventOnPlayerEnter; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::BoxCollider* GALAHGAJODG; // 0x28
		::RPG::Client::FiveDimStaffRollUISlot* OIKMINGBJKF; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* AKDMEEJLCEK; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* MGAEGAKKDMD; // 0x40
		::System::Boolean AFDHHDOAGFE; // 0x48
		::System::Boolean KALLEBJIMBI; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 BBFPINNMKPK; // 0x4C
		// static const ::System::Object KEJOEDFNJEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void UpdateTriggerSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_UPDATETRIGGERSIZE_OFFSET))(this);
		}

		::System::Void UpdateTriggerSize_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_UPDATETRIGGERSIZE_1_OFFSET))(this, a1);
		}

		::System::Boolean TryUpdateTriggerByUIRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_TRYUPDATETRIGGERBYUIRECT_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void AKCIFIFGCLO(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_AKCIFIFGCLO_OFFSET))(this, a1);
		}

		::System::Boolean FNFMADMFEOI(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_FNFMADMFEOI_OFFSET))(this, a1);
		}

		static ::System::Boolean DKFIHMMDGHA(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_DKFIHMMDGHA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean JGAMBLHILEC(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_JGAMBLHILEC_OFFSET))(this, a1);
		}

		::System::Void BDBOGJHLEIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRYTRIGGER_BDBOGJHLEIG_OFFSET))(this);
		}

	};
}
