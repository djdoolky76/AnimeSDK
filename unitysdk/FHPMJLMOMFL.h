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

#define FHPMJLMOMFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15789A60)
#define FHPMJLMOMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15789AD0)
#define FHPMJLMOMFL_DIPKMAPNPHB_OFFSET UNITYSDK_OFFSET(0x15789B80)
#define FHPMJLMOMFL_FDIAIGMKOFM_OFFSET UNITYSDK_OFFSET(0x15789AE0)
#define FHPMJLMOMFL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x15789980)
#define FHPMJLMOMFL_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x157899D0)
#define FHPMJLMOMFL_GET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15789A40)
#define FHPMJLMOMFL_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15789A20)
#define FHPMJLMOMFL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x157898D0)
#define FHPMJLMOMFL_KNCDLCBFNEH_OFFSET UNITYSDK_OFFSET(0x15789B30)
#define FHPMJLMOMFL_PFINKMGCGAJ_OFFSET UNITYSDK_OFFSET(0x15789920)
#define FHPMJLMOMFL_SET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15789A50)
#define FHPMJLMOMFL_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15789A30)

inline static constexpr unsigned int FHPMJLMOMFL_TypeDefinitionIndex = 74439;

	class FHPMJLMOMFL : public ::System::Object
	{
	public:
		::GDJJHIELCIB* _PlanExtraScoreCalculator_k__BackingField; // 0x10
		::FHNPDJDGEKE* _RelicScoreCalculator_k__BackingField; // 0x18
		::DHLPMJFEECF* GANLOCFFMEF; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* APDCBJCDALM; // 0x28
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
