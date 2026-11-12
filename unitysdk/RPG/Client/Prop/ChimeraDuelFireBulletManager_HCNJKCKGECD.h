#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelAnimatorView; }
namespace RPG::Client::LittleGame::ChimeraDuel { class DuelChimeraBattleView; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_AAIKOBEGLFB_OFFSET UNITYSDK_OFFSET(0xE6FD0D0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6FBDE0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_CTOR_OFFSET UNITYSDK_OFFSET(0xE6FCE70)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xE6FCF40)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE6FC030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelFireBulletManager_HCNJKCKGECD_TypeDefinitionIndex = 81035;

	class ChimeraDuelFireBulletManager_HCNJKCKGECD : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* EGMGFMKIOHL; // 0x10
		::UnityEngine::Transform* DEIMGIGLHLK; // 0x18
		::RPG::GameCore::ChimeraDuelFireBulletNode* JKLBAAHFJDJ; // 0x20
		::UnityEngine::Transform* GLDEBFOKEMJ; // 0x28
		::UnityEngine::Transform* ONLEMJPMBDH; // 0x30
		::UnityEngine::AnimationCurve* EKBEMMMNOFI; // 0x38
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView* LBLGJLNJMDL; // 0x40
		::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView* MMAHLODIDCB; // 0x48
		::UnityEngine::AnimationCurve* NPFCIFDPHPP; // 0x50
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* AHDAHAAGNCL; // 0x58
		::System::Int32 CGDICMBIBPP; // 0x60
		::UnityEngine::Quaternion PACGNNNBPEI; // 0x64
		::System::Single KKPEIMJKION; // 0x74
		::System::Boolean MABFMALCGKF; // 0x78
		::System::Boolean BNBMIBGDDNE; // 0x79
		::System::Boolean HCPFCJBJLHG; // 0x7A
		::System::Byte _padding0[0x1];
		::System::Single LLNIGIGFCEA; // 0x7C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView* a3, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView* a4, ::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* a5, ::RPG::GameCore::ChimeraDuelFireBulletNode* a6, ::UnityEngine::AnimationCurve* a7, ::UnityEngine::AnimationCurve* a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Action_1<::System::Int32>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView*, ::RPG::Client::Prop::ChimeraDuelModelVfxPlayer*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void EPHFABNKFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_EPHFABNKFGJ_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void AAIKOBEGLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_AAIKOBEGLFB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_HCNJKCKGECD_CLEAR_OFFSET))(this);
		}

	};
}
