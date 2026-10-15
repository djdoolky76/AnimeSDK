#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEEJKBIMHAA;
class OONGDLIDJJJ;
class PNNPEPDNFEA_PEAIKOGICOC;
namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNNPEPDNFEA_PEAIKOGICOC_ABPMPOIPPOD_OFFSET UNITYSDK_OFFSET(0xC34CA70)
#define PNNPEPDNFEA_PEAIKOGICOC_CLEAR_OFFSET UNITYSDK_OFFSET(0xC34C9D0)
#define PNNPEPDNFEA_PEAIKOGICOC_CTOR_OFFSET UNITYSDK_OFFSET(0xC34C7E0)
#define PNNPEPDNFEA_PEAIKOGICOC_FMLBCMGBEBI_OFFSET UNITYSDK_OFFSET(0xC34CCB0)
#define PNNPEPDNFEA_PEAIKOGICOC_JAJPGELBEGD_OFFSET UNITYSDK_OFFSET(0xC34D430)
#define PNNPEPDNFEA_PEAIKOGICOC_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xC34BA00)
#define PNNPEPDNFEA_PEAIKOGICOC_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xC34CC40)
#define PNNPEPDNFEA_PEAIKOGICOC_KOKEJHOAFDC_1_OFFSET UNITYSDK_OFFSET(0xC34B930)
#define PNNPEPDNFEA_PEAIKOGICOC_KOKEJHOAFDC_OFFSET UNITYSDK_OFFSET(0xC34C940)
#define PNNPEPDNFEA_PEAIKOGICOC_LFPKDDOEKFI_OFFSET UNITYSDK_OFFSET(0xC34C370)

inline static constexpr unsigned int PNNPEPDNFEA_PEAIKOGICOC_TypeDefinitionIndex = 54380;

	class PNNPEPDNFEA_PEAIKOGICOC : public ::System::Object
	{
	public:
		::DEEJKBIMHAA* NJIPEJMNNKD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* DAAEFLHHLHD; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CIKDOOGLNDF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_CTOR_OFFSET))(this);
		}

		static ::PNNPEPDNFEA_PEAIKOGICOC* KOKEJHOAFDC(::RPG::GameCore::GameWorld* a1)
		{
			return ((::PNNPEPDNFEA_PEAIKOGICOC*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_KOKEJHOAFDC_OFFSET))(a1);
		}

		static ::PNNPEPDNFEA_PEAIKOGICOC* KOKEJHOAFDC_1(::OONGDLIDJJJ* a1)
		{
			return ((::PNNPEPDNFEA_PEAIKOGICOC*(*)(::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_KOKEJHOAFDC_1_OFFSET))(a1);
		}

		::System::Void JDEKJLHMPLG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::DEEJKBIMHAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* ABPMPOIPPOD(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_ABPMPOIPPOD_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_KHNCMBEFIKI_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FMLBCMGBEBI(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_FMLBCMGBEBI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JAJPGELBEGD(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_JAJPGELBEGD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint LFPKDDOEKFI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PEAIKOGICOC_LFPKDDOEKFI_OFFSET))(this, a1, a2);
		}

	};
