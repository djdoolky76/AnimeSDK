#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CEEGMMCFCBG;
class CELAKJDDDOH;
class DBHGOLFACFL;
class FIEEBCKMKDF;
class FKKIAHNJCBC;
class KCJNGDLDKFG;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MLINDDMKFFA_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xC26A6E0)
#define MLINDDMKFFA_BDEIJHFFFEM_OFFSET UNITYSDK_OFFSET(0xC26A600)
#define MLINDDMKFFA_BGCONAMFDOO_OFFSET UNITYSDK_OFFSET(0xC26A8B0)
#define MLINDDMKFFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC26ACE0)
#define MLINDDMKFFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26A7A0)
#define MLINDDMKFFA_GET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xC26A4B0)
#define MLINDDMKFFA_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xC26A4D0)
#define MLINDDMKFFA_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xC26A510)
#define MLINDDMKFFA_GET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xC26A4F0)
#define MLINDDMKFFA_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xC26A530)
#define MLINDDMKFFA_GPCALFBEJIN_OFFSET UNITYSDK_OFFSET(0xC26ABE0)
#define MLINDDMKFFA_HIEAFKEGNJK_OFFSET UNITYSDK_OFFSET(0xC26A550)
#define MLINDDMKFFA_JBCCBPBBAIJ_OFFSET UNITYSDK_OFFSET(0xC26A9D0)
#define MLINDDMKFFA_LCHCCIGGIAD_OFFSET UNITYSDK_OFFSET(0xC26A5A0)
#define MLINDDMKFFA_MCOBCOLOFKN_OFFSET UNITYSDK_OFFSET(0xC26A7F0)
#define MLINDDMKFFA_MICELLDGGMA_OFFSET UNITYSDK_OFFSET(0xC26AC60)
#define MLINDDMKFFA_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xC26A670)
#define MLINDDMKFFA_ONGFFOMPEIH_OFFSET UNITYSDK_OFFSET(0xC26A970)
#define MLINDDMKFFA_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xC26A740)
#define MLINDDMKFFA_SET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xC26A4C0)
#define MLINDDMKFFA_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xC26A4E0)
#define MLINDDMKFFA_SET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xC26A520)
#define MLINDDMKFFA_SET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xC26A500)
#define MLINDDMKFFA_SET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xC26A540)
#define MLINDDMKFFA___ONCONFIRM_B__39_0_OFFSET UNITYSDK_OFFSET(0xC26ACF0)

inline static constexpr unsigned int MLINDDMKFFA_TypeDefinitionIndex = 82415;

	class MLINDDMKFFA : public ::System::Object
	{
	public:
		::KCJNGDLDKFG* _FlowCoordinator_k__BackingField; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* _TalentEntrance_k__BackingField; // 0x18
		::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x20
		::System::Action* ExitHandler; // 0x28
		::FIEEBCKMKDF* _Model_k__BackingField; // 0x30
		::DBHGOLFACFL* _Partners_k__BackingField; // 0x38
		::Sofa::Core::SimpleCommand* GDFKILNCNBC; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>* _RequirementInfos_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_CTOR_OFFSET))(this);
		}

		::KCJNGDLDKFG* get_FlowCoordinator()
		{
			return ((::KCJNGDLDKFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GET_FLOWCOORDINATOR_OFFSET))(this);
		}

		::System::Void set_FlowCoordinator(::KCJNGDLDKFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_SET_FLOWCOORDINATOR_OFFSET))(this, a1);
		}

		::FIEEBCKMKDF* get_Model()
		{
			return ((::FIEEBCKMKDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::FIEEBCKMKDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIEEBCKMKDF*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_SET_MODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>* get_RequirementInfos()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GET_REQUIREMENTINFOS_OFFSET))(this);
		}

		::System::Void set_RequirementInfos(::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_SET_REQUIREMENTINFOS_OFFSET))(this, a1);
		}

		::DBHGOLFACFL* get_Partners()
		{
			return ((::DBHGOLFACFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GET_PARTNERS_OFFSET))(this);
		}

		::System::Void set_Partners(::DBHGOLFACFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBHGOLFACFL*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_SET_PARTNERS_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* get_TalentEntrance()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GET_TALENTENTRANCE_OFFSET))(this);
		}

		::System::Void set_TalentEntrance(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_SET_TALENTENTRANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>* HIEAFKEGNJK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_HIEAFKEGNJK_OFFSET))(this);
		}

		::System::String* LCHCCIGGIAD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_LCHCCIGGIAD_OFFSET))(this);
		}

		::RPG::Client::TextID BDEIJHFFFEM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_BDEIJHFFFEM_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void add_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_ADD_EXITHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_REMOVE_EXITHANDLER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_DISPOSE_OFFSET))(this);
		}

		::CEEGMMCFCBG* MCOBCOLOFKN()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_MCOBCOLOFKN_OFFSET))(this);
		}

		::CEEGMMCFCBG* BGCONAMFDOO()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_BGCONAMFDOO_OFFSET))(this);
		}

		::System::Void ONGFFOMPEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_ONGFFOMPEIH_OFFSET))(this);
		}

		::System::Void JBCCBPBBAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_JBCCBPBBAIJ_OFFSET))(this);
		}

		::System::Void MICELLDGGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_MICELLDGGMA_OFFSET))(this);
		}

		::System::Void GPCALFBEJIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_GPCALFBEJIN_OFFSET))(this);
		}

		::System::Void __OnConfirm_b__39_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLINDDMKFFA___ONCONFIRM_B__39_0_OFFSET))(this, a1);
		}

	};
