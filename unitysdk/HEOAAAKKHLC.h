#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/MatchThree1v1AIScoreApsect.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/ACCGBEKMHNF.h"
class BOMFGKDLHIB;
class CAKNHIMMBOM;
class KPCPIMINKPL;
class LMNNKEACHLL;
class PKJOPFLMLLB;
class PLKAJKKLGOL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }
namespace System { class Nullable; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define HEOAAAKKHLC_ALIECNONGMB_OFFSET UNITYSDK_OFFSET(0x1CAC6B90)
#define HEOAAAKKHLC_BJMMLHKPILL_OFFSET UNITYSDK_OFFSET(0x1CAC05B0)
#define HEOAAAKKHLC_BNOLNLHODOD_OFFSET UNITYSDK_OFFSET(0x1CAC6690)
#define HEOAAAKKHLC_CBPAIODGGOM_OFFSET UNITYSDK_OFFSET(0x1CAC0B10)
#define HEOAAAKKHLC_CCINIFIGCOI_OFFSET UNITYSDK_OFFSET(0x1CAC3920)
#define HEOAAAKKHLC_CGAHNGEIFLI_OFFSET UNITYSDK_OFFSET(0x1CAC6090)
#define HEOAAAKKHLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABF070)
#define HEOAAAKKHLC_DDLFLEFEHPA_OFFSET UNITYSDK_OFFSET(0x1CAC0170)
#define HEOAAAKKHLC_EDKFLDEGEJF_OFFSET UNITYSDK_OFFSET(0x1CAC6930)
#define HEOAAAKKHLC_ENDANOPPLNC_OFFSET UNITYSDK_OFFSET(0x1CAC0480)
#define HEOAAAKKHLC_FPJOCOAMNBA_OFFSET UNITYSDK_OFFSET(0x1CAC5940)
#define HEOAAAKKHLC_GET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x1CAC72C0)
#define HEOAAAKKHLC_GET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x1CAC72A0)
#define HEOAAAKKHLC_GET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x1CAC7280)
#define HEOAAAKKHLC_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CAC72E0)
#define HEOAAAKKHLC_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1CAC72F0)
#define HEOAAAKKHLC_GHGFFNOHGKN_OFFSET UNITYSDK_OFFSET(0x1CAC0410)
#define HEOAAAKKHLC_GHLLEDPLPIL_OFFSET UNITYSDK_OFFSET(0x1CAC4A10)
#define HEOAAAKKHLC_GIAJBPOBOJC_OFFSET UNITYSDK_OFFSET(0x1CAC69D0)
#define HEOAAAKKHLC_GIIFGOMKFIC_OFFSET UNITYSDK_OFFSET(0x1CAC0500)
#define HEOAAAKKHLC_HFFBLMDBONE_OFFSET UNITYSDK_OFFSET(0x1CAC5E10)
#define HEOAAAKKHLC_HJDFKNEHKBB_1_OFFSET UNITYSDK_OFFSET(0x1CAC12F0)
#define HEOAAAKKHLC_HJDFKNEHKBB_OFFSET UNITYSDK_OFFSET(0x1CAC1210)
#define HEOAAAKKHLC_HMCDFMGBOOG_OFFSET UNITYSDK_OFFSET(0x1CAC02B0)
#define HEOAAAKKHLC_IEOAKPPDDNG_OFFSET UNITYSDK_OFFSET(0x1CAC32A0)
#define HEOAAAKKHLC_IPHLPKBHKJH_OFFSET UNITYSDK_OFFSET(0x1CAC4BD0)
#define HEOAAAKKHLC_JCDLBIIALNM_OFFSET UNITYSDK_OFFSET(0x1CAC1A80)
#define HEOAAAKKHLC_JPFLPPAHKCP_OFFSET UNITYSDK_OFFSET(0x1CAC6720)
#define HEOAAAKKHLC_JPJJIADOPAB_OFFSET UNITYSDK_OFFSET(0x1CAC6C80)
#define HEOAAAKKHLC_KEJFGJACPJP_OFFSET UNITYSDK_OFFSET(0x1CAC0610)
#define HEOAAAKKHLC_KIAEPKLNHEN_OFFSET UNITYSDK_OFFSET(0x1CAC2A50)
#define HEOAAAKKHLC_LHKFNPOIPDO_OFFSET UNITYSDK_OFFSET(0x1CAC4EC0)
#define HEOAAAKKHLC_LNOBPJFKKJE_OFFSET UNITYSDK_OFFSET(0x1CAC5520)
#define HEOAAAKKHLC_MMBLAKDJCOP_OFFSET UNITYSDK_OFFSET(0x1CAC19D0)
#define HEOAAAKKHLC_MNLCEMNEIOE_OFFSET UNITYSDK_OFFSET(0x1CAC0300)
#define HEOAAAKKHLC_NEOIEECBCJF_OFFSET UNITYSDK_OFFSET(0x1CAC4080)
#define HEOAAAKKHLC_NNMEAEFODGG_OFFSET UNITYSDK_OFFSET(0x1CAC22D0)
#define HEOAAAKKHLC_ODLKHEGLKMO_OFFSET UNITYSDK_OFFSET(0x1CAC0120)
#define HEOAAAKKHLC_OEKDKMAKONP_OFFSET UNITYSDK_OFFSET(0x1CAC0340)
#define HEOAAAKKHLC_OHKKFHBFHDA_OFFSET UNITYSDK_OFFSET(0x1CABF7B0)
#define HEOAAAKKHLC_OIAFLPANBEP_OFFSET UNITYSDK_OFFSET(0x1CAC5020)
#define HEOAAAKKHLC_OICGAKFBFNJ_OFFSET UNITYSDK_OFFSET(0x1CABF9B0)
#define HEOAAAKKHLC_OJLBAPJLIHJ_OFFSET UNITYSDK_OFFSET(0x1CAC70C0)
#define HEOAAAKKHLC_ONHHCAKANOF_OFFSET UNITYSDK_OFFSET(0x1CAC67C0)
#define HEOAAAKKHLC_PLANHLJHFLA_OFFSET UNITYSDK_OFFSET(0x1CABF750)
#define HEOAAAKKHLC_PMMMJGFHBEL_OFFSET UNITYSDK_OFFSET(0x1CAC0680)
#define HEOAAAKKHLC_SET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x1CAC72D0)
#define HEOAAAKKHLC_SET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x1CAC72B0)
#define HEOAAAKKHLC_SET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x1CAC7290)
#define HEOAAAKKHLC___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET UNITYSDK_OFFSET(0x1CAC7300)

inline static constexpr unsigned int HEOAAAKKHLC_TypeDefinitionIndex = 43031;

	class HEOAAAKKHLC : public ::System::Object
	{
	public:
		::PKJOPFLMLLB* _FinalChoice_k__BackingField; // 0x10
		::System::Random* OLEEIPHBJKB; // 0x18
		::System::Collections::Generic::List_1<::KPCPIMINKPL*>* MENOBJEFELB; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MatchThreePropType, ::System::UInt32>* KJPHEOOLPDN; // 0x28
		::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* BJAHOPDNDHA; // 0x30
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x38
		::PKJOPFLMLLB* ECDMJAJFDNG; // 0x40
		::System::Collections::Generic::List_1<::PKJOPFLMLLB*>* LLCGBAOAMDN; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>* HCDKPJGAHNK; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::CAKNHIMMBOM*>* HIJPJBGAADF; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::PKJOPFLMLLB*>* GBFAAIIECMB; // 0x60
		::System::Collections::Generic::Queue_1<::PKJOPFLMLLB*>* ECHMPHPGBMI; // 0x68
		::System::Collections::Generic::List_1<::System::ValueTuple>* KLEIMNLINEE; // 0x70
		::System::UInt32 _Level_k__BackingField; // 0x78
		::System::Int32 IAJDCMPBPGP; // 0x7C
		::RPG::Client::LittleGame::Match3::OpponentRole _Role_k__BackingField; // 0x80
		::System::Boolean _IsSimulating_k__BackingField; // 0x84
		::System::Boolean _IsSimulatingProp_k__BackingField; // 0x85
		::System::Void _ctor(::BOMFGKDLHIB* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BOMFGKDLHIB*, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PLANHLJHFLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_PLANHLJHFLA_OFFSET))(this);
		}

		::System::Void ODLKHEGLKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_ODLKHEGLKMO_OFFSET))(this);
		}

		::System::Void HMCDFMGBOOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_HMCDFMGBOOG_OFFSET))(this);
		}

		::System::UInt32 MNLCEMNEIOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_MNLCEMNEIOE_OFFSET))(this);
		}

		::System::Void OEKDKMAKONP(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::Match3::ViewMomentType a4, ::System::ValueTuple a5, ::System::Nullable* a6, ::System::UInt32 a7, ::RPG::GameCore::Match3::BombType a8, ::RPG::GameCore::Match3::PieceTag a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::ViewMomentType, ::System::ValueTuple, ::System::Nullable*, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_OEKDKMAKONP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::UInt32 GHGFFNOHGKN(::ACCGBEKMHNF a1, ::System::Collections::Generic::List_1<::System::ValueTuple>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::ACCGBEKMHNF, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GHGFFNOHGKN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ENDANOPPLNC(::System::UInt32 a1, ::System::ValueTuple a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::RPG::GameCore::Match3::PieceTag a5, ::System::Single a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Single))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_ENDANOPPLNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 GIIFGOMKFIC(::System::UInt32 a1, ::System::ValueTuple a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Nullable* a6, ::System::Boolean a7)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GIIFGOMKFIC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 BJMMLHKPILL(::System::UInt32 a1, ::System::ValueTuple a2, ::RPG::GameCore::Match3::BombType a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_BJMMLHKPILL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 KEJFGJACPJP(::System::UInt32 a1, ::System::UInt32 a2, ::System::ValueTuple a3, ::RPG::Client::LittleGame::Match3::GridLocalPoint a4, ::System::UInt32 a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::ValueTuple, ::RPG::Client::LittleGame::Match3::GridLocalPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_KEJFGJACPJP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OICGAKFBFNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_OICGAKFBFNJ_OFFSET))(this);
		}

		::System::Void PMMMJGFHBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_PMMMJGFHBEL_OFFSET))(this);
		}

		::System::Int32 GHLLEDPLPIL(::PLKAJKKLGOL* a1, ::PLKAJKKLGOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PLKAJKKLGOL*, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GHLLEDPLPIL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HJDFKNEHKBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_HJDFKNEHKBB_OFFSET))(this);
		}

		::System::Boolean HJDFKNEHKBB_1(::RPG::GameCore::MatchThreePropType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_HJDFKNEHKBB_1_OFFSET))(this, a1);
		}

		::System::Void IPHLPKBHKJH(::PKJOPFLMLLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_IPHLPKBHKJH_OFFSET))(this, a1);
		}

		::System::Void DDLFLEFEHPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_DDLFLEFEHPA_OFFSET))(this);
		}

		::System::Void CBPAIODGGOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_CBPAIODGGOM_OFFSET))(this);
		}

		::System::Int32 GIAJBPOBOJC(::PKJOPFLMLLB* a1, ::PKJOPFLMLLB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PKJOPFLMLLB*, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GIAJBPOBOJC_OFFSET))(this, a1, a2);
		}

		::System::Int32 BNOLNLHODOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_BNOLNLHODOD_OFFSET))(this);
		}

		::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig* ONHHCAKANOF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_ONHHCAKANOF_OFFSET))(this, a1, a2);
		}

		::System::Single EDKFLDEGEJF(::PKJOPFLMLLB* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::PKJOPFLMLLB*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_EDKFLDEGEJF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JPFLPPAHKCP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_JPFLPPAHKCP_OFFSET))(this);
		}

		::System::Void OHKKFHBFHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_OHKKFHBFHDA_OFFSET))(this);
		}

		::System::Void MMBLAKDJCOP(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_MMBLAKDJCOP_OFFSET))(this, a1);
		}

		::System::Void KIAEPKLNHEN(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_KIAEPKLNHEN_OFFSET))(this, a1);
		}

		::System::Void CCINIFIGCOI(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_CCINIFIGCOI_OFFSET))(this, a1);
		}

		::System::Void NEOIEECBCJF(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_NEOIEECBCJF_OFFSET))(this, a1);
		}

		::System::Void JCDLBIIALNM(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_JCDLBIIALNM_OFFSET))(this, a1);
		}

		::System::Int32 ALIECNONGMB(::System::ValueTuple a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_ALIECNONGMB_OFFSET))(this, a1);
		}

		::System::Void IEOAKPPDDNG(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_IEOAKPPDDNG_OFFSET))(this, a1);
		}

		::System::Void NNMEAEFODGG(::PLKAJKKLGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_NNMEAEFODGG_OFFSET))(this, a1);
		}

		::System::Void CGAHNGEIFLI(::PKJOPFLMLLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_CGAHNGEIFLI_OFFSET))(this, a1);
		}

		::System::Boolean LHKFNPOIPDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_LHKFNPOIPDO_OFFSET))(this);
		}

		::System::Boolean OJLBAPJLIHJ(::LMNNKEACHLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMNNKEACHLL*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_OJLBAPJLIHJ_OFFSET))(this, a1);
		}

		::System::Void JPJJIADOPAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_JPJJIADOPAB_OFFSET))(this);
		}

		::System::Void OIAFLPANBEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_OIAFLPANBEP_OFFSET))(this);
		}

		::System::Void LNOBPJFKKJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_LNOBPJFKKJE_OFFSET))(this);
		}

		::System::Void FPJOCOAMNBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_FPJOCOAMNBA_OFFSET))(this);
		}

		::System::Void HFFBLMDBONE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_HFFBLMDBONE_OFFSET))(this);
		}

		::System::Boolean get_IsSimulating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GET_ISSIMULATING_OFFSET))(this);
		}

		::System::Void set_IsSimulating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_SET_ISSIMULATING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSimulatingProp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GET_ISSIMULATINGPROP_OFFSET))(this);
		}

		::System::Void set_IsSimulatingProp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_SET_ISSIMULATINGPROP_OFFSET))(this, a1);
		}

		::PKJOPFLMLLB* get_FinalChoice()
		{
			return ((::PKJOPFLMLLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GET_FINALCHOICE_OFFSET))(this);
		}

		::System::Void set_FinalChoice(::PKJOPFLMLLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_SET_FINALCHOICE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Match3::OpponentRole get_Role()
		{
			return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC_GET_ROLE_OFFSET))(this);
		}

		::System::Int32 __GenPropSimulateInfo_BreakPiece_b__29_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET))(this, a1, a2);
		}

	};
