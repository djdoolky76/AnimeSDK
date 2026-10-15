#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class EFHNDMENDHI;
class FDPALAEIHPB;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define PMKDJDLKLFN_ANIPMGDBBLP_OFFSET UNITYSDK_OFFSET(0x1C9CA2A0)
#define PMKDJDLKLFN_BKBHDKPAOOF_OFFSET UNITYSDK_OFFSET(0x1C9C88D0)
#define PMKDJDLKLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C86E0)
#define PMKDJDLKLFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9C86F0)
#define PMKDJDLKLFN_HBJEKIHOHKK_OFFSET UNITYSDK_OFFSET(0x1C9C9E80)
#define PMKDJDLKLFN_HEFMPHKHHPC_OFFSET UNITYSDK_OFFSET(0x1C9C9B30)
#define PMKDJDLKLFN_KBJAOMNDAPD_1_OFFSET UNITYSDK_OFFSET(0x1C9C8D30)
#define PMKDJDLKLFN_KBJAOMNDAPD_2_OFFSET UNITYSDK_OFFSET(0x1C9C9130)
#define PMKDJDLKLFN_KBJAOMNDAPD_3_OFFSET UNITYSDK_OFFSET(0x1C9C9410)
#define PMKDJDLKLFN_KBJAOMNDAPD_4_OFFSET UNITYSDK_OFFSET(0x1C9C9850)
#define PMKDJDLKLFN_KBJAOMNDAPD_OFFSET UNITYSDK_OFFSET(0x1C9C8B70)
#define PMKDJDLKLFN_KFPLDGHECKA_OFFSET UNITYSDK_OFFSET(0x1C9C9D20)
#define PMKDJDLKLFN_KINJMINKEEI_OFFSET UNITYSDK_OFFSET(0x1C9CA150)
#define PMKDJDLKLFN_MEBHAOBOBBD_OFFSET UNITYSDK_OFFSET(0x1C9CA450)
#define PMKDJDLKLFN_NKLIDFDMIDJ_OFFSET UNITYSDK_OFFSET(0x1C9CA570)

inline static constexpr unsigned int PMKDJDLKLFN_TypeDefinitionIndex = 42305;

	class PMKDJDLKLFN : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x18
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

		::System::Void KFPLDGHECKA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::RPG::GameCore::Match3::BombType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KFPLDGHECKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HEFMPHKHHPC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2, ::RPG::GameCore::Match3::BombType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_HEFMPHKHHPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ANIPMGDBBLP(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_ANIPMGDBBLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKLIDFDMIDJ(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_NKLIDFDMIDJ_OFFSET))(this, a1);
		}

		::System::Boolean KINJMINKEEI(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_KINJMINKEEI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEBHAOBOBBD(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + PMKDJDLKLFN_MEBHAOBOBBD_OFFSET))(this, a1);
		}

	};
