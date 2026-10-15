#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHLPMJFEECF;
class FHNPDJDGEKE;
class FHPMJLMOMFL;
class GDJJHIELCIB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHPMJLMOMFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15795680)
#define FHPMJLMOMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x157956F0)
#define FHPMJLMOMFL_DIPKMAPNPHB_OFFSET UNITYSDK_OFFSET(0x157957A0)
#define FHPMJLMOMFL_FDIAIGMKOFM_OFFSET UNITYSDK_OFFSET(0x15795700)
#define FHPMJLMOMFL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x157955A0)
#define FHPMJLMOMFL_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x157955F0)
#define FHPMJLMOMFL_GET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795660)
#define FHPMJLMOMFL_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795640)
#define FHPMJLMOMFL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x157954F0)
#define FHPMJLMOMFL_KNCDLCBFNEH_OFFSET UNITYSDK_OFFSET(0x15795750)
#define FHPMJLMOMFL_PFINKMGCGAJ_OFFSET UNITYSDK_OFFSET(0x15795540)
#define FHPMJLMOMFL_SET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795670)
#define FHPMJLMOMFL_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795650)

	class FHPMJLMOMFL : public ::System::Object
	{
	public:
		::DHLPMJFEECF* GANLOCFFMEF; // 0x10
		::FHNPDJDGEKE* _RelicScoreCalculator_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* APDCBJCDALM; // 0x20
		::GDJJHIELCIB* _PlanExtraScoreCalculator_k__BackingField; // 0x28
		::System::Void _ctor(::DHLPMJFEECF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLPMJFEECF*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_GET_VERSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* PFINKMGCGAJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_PFINKMGCGAJ_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_GET_AVATAR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_GET_PLANDATA_OFFSET))(this);
		}

		::FHNPDJDGEKE* get_RelicScoreCalculator()
		{
			return ((::FHNPDJDGEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_GET_RELICSCORECALCULATOR_OFFSET))(this);
		}

		::System::Void set_RelicScoreCalculator(::FHNPDJDGEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNPDJDGEKE*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_SET_RELICSCORECALCULATOR_OFFSET))(this, a1);
		}

		::GDJJHIELCIB* get_PlanExtraScoreCalculator()
		{
			return ((::GDJJHIELCIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_GET_PLANEXTRASCORECALCULATOR_OFFSET))(this);
		}

		::System::Void set_PlanExtraScoreCalculator(::GDJJHIELCIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDJJHIELCIB*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_SET_PLANEXTRASCORECALCULATOR_OFFSET))(this, a1);
		}

		static ::FHPMJLMOMFL* BPLPBPMEODA(::DHLPMJFEECF* a1)
		{
			return ((::FHPMJLMOMFL*(*)(::DHLPMJFEECF*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void FDIAIGMKOFM(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_FDIAIGMKOFM_OFFSET))(this, a1);
		}

		::System::Void KNCDLCBFNEH(::FHNPDJDGEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNPDJDGEKE*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_KNCDLCBFNEH_OFFSET))(this, a1);
		}

		::System::Void DIPKMAPNPHB(::GDJJHIELCIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDJJHIELCIB*))((::PBYTE)hIl2Cpp + FHPMJLMOMFL_DIPKMAPNPHB_OFFSET))(this, a1);
		}

	};
