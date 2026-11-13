#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightParticleEffect.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D16C850)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1D16C280)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_GNAPIBGPJBJ_OFFSET UNITYSDK_OFFSET(0x1D16C780)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0x1D16BF90)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D16C0F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D16C1C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1D16C450)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1D16C320)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D16BF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipActiveEffect_TypeDefinitionIndex = 65957;

	class GridFightEquipActiveEffect : public ::RPG::Client::GridFightParticleEffect
	{
	public:
		::UnityEngine::Transform* ILHGNCFAEBB; // 0x28
		::System::UInt32 KHFBODBGMPP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Transform* a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_1(::System::UInt32 a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GNAPIBGPJBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_GNAPIBGPJBJ_OFFSET))(this, a1);
		}

		::System::Void HAOBJNHJFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_HAOBJNHJFGM_OFFSET))(this);
		}

	};
}
