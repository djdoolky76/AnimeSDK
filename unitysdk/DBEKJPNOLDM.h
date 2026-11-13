#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireProjectile; }
namespace RPG::GameCore { class ChenLingBattleBulletMagicMissileExtraConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBEKJPNOLDM_BHOPJFHAEIP_OFFSET UNITYSDK_OFFSET(0x1B1477D0)
#define DBEKJPNOLDM_CGOBFNDMHPL_OFFSET UNITYSDK_OFFSET(0x1B1475D0)
#define DBEKJPNOLDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1469D0)
#define DBEKJPNOLDM_ELDOPDLOIAE_OFFSET UNITYSDK_OFFSET(0x1B147B70)
#define DBEKJPNOLDM_FDFEHNDMLFM_OFFSET UNITYSDK_OFFSET(0x1B147C00)
#define DBEKJPNOLDM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1B148570)
#define DBEKJPNOLDM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1B146A60)
#define DBEKJPNOLDM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B148510)
#define DBEKJPNOLDM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B1485B0)
#define DBEKJPNOLDM_LCIEJKIIGMC_OFFSET UNITYSDK_OFFSET(0x1B147FB0)
#define DBEKJPNOLDM_LJAPBNFHDAG_OFFSET UNITYSDK_OFFSET(0x1B147DC0)
#define DBEKJPNOLDM_MGGGFCLPIOD_OFFSET UNITYSDK_OFFSET(0x1B147C60)
#define DBEKJPNOLDM_OBJJPNFDLNM_OFFSET UNITYSDK_OFFSET(0x1B1471A0)

inline static constexpr unsigned int DBEKJPNOLDM_TypeDefinitionIndex = 80653;

	class DBEKJPNOLDM : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_FireProjectile* HEJFBEFFIPA; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void ELDOPDLOIAE(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_ELDOPDLOIAE_OFFSET))(this, a1);
		}

		::System::Void CGOBFNDMHPL(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Action_1<::ALMFLCJCHKP*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Action_1<::ALMFLCJCHKP*>*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_CGOBFNDMHPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGGGFCLPIOD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_MGGGFCLPIOD_OFFSET))(this, a1);
		}

		::System::Void OBJJPNFDLNM(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Action_1<::ALMFLCJCHKP*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Action_1<::ALMFLCJCHKP*>*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_OBJJPNFDLNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Single>* LJAPBNFHDAG(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_LJAPBNFHDAG_OFFSET))(this, a1, a2);
		}

		::System::Void BHOPJFHAEIP(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Single a3, ::System::Action_1<::ALMFLCJCHKP*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Single, ::System::Action_1<::ALMFLCJCHKP*>*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_BHOPJFHAEIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LCIEJKIIGMC(::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig* a1, ::ALMFLCJCHKP* a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*, ::ALMFLCJCHKP*, ::System::Single))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_LCIEJKIIGMC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType FDFEHNDMLFM(::RPG::GameCore::ChenLingBattleBulletType a1)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBulletType))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_FDFEHNDMLFM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_KHGIKBFDLFB_OFFSET))(this);
		}

	};
