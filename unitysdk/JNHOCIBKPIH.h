#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NEPMJIEFJCF;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNHOCIBKPIH_ACMDEGCACOM_OFFSET UNITYSDK_OFFSET(0xB281350)
#define JNHOCIBKPIH_ADBAJBEHIOF_OFFSET UNITYSDK_OFFSET(0xB281D50)
#define JNHOCIBKPIH_ADPAHKMAJFH_OFFSET UNITYSDK_OFFSET(0xB280A40)
#define JNHOCIBKPIH_CKBADBCNHJB_OFFSET UNITYSDK_OFFSET(0xB2818E0)
#define JNHOCIBKPIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB280130)
#define JNHOCIBKPIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB280140)
#define JNHOCIBKPIH_DMOFIBHGKMB_OFFSET UNITYSDK_OFFSET(0xB281EB0)
#define JNHOCIBKPIH_EFFGDEDNDAL_OFFSET UNITYSDK_OFFSET(0xB280DB0)
#define JNHOCIBKPIH_EGAIJOMGDDG_OFFSET UNITYSDK_OFFSET(0xB281480)
#define JNHOCIBKPIH_FNIHEOEKCJP_OFFSET UNITYSDK_OFFSET(0xB281930)
#define JNHOCIBKPIH_GFMFIIEEACK_OFFSET UNITYSDK_OFFSET(0xB282510)
#define JNHOCIBKPIH_HOEFEEFCEEC_OFFSET UNITYSDK_OFFSET(0xB281060)
#define JNHOCIBKPIH_JEHJADPEMJB_OFFSET UNITYSDK_OFFSET(0xB2806B0)
#define JNHOCIBKPIH_JFMFIFELJPJ_OFFSET UNITYSDK_OFFSET(0xB282A90)
#define JNHOCIBKPIH_JGLJEDJKDKK_OFFSET UNITYSDK_OFFSET(0xB281C30)
#define JNHOCIBKPIH_JIPNDNKLHIL_OFFSET UNITYSDK_OFFSET(0xB2820B0)
#define JNHOCIBKPIH_LCOGCDNLCOE_OFFSET UNITYSDK_OFFSET(0xB280230)
#define JNHOCIBKPIH_LJACIGDBJCB_OFFSET UNITYSDK_OFFSET(0xB2823F0)
#define JNHOCIBKPIH_LOJGBHAHMGO_OFFSET UNITYSDK_OFFSET(0xB281E00)
#define JNHOCIBKPIH_MBMMHMKONOP_OFFSET UNITYSDK_OFFSET(0xB281240)
#define JNHOCIBKPIH_MECDPPCNDJL_OFFSET UNITYSDK_OFFSET(0xB280F40)
#define JNHOCIBKPIH_NMIKMBACDOA_OFFSET UNITYSDK_OFFSET(0xB2827B0)
#define JNHOCIBKPIH_OAEONMOMFDI_OFFSET UNITYSDK_OFFSET(0xB281780)
#define JNHOCIBKPIH_OFEFFJJEADB_OFFSET UNITYSDK_OFFSET(0xB281CC0)
#define JNHOCIBKPIH_PJEJMMGFGGH_OFFSET UNITYSDK_OFFSET(0xB281600)

	class JNHOCIBKPIH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HLAIAKPMBOM; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* PJOMHLNFMHC; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::NEPMJIEFJCF*>* JPJJDLAHLMC; // 0x20
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_DISPOSE_OFFSET))(this);
		}

		::System::Void LCOGCDNLCOE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a5, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_LCOGCDNLCOE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EFFGDEDNDAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_EFFGDEDNDAL_OFFSET))(this, a1);
		}

		::System::Void MECDPPCNDJL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_MECDPPCNDJL_OFFSET))(this, a1);
		}

		::System::Void JEHJADPEMJB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_JEHJADPEMJB_OFFSET))(this, a1, a2);
		}

		::System::Void MBMMHMKONOP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_MBMMHMKONOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACMDEGCACOM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_ACMDEGCACOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EGAIJOMGDDG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_EGAIJOMGDDG_OFFSET))(this, a1);
		}

		::System::Boolean PJEJMMGFGGH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_PJEJMMGFGGH_OFFSET))(this, a1);
		}

		::System::Int32 OAEONMOMFDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_OAEONMOMFDI_OFFSET))(this, a1);
		}

		::System::Void CKBADBCNHJB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_CKBADBCNHJB_OFFSET))(this, a1);
		}

		::System::Void FNIHEOEKCJP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_FNIHEOEKCJP_OFFSET))(this, a1);
		}

		::System::Void DMOFIBHGKMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_DMOFIBHGKMB_OFFSET))(this, a1);
		}

		::System::Void JIPNDNKLHIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_JIPNDNKLHIL_OFFSET))(this, a1);
		}

		::System::Boolean OFEFFJJEADB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_OFEFFJJEADB_OFFSET))(this, a1);
		}

		::System::Boolean JGLJEDJKDKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_JGLJEDJKDKK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* ADBAJBEHIOF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_ADBAJBEHIOF_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedAbilityComponent* LJACIGDBJCB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_LJACIGDBJCB_OFFSET))(this, a1);
		}

		::NEPMJIEFJCF* LOJGBHAHMGO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::NEPMJIEFJCF*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_LOJGBHAHMGO_OFFSET))(this, a1);
		}

		::System::Boolean GFMFIIEEACK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_GFMFIIEEACK_OFFSET))(this, a1);
		}

		::System::Boolean NMIKMBACDOA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_NMIKMBACDOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ADPAHKMAJFH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_ADPAHKMAJFH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOEFEEFCEEC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_HOEFEEFCEEC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* JFMFIFELJPJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOCIBKPIH_JFMFIFELJPJ_OFFSET))(this);
		}

	};
