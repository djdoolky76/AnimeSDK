#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }

#define MOACPLIFJOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B201E60)
#define MOACPLIFJOO_DGGHIAFCMHD_OFFSET UNITYSDK_OFFSET(0x1B202B30)
#define MOACPLIFJOO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B202300)
#define MOACPLIFJOO_GLBACNCPHHF_OFFSET UNITYSDK_OFFSET(0x1B202920)
#define MOACPLIFJOO_HDMEGPOCJFH_OFFSET UNITYSDK_OFFSET(0x1B203010)
#define MOACPLIFJOO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B201E80)
#define MOACPLIFJOO_KBGKKEJOPHC_OFFSET UNITYSDK_OFFSET(0x1B202530)
#define MOACPLIFJOO_LBHKNBAJOLN_OFFSET UNITYSDK_OFFSET(0x1B201FA0)
#define MOACPLIFJOO_MPJPCAIBJHP_OFFSET UNITYSDK_OFFSET(0x1B2024C0)
#define MOACPLIFJOO_NPJMBJCDDOB_OFFSET UNITYSDK_OFFSET(0x1B202BA0)
#define MOACPLIFJOO___TICKGAME_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B203070)

inline static constexpr unsigned int MOACPLIFJOO_TypeDefinitionIndex = 79603;

	class MOACPLIFJOO : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfFeverSkillLevelConfig* IHAKEHFIHPA; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::BNLHGENFEHG* PDENFEFCAGN; // 0x20
		::System::Boolean POHEELFNCOM; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 IGONLBHEHDI; // 0x2C
		::System::Single PJNOEDLBNOH; // 0x30
		::System::Single OGCMGFEJEAJ; // 0x34
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + MOACPLIFJOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_EXECUTE_OFFSET))(this);
		}

		::System::Void LBHKNBAJOLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_LBHKNBAJOLN_OFFSET))(this);
		}

		::System::Void MPJPCAIBJHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOACPLIFJOO_MPJPCAIBJHP_OFFSET))(this, a1);
		}

		::System::Void GLBACNCPHHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_GLBACNCPHHF_OFFSET))(this);
		}

		::System::Void KBGKKEJOPHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOACPLIFJOO_KBGKKEJOPHC_OFFSET))(this, a1);
		}

		::System::Void DGGHIAFCMHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_DGGHIAFCMHD_OFFSET))(this);
		}

		::System::Void NPJMBJCDDOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOACPLIFJOO_NPJMBJCDDOB_OFFSET))(this, a1);
		}

		::System::Void HDMEGPOCJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO_HDMEGPOCJFH_OFFSET))(this);
		}

		::System::Void __TickGame_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOACPLIFJOO___TICKGAME_B__6_0_OFFSET))(this);
		}

	};
