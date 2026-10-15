#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class EOLPGHDBJNF;
class IGGPOPCBFNO;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace RPG::GameCore { class ExpeditionBattleNodeContainer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJFHFAJPKJG_CHCGKHLLPJM_OFFSET UNITYSDK_OFFSET(0xB96A700)
#define MJFHFAJPKJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB969EA0)
#define MJFHFAJPKJG_ENEKFDOBIDA_OFFSET UNITYSDK_OFFSET(0xB969EB0)
#define MJFHFAJPKJG_MDFIMDNGPCF_OFFSET UNITYSDK_OFFSET(0xB96A5F0)

	class MJFHFAJPKJG : public ::System::Object
	{
	public:
		::IGGPOPCBFNO* BEGBEPJDHIM; // 0x10
		::EOLPGHDBJNF* JGDIFAIKIFC; // 0x18
		::System::Void _ctor(::EOLPGHDBJNF* a1, ::IGGPOPCBFNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EOLPGHDBJNF*, ::IGGPOPCBFNO*))((::PBYTE)hIl2Cpp + MJFHFAJPKJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>* ENEKFDOBIDA(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + MJFHFAJPKJG_ENEKFDOBIDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* CHCGKHLLPJM(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + MJFHFAJPKJG_CHCGKHLLPJM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::ExpeditionBattleNodeContainer* MDFIMDNGPCF(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleNodeContainer*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + MJFHFAJPKJG_MDFIMDNGPCF_OFFSET))(this, a1);
		}

	};
