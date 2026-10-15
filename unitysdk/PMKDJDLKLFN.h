#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BOMFGKDLHIB;
class EFHNDMENDHI;
class FDPALAEIHPB;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define PMKDJDLKLFN_ANIPMGDBBLP_OFFSET UNITYSDK_OFFSET(0x1C9F88B0)
#define PMKDJDLKLFN_BKBHDKPAOOF_OFFSET UNITYSDK_OFFSET(0x1C9F6E40)
#define PMKDJDLKLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6C50)
#define PMKDJDLKLFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9F6C60)
#define PMKDJDLKLFN_HBJEKIHOHKK_OFFSET UNITYSDK_OFFSET(0x1C9F8490)
#define PMKDJDLKLFN_HEFMPHKHHPC_OFFSET UNITYSDK_OFFSET(0x1C9F8140)
#define PMKDJDLKLFN_KBJAOMNDAPD_1_OFFSET UNITYSDK_OFFSET(0x1C9F72A0)
#define PMKDJDLKLFN_KBJAOMNDAPD_2_OFFSET UNITYSDK_OFFSET(0x1C9F76D0)
#define PMKDJDLKLFN_KBJAOMNDAPD_3_OFFSET UNITYSDK_OFFSET(0x1C9F79E0)
#define PMKDJDLKLFN_KBJAOMNDAPD_4_OFFSET UNITYSDK_OFFSET(0x1C9F7E30)
#define PMKDJDLKLFN_KBJAOMNDAPD_OFFSET UNITYSDK_OFFSET(0x1C9F70E0)
#define PMKDJDLKLFN_KFPLDGHECKA_OFFSET UNITYSDK_OFFSET(0x1C9F8330)
#define PMKDJDLKLFN_KINJMINKEEI_OFFSET UNITYSDK_OFFSET(0x1C9F8760)
#define PMKDJDLKLFN_MEBHAOBOBBD_OFFSET UNITYSDK_OFFSET(0x1C9F8A60)
#define PMKDJDLKLFN_NKLIDFDMIDJ_OFFSET UNITYSDK_OFFSET(0x1C9F8B80)

	class PMKDJDLKLFN : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_EXECUTE_OFFSET))(this);
		}

		::System::Boolean BKBHDKPAOOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_BKBHDKPAOOF_OFFSET))(this);
		}

		::System::Void KBJAOMNDAPD(::RPG::GameCore::Match3::Match3ActionBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KBJAOMNDAPD_OFFSET))(this, a1, a2);
		}

		::System::Void KBJAOMNDAPD_1(::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KBJAOMNDAPD_1_OFFSET))(this, a1, a2);
		}

		::System::Void KBJAOMNDAPD_2(::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KBJAOMNDAPD_2_OFFSET))(this, a1);
		}

		::System::Void KBJAOMNDAPD_3(::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KBJAOMNDAPD_3_OFFSET))(this, a1);
		}

		::System::Void KBJAOMNDAPD_4(::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KBJAOMNDAPD_4_OFFSET))(this, a1);
		}

		::System::Void HBJEKIHOHKK(::EFHNDMENDHI* a1, ::RPG::GameCore::Match3::BombType a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFHNDMENDHI*, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_HBJEKIHOHKK_OFFSET))(this, a1, a2);
		}

		::System::Void KFPLDGHECKA(::System::ValueTuple a1, ::RPG::GameCore::Match3::BombType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KFPLDGHECKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HEFMPHKHHPC(::System::ValueTuple a1, ::System::Boolean a2, ::RPG::GameCore::Match3::BombType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple, ::System::Boolean, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_HEFMPHKHHPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ANIPMGDBBLP(::System::ValueTuple a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_ANIPMGDBBLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKLIDFDMIDJ(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_NKLIDFDMIDJ_OFFSET))(this, a1);
		}

		::System::Boolean KINJMINKEEI(::System::ValueTuple a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple, ::System::UInt32))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KINJMINKEEI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEBHAOBOBBD(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_MEBHAOBOBBD_OFFSET))(this, a1);
		}

	};
