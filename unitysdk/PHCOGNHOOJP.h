#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class PCCJNGOCLKD;
namespace RPG::Client::FateRin::CaseBoard { class GrailViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHCOGNHOOJP_BFEBJFGONMF_OFFSET UNITYSDK_OFFSET(0xC23AA90)
#define PHCOGNHOOJP_CMMBCLHKAMF_OFFSET UNITYSDK_OFFSET(0xC23ABD0)
#define PHCOGNHOOJP_CTOR_OFFSET UNITYSDK_OFFSET(0xC23A740)
#define PHCOGNHOOJP_GET_GRAIL_OFFSET UNITYSDK_OFFSET(0xC23A8D0)
#define PHCOGNHOOJP_LKFNGOBDDJC_OFFSET UNITYSDK_OFFSET(0xC23B110)
#define PHCOGNHOOJP_MHEMOKDHCIK_OFFSET UNITYSDK_OFFSET(0xC23A8F0)
#define PHCOGNHOOJP_NMJLMMKKLEH_OFFSET UNITYSDK_OFFSET(0xC23AE20)
#define PHCOGNHOOJP_OENHNBCNOOB_OFFSET UNITYSDK_OFFSET(0xC23B050)
#define PHCOGNHOOJP_OFFEDPGMCLJ_OFFSET UNITYSDK_OFFSET(0xC23ACB0)
#define PHCOGNHOOJP_PHIECNJHJOB_OFFSET UNITYSDK_OFFSET(0xC23AD40)
#define PHCOGNHOOJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC23A940)
#define PHCOGNHOOJP_PPIHIDFCDCJ_OFFSET UNITYSDK_OFFSET(0xC23AF60)
#define PHCOGNHOOJP_SET_GRAIL_OFFSET UNITYSDK_OFFSET(0xC23A8E0)

inline static constexpr unsigned int PHCOGNHOOJP_TypeDefinitionIndex = 80788;

	class PHCOGNHOOJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* ABBHEIAHCKI; // 0x10
		::PCCJNGOCLKD* FINDGMLOJNL; // 0x18
		::RPG::Client::FateRin::CaseBoard::GrailViewModel* _Grail_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType>, ::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>* CBNIMGHEFMF; // 0x28
		::System::Void _ctor(::PCCJNGOCLKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCCJNGOCLKD*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::GrailViewModel* get_Grail()
		{
			return ((::RPG::Client::FateRin::CaseBoard::GrailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_GET_GRAIL_OFFSET))(this);
		}

		::System::Void set_Grail(::RPG::Client::FateRin::CaseBoard::GrailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::GrailViewModel*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_SET_GRAIL_OFFSET))(this, a1);
		}

		::System::Int32 MHEMOKDHCIK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_MHEMOKDHCIK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* BFEBJFGONMF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_BFEBJFGONMF_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* CMMBCLHKAMF(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_CMMBCLHKAMF_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* OFFEDPGMCLJ(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_OFFEDPGMCLJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* PHIECNJHJOB(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_PHIECNJHJOB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>* NMJLMMKKLEH()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_NMJLMMKKLEH_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* PPIHIDFCDCJ(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardTeamType a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_PPIHIDFCDCJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* OENHNBCNOOB(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_OENHNBCNOOB_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* LKFNGOBDDJC(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + PHCOGNHOOJP_LKFNGOBDDJC_OFFSET))(this, a1);
		}

	};
