#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_ATTACHATLASTFRAME_OFFSET UNITYSDK_OFFSET(0xDC9A3F0)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC9A790)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDC9A2C0)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_EFLPFIAHFJM_OFFSET UNITYSDK_OFFSET(0xDC9A6E0)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDC99C30)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYADDRING_OFFSET UNITYSDK_OFFSET(0xDC9A460)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYPERSISTENT_OFFSET UNITYSDK_OFFSET(0xDC9A380)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYSWITCHCOLOR_OFFSET UNITYSDK_OFFSET(0xDC9A650)
#define RPG_CLIENT_GRIDFIGHTSTAREFFECT_SETRINGLOOPVISIBLE_OFFSET UNITYSDK_OFFSET(0xDC9A1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStarEffect_TypeDefinitionIndex = 66031;

	class GridFightStarEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x38
		::UnityEngine::Animation* CENIFJMLDCE; // 0x40
		::RPG::Client::MonoAnimationTrigger* PIMECJEBKNG; // 0x48
		::UnityEngine::Transform* GMHLEHCKJNI; // 0x50
		// static const ::System::String* OAIBIFOGGJH; // 0x0
		// static const ::System::String* FNLJNJPOJIG; // 0x0
		// static const ::System::String* CCAOCBNPKCD; // 0x0
		// static const ::System::String* IIEFJGKODFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void PlayPersistent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYPERSISTENT_OFFSET))(this);
		}

		::System::Void AttachAtLastFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_ATTACHATLASTFRAME_OFFSET))(this);
		}

		::System::Void PlayAddRing(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYADDRING_OFFSET))(this, a1);
		}

		::System::Void PlaySwitchColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_PLAYSWITCHCOLOR_OFFSET))(this);
		}

		::System::Void SetRingLoopVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_SETRINGLOOPVISIBLE_OFFSET))(this, a1);
		}

		::System::Void EFLPFIAHFJM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAREFFECT_EFLPFIAHFJM_OFFSET))(this, a1);
		}

	};
}
