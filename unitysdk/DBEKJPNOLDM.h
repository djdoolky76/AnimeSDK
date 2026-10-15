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
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBEKJPNOLDM_BHOPJFHAEIP_OFFSET UNITYSDK_OFFSET(0xDFDFAB0)
#define DBEKJPNOLDM_CGOBFNDMHPL_OFFSET UNITYSDK_OFFSET(0xDFDF8B0)
#define DBEKJPNOLDM_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDECB0)
#define DBEKJPNOLDM_ELDOPDLOIAE_OFFSET UNITYSDK_OFFSET(0xDFDFE50)
#define DBEKJPNOLDM_FDFEHNDMLFM_OFFSET UNITYSDK_OFFSET(0xDFDFEE0)
#define DBEKJPNOLDM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDFE0850)
#define DBEKJPNOLDM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xDFDED40)
#define DBEKJPNOLDM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDFE07F0)
#define DBEKJPNOLDM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDFE0890)
#define DBEKJPNOLDM_LCIEJKIIGMC_OFFSET UNITYSDK_OFFSET(0xDFE0290)
#define DBEKJPNOLDM_LJAPBNFHDAG_OFFSET UNITYSDK_OFFSET(0xDFE00A0)
#define DBEKJPNOLDM_MGGGFCLPIOD_OFFSET UNITYSDK_OFFSET(0xDFDFF40)
#define DBEKJPNOLDM_OBJJPNFDLNM_OFFSET UNITYSDK_OFFSET(0xDFDF480)

inline static constexpr unsigned int DBEKJPNOLDM_TypeDefinitionIndex = 77919;

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

		::System::Void CGOBFNDMHPL(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Action*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_CGOBFNDMHPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGGGFCLPIOD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_MGGGFCLPIOD_OFFSET))(this, a1);
		}

		::System::Void OBJJPNFDLNM(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Action*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_OBJJPNFDLNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Single>* LJAPBNFHDAG(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_LJAPBNFHDAG_OFFSET))(this, a1, a2);
		}

		::System::Void BHOPJFHAEIP(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + DBEKJPNOLDM_BHOPJFHAEIP_OFFSET))(this, a1, a2, a3, a4);
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
