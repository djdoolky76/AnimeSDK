#pragma once
#include "unitysdk/unitysdk.h"
class KOFIMLBOMIG;
namespace RPG::GameCore { class ElationActivityActionBarAbilityChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define BICBABLBCCK_ABIKKPEJLAL_OFFSET UNITYSDK_OFFSET(0xB4954A0)
#define BICBABLBCCK_AIACIKLKHPK_OFFSET UNITYSDK_OFFSET(0xB4953B0)
#define BICBABLBCCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4950E0)
#define BICBABLBCCK_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0xB4955B0)
#define BICBABLBCCK_INMAMAEFECM_OFFSET UNITYSDK_OFFSET(0xB495170)
#define BICBABLBCCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB495110)

inline static constexpr unsigned int BICBABLBCCK_TypeDefinitionIndex = 55011;

	class BICBABLBCCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + BICBABLBCCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICBABLBCCK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void INMAMAEFECM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICBABLBCCK_INMAMAEFECM_OFFSET))(this);
		}

		::System::Void AIACIKLKHPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICBABLBCCK_AIACIKLKHPK_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* FGOEGLEDNCJ()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICBABLBCCK_FGOEGLEDNCJ_OFFSET))(this);
		}

		::KOFIMLBOMIG* ABIKKPEJLAL()
		{
			return ((::KOFIMLBOMIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICBABLBCCK_ABIKKPEJLAL_OFFSET))(this);
		}

	};
