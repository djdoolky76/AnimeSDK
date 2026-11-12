#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"
class LPBFHBIINHC;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }

#define FNGGHPAJPJP_CTOR_OFFSET UNITYSDK_OFFSET(0x167E2BF0)
#define FNGGHPAJPJP_DADLJPAHMPJ_OFFSET UNITYSDK_OFFSET(0x167E1E90)
#define FNGGHPAJPJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167E11B0)
#define FNGGHPAJPJP_FJMNOAFHBIK_OFFSET UNITYSDK_OFFSET(0x167E2370)
#define FNGGHPAJPJP_IDNNMILIDLN_OFFSET UNITYSDK_OFFSET(0x167E2B60)
#define FNGGHPAJPJP_KMHKBJJJENF_OFFSET UNITYSDK_OFFSET(0x167E1F70)
#define FNGGHPAJPJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x167E1170)
#define FNGGHPAJPJP_LBGLPGJNACE_OFFSET UNITYSDK_OFFSET(0x167E1240)
#define FNGGHPAJPJP_LHDJEKJFADL_OFFSET UNITYSDK_OFFSET(0x167E2770)
#define FNGGHPAJPJP_MBLDHBIIMEI_OFFSET UNITYSDK_OFFSET(0x167E11F0)
#define FNGGHPAJPJP_NBHIFIPIGDC_OFFSET UNITYSDK_OFFSET(0x167E27D0)
#define FNGGHPAJPJP_NINPECINMHE_OFFSET UNITYSDK_OFFSET(0x167E12B0)
#define FNGGHPAJPJP___KEEP_B__7_0_OFFSET UNITYSDK_OFFSET(0x167E2D40)
#define FNGGHPAJPJP___REPLACE_B__6_0_OFFSET UNITYSDK_OFFSET(0x167E2C20)

inline static constexpr unsigned int FNGGHPAJPJP_TypeDefinitionIndex = 77636;

	class FNGGHPAJPJP : public ::System::Object
	{
	public:
		::RPG::Client::UIController* BKKLDFPBIMG; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal MLPODLMJAHB; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* PBOGOJNMBPP; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal OMMLIKIKGDF; // 0x38
		::LPBFHBIINHC* PLOPDBFPPJH; // 0x50
		::LPBFHBIINHC* MDLHDGFDEBM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_DISPOSE_OFFSET))(this);
		}

		::System::Void MBLDHBIIMEI(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_MBLDHBIIMEI_OFFSET))(this, a1);
		}

		::System::Void LBGLPGJNACE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_LBGLPGJNACE_OFFSET))(this);
		}

		::System::Void DADLJPAHMPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_DADLJPAHMPJ_OFFSET))(this);
		}

		::System::Void NINPECINMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_NINPECINMHE_OFFSET))(this);
		}

		::System::Void KMHKBJJJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_KMHKBJJJENF_OFFSET))(this);
		}

		::System::Void FJMNOAFHBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_FJMNOAFHBIK_OFFSET))(this);
		}

		::System::Void LHDJEKJFADL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_LHDJEKJFADL_OFFSET))(this);
		}

		::System::Void NBHIFIPIGDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_NBHIFIPIGDC_OFFSET))(this, a1);
		}

		::System::Void IDNNMILIDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGGHPAJPJP_IDNNMILIDLN_OFFSET))(this);
		}

		::System::Void __Replace_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGGHPAJPJP___REPLACE_B__6_0_OFFSET))(this, a1);
		}

		::System::Void __Keep_b__7_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGGHPAJPJP___KEEP_B__7_0_OFFSET))(this, a1);
		}

	};
