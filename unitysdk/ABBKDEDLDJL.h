#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MonoWavingBlockControl; }
namespace UnityEngine { class MonoBehaviour; }

#define ABBKDEDLDJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB74CBC0)
#define ABBKDEDLDJL_EBKDIENLOCE_OFFSET UNITYSDK_OFFSET(0xB74A200)
#define ABBKDEDLDJL_EDBLHLLMCIN_OFFSET UNITYSDK_OFFSET(0xB7485A0)
#define ABBKDEDLDJL_GBEAMKCHEEK_OFFSET UNITYSDK_OFFSET(0xB749A70)
#define ABBKDEDLDJL_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xB74A260)
#define ABBKDEDLDJL_HJODIBJECBJ_OFFSET UNITYSDK_OFFSET(0xB74C480)
#define ABBKDEDLDJL_HMEOPKBGBIA_OFFSET UNITYSDK_OFFSET(0xB748DC0)
#define ABBKDEDLDJL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB74A190)
#define ABBKDEDLDJL_KKCBNAKNPJI_OFFSET UNITYSDK_OFFSET(0xB74A350)
#define ABBKDEDLDJL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB748500)
#define ABBKDEDLDJL_LFCBOIGIBLP_OFFSET UNITYSDK_OFFSET(0xB7493A0)

inline static constexpr unsigned int ABBKDEDLDJL_TypeDefinitionIndex = 72347;

	class ABBKDEDLDJL : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Vector3 BKAJJAJNHJF; // 0x18
		::UnityEngine::Vector3 ANJIOODAJJA; // 0x24
		::System::Single KIGOMFLMAHF; // 0x30
		::UnityEngine::Vector4 LMBEDKPIDGP; // 0x34
		::System::Boolean MBKFKOHFPAA; // 0x44
		::System::Boolean BHIGLOOKBJC; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single ADFODJAPMHI; // 0x48
		::System::Single JOAGCKLELBO; // 0x4C
		::System::Single IONKDFCLAKL; // 0x50
		::System::Single AELJCBJLGOF; // 0x54
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
