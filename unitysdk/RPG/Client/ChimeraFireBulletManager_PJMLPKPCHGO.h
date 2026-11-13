#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CE80420)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7FF70)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0x1CE7FFF0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CE7F3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraFireBulletManager_PJMLPKPCHGO_TypeDefinitionIndex = 70600;

	class ChimeraFireBulletManager_PJMLPKPCHGO : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraWorkFireBullet* IGHAHBNLIJA; // 0x10
		::System::Action* EGMGFMKIOHL; // 0x18
		::UnityEngine::AnimationCurve* NPFCIFDPHPP; // 0x20
		::UnityEngine::Transform* DEIMGIGLHLK; // 0x28
		::UnityEngine::AnimationCurve* EKBEMMMNOFI; // 0x30
		::UnityEngine::Transform* GLDEBFOKEMJ; // 0x38
		::UnityEngine::Transform* ONLEMJPMBDH; // 0x40
		::System::Boolean MABFMALCGKF; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single LLNIGIGFCEA; // 0x4C
		::System::Single KKPEIMJKION; // 0x50
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::ChimeraWorkFireBullet* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::ChimeraWorkFireBullet*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::MonoEffect* EPHFABNKFGJ()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_EPHFABNKFGJ_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_PJMLPKPCHGO_CLEAR_OFFSET))(this);
		}

	};
}
