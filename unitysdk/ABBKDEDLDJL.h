#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MonoWavingBlockControl; }
namespace UnityEngine { class MonoBehaviour; }

#define ABBKDEDLDJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EA370)
#define ABBKDEDLDJL_EBKDIENLOCE_OFFSET UNITYSDK_OFFSET(0xB0E79B0)
#define ABBKDEDLDJL_EDBLHLLMCIN_OFFSET UNITYSDK_OFFSET(0xB0E5D50)
#define ABBKDEDLDJL_GBEAMKCHEEK_OFFSET UNITYSDK_OFFSET(0xB0E7220)
#define ABBKDEDLDJL_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xB0E7A10)
#define ABBKDEDLDJL_HJODIBJECBJ_OFFSET UNITYSDK_OFFSET(0xB0E9C30)
#define ABBKDEDLDJL_HMEOPKBGBIA_OFFSET UNITYSDK_OFFSET(0xB0E6570)
#define ABBKDEDLDJL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB0E7940)
#define ABBKDEDLDJL_KKCBNAKNPJI_OFFSET UNITYSDK_OFFSET(0xB0E7B00)
#define ABBKDEDLDJL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0E5CB0)
#define ABBKDEDLDJL_LFCBOIGIBLP_OFFSET UNITYSDK_OFFSET(0xB0E6B50)

	class ABBKDEDLDJL : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single AELJCBJLGOF; // 0x18
		::System::Single JOAGCKLELBO; // 0x1C
		::System::Single KIGOMFLMAHF; // 0x20
		::System::Boolean BHIGLOOKBJC; // 0x24
		::System::Boolean MBKFKOHFPAA; // 0x25
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 ANJIOODAJJA; // 0x28
		::UnityEngine::Vector3 BKAJJAJNHJF; // 0x34
		::System::Single ADFODJAPMHI; // 0x40
		::System::Single IONKDFCLAKL; // 0x44
		::UnityEngine::Vector4 LMBEDKPIDGP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HMEOPKBGBIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_HMEOPKBGBIA_OFFSET))(this);
		}

		::System::Void LFCBOIGIBLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_LFCBOIGIBLP_OFFSET))(this);
		}

		::System::Void EBKDIENLOCE(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_EBKDIENLOCE_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void EDBLHLLMCIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_EDBLHLLMCIN_OFFSET))(this);
		}

		::System::Void HJODIBJECBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_HJODIBJECBJ_OFFSET))(this);
		}

		::System::Void KKCBNAKNPJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_KKCBNAKNPJI_OFFSET))(this);
		}

		::System::Void GBEAMKCHEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_GBEAMKCHEEK_OFFSET))(this);
		}

		::RPG::Client::MonoWavingBlockControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoWavingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKDEDLDJL_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
