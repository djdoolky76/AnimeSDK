#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_BBNDNGACCFL_OFFSET UNITYSDK_OFFSET(0xD1386F0)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_CJAHCAFAAAG_OFFSET UNITYSDK_OFFSET(0xD138490)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD138760)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD137B30)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_EGHCKNKAJHD_OFFSET UNITYSDK_OFFSET(0xD138120)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD137720)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYRANDOMLINEANDSPEED_OFFSET UNITYSDK_OFFSET(0xD137EC0)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYWITHRADOMLINE_OFFSET UNITYSDK_OFFSET(0xD137C60)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xD137B90)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD137AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlyEffect_TypeDefinitionIndex = 64495;

	class GridFightFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x18
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x20
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x28
		::UnityEngine::Vector3 CCFEKALJMLN; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x40
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x48
		::UnityEngine::Animation* KCOAILOHDND; // 0x50
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x58
		::System::Action* OOBALIFBOCA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayRandomLineAndSpeed(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYRANDOMLINEANDSPEED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayWithRadomLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYWITHRADOMLINE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CJAHCAFAAAG(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_CJAHCAFAAAG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 EGHCKNKAJHD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_EGHCKNKAJHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BBNDNGACCFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_BBNDNGACCFL_OFFSET))(this, a1);
		}

	};
}
