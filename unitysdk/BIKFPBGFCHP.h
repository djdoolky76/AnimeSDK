#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BIKFPBGFCHP_AGPDDEPAAPE;
class BIKFPBGFCHP_DBCNMFLPFCK;
class BIKFPBGFCHP_HIEDPDLIHKF;
class BIKFPBGFCHP_JJPIPEJJOEG;
class CCEIJBFAOAI;
class NKIJFPHFJCO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define BIKFPBGFCHP_ACHJMLDENOG_OFFSET UNITYSDK_OFFSET(0xB4AED30)
#define BIKFPBGFCHP_ADD_HANDLEFORCEHINTBUFFED_OFFSET UNITYSDK_OFFSET(0xB4B0620)
#define BIKFPBGFCHP_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0xB4B0140)
#define BIKFPBGFCHP_ADD_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0xB4B0520)
#define BIKFPBGFCHP_ADD_ONBUFFAFFECTEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFE70)
#define BIKFPBGFCHP_ADD_ONBUFFAFFECTEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFCA0)
#define BIKFPBGFCHP_ADD_ONBUFFAFFECTINGCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF9B0)
#define BIKFPBGFCHP_ADD_ONBUFFPREVIEWCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B0040)
#define BIKFPBGFCHP_ADD_ONCOVEREDBANNEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF7D0)
#define BIKFPBGFCHP_ADD_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF600)
#define BIKFPBGFCHP_ADD_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF420)
#define BIKFPBGFCHP_ADD_ONTUTORIALTARGETCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B0420)
#define BIKFPBGFCHP_AHDIPIDANOF_OFFSET UNITYSDK_OFFSET(0xB4AFAB0)
#define BIKFPBGFCHP_AJGOGDOMEPK_OFFSET UNITYSDK_OFFSET(0xB4B0240)
#define BIKFPBGFCHP_ANACKAOHLBL_OFFSET UNITYSDK_OFFSET(0xB4AF080)
#define BIKFPBGFCHP_CAPMECBHPFI_OFFSET UNITYSDK_OFFSET(0xB4AFDA0)
#define BIKFPBGFCHP_CCAFBBNIKJO_OFFSET UNITYSDK_OFFSET(0xB4AEF10)
#define BIKFPBGFCHP_COFEMKNFFJO_OFFSET UNITYSDK_OFFSET(0xB4AF260)
#define BIKFPBGFCHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B0720)
#define BIKFPBGFCHP_DCMDIHKONNM_OFFSET UNITYSDK_OFFSET(0xB4AFFB0)
#define BIKFPBGFCHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B0A40)
#define BIKFPBGFCHP_EPMAKLNANBE_OFFSET UNITYSDK_OFFSET(0xB4AF030)
#define BIKFPBGFCHP_FFIBICMEPNC_OFFSET UNITYSDK_OFFSET(0xB4AF520)
#define BIKFPBGFCHP_GFNDEDMPJNA_OFFSET UNITYSDK_OFFSET(0xB4AFDE0)
#define BIKFPBGFCHP_HCHKHMMDJEG_OFFSET UNITYSDK_OFFSET(0xB4AF210)
#define BIKFPBGFCHP_HKKHKBBONBC_OFFSET UNITYSDK_OFFSET(0xB4B0960)
#define BIKFPBGFCHP_IGLEOANPPBH_OFFSET UNITYSDK_OFFSET(0xB4AF910)
#define BIKFPBGFCHP_IIJPOLMDAPJ_OFFSET UNITYSDK_OFFSET(0xB4AF700)
#define BIKFPBGFCHP_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0xB4AEC10)
#define BIKFPBGFCHP_IKPHCHFGAHO_OFFSET UNITYSDK_OFFSET(0xB4B0D60)
#define BIKFPBGFCHP_IOFDMLEHGJP_OFFSET UNITYSDK_OFFSET(0xB4AF740)
#define BIKFPBGFCHP_JAKPFDEJCDF_OFFSET UNITYSDK_OFFSET(0xB4B0B90)
#define BIKFPBGFCHP_JGBCOCFKLIG_OFFSET UNITYSDK_OFFSET(0xB4AFF70)
#define BIKFPBGFCHP_KCLGAIHOOOG_OFFSET UNITYSDK_OFFSET(0xB4AF560)
#define BIKFPBGFCHP_KJAPFLDHJLD_OFFSET UNITYSDK_OFFSET(0xB4B0280)
#define BIKFPBGFCHP_LLEEKEOKKAI_OFFSET UNITYSDK_OFFSET(0xB4B0C00)
#define BIKFPBGFCHP_NGILPCJFJHB_OFFSET UNITYSDK_OFFSET(0xB4AECA0)
#define BIKFPBGFCHP_OKPFBCEJKBI_OFFSET UNITYSDK_OFFSET(0xB4AED80)
#define BIKFPBGFCHP_OLPMHFEGAEP_OFFSET UNITYSDK_OFFSET(0xB4AFAF0)
#define BIKFPBGFCHP_ONPPBDCBDPL_OFFSET UNITYSDK_OFFSET(0xB4AF8D0)
#define BIKFPBGFCHP_PIEAALBPDLG_OFFSET UNITYSDK_OFFSET(0xB4B0CD0)
#define BIKFPBGFCHP_REMOVE_HANDLEFORCEHINTBUFFED_OFFSET UNITYSDK_OFFSET(0xB4B06A0)
#define BIKFPBGFCHP_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0xB4B01C0)
#define BIKFPBGFCHP_REMOVE_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0xB4B05A0)
#define BIKFPBGFCHP_REMOVE_ONBUFFAFFECTEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFEF0)
#define BIKFPBGFCHP_REMOVE_ONBUFFAFFECTEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFD20)
#define BIKFPBGFCHP_REMOVE_ONBUFFAFFECTINGCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFA30)
#define BIKFPBGFCHP_REMOVE_ONBUFFPREVIEWCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B00C0)
#define BIKFPBGFCHP_REMOVE_ONCOVEREDBANNEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF850)
#define BIKFPBGFCHP_REMOVE_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF680)
#define BIKFPBGFCHP_REMOVE_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF4A0)
#define BIKFPBGFCHP_REMOVE_ONTUTORIALTARGETCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B04A0)
#define BIKFPBGFCHP___REFRESHPREVIEWOVERLAPPEDCELLS_G__ISSTILLOVERLAPPEDEVENWHENCONSIDERINGDRAGGED_89_0_OFFSET UNITYSDK_OFFSET(0xB4B0DD0)

inline static constexpr unsigned int BIKFPBGFCHP_TypeDefinitionIndex = 79454;

	class BIKFPBGFCHP : public ::System::Object
	{
	public:
		::BIKFPBGFCHP_HIEDPDLIHKF* OnBuffPreviewCellsChanged; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* CENPHKJBLPK; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* KECBLJENOBE; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* MGLENJEDGCJ; // 0x28
		::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* HandleHintPlaced; // 0x30
		::BIKFPBGFCHP_HIEDPDLIHKF* OnCoveredBannedCellsChanged; // 0x38
		::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* MEAAPCKMMNJ; // 0x40
		::BIKFPBGFCHP_JJPIPEJJOEG* OnBuffAffectingCellsChanged; // 0x48
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* DKMENDFGGPD; // 0x50
		::BIKFPBGFCHP_DBCNMFLPFCK* OnBuffAffectedLinesChanged; // 0x58
		::BIKFPBGFCHP_JJPIPEJJOEG* OnBuffAffectedCellsChanged; // 0x60
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* BIIOHGHDAGF; // 0x68
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* NFKOGIKHLGJ; // 0x70
		::BIKFPBGFCHP_AGPDDEPAAPE* OnTutorialTargetCellsChanged; // 0x78
		::BIKFPBGFCHP_AGPDDEPAAPE* OnPreviewOverlappedCellsChanged; // 0x80
		::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleForceHintBuffed; // 0x88
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* MMHBILCCJOG; // 0x90
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x98
		::BIKFPBGFCHP_HIEDPDLIHKF* OnErroneousOverlappedCellsChanged; // 0xA0
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* IADIPFGACDL; // 0xA8
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* CAEKHIPPCMB; // 0xB0
		::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleHintAsymmetricCells; // 0xB8
		::System::Void _ctor(::CCEIJBFAOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int IKOCHGBIGPJ()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* NGILPCJFJHB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_NGILPCJFJHB_OFFSET))(this);
		}

		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* ACHJMLDENOG()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ACHJMLDENOG_OFFSET))(this);
		}

		::System::Void OKPFBCEJKBI(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_OKPFBCEJKBI_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* EPMAKLNANBE()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_EPMAKLNANBE_OFFSET))(this);
		}

		::System::Void ANACKAOHLBL(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ANACKAOHLBL_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* HCHKHMMDJEG()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HCHKHMMDJEG_OFFSET))(this);
		}

		::System::Void COFEMKNFFJO(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_COFEMKNFFJO_OFFSET))(this, a1);
		}

		::System::Void add_OnPreviewOverlappedCellsChanged(::BIKFPBGFCHP_AGPDDEPAAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_AGPDDEPAAPE*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPreviewOverlappedCellsChanged(::BIKFPBGFCHP_AGPDDEPAAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_AGPDDEPAAPE*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* FFIBICMEPNC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_FFIBICMEPNC_OFFSET))(this);
		}

		::System::Void KCLGAIHOOOG(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_KCLGAIHOOOG_OFFSET))(this, a1);
		}

		::System::Void add_OnErroneousOverlappedCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnErroneousOverlappedCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* IIJPOLMDAPJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_IIJPOLMDAPJ_OFFSET))(this);
		}

		::System::Void IOFDMLEHGJP(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_IOFDMLEHGJP_OFFSET))(this, a1);
		}

		::System::Void add_OnCoveredBannedCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONCOVEREDBANNEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCoveredBannedCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONCOVEREDBANNEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* ONPPBDCBDPL()
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ONPPBDCBDPL_OFFSET))(this);
		}

		::System::Void IGLEOANPPBH(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_IGLEOANPPBH_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffAffectingCellsChanged(::BIKFPBGFCHP_JJPIPEJJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_JJPIPEJJOEG*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONBUFFAFFECTINGCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffAffectingCellsChanged(::BIKFPBGFCHP_JJPIPEJJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_JJPIPEJJOEG*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONBUFFAFFECTINGCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* AHDIPIDANOF()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AHDIPIDANOF_OFFSET))(this);
		}

		::System::Void OLPMHFEGAEP(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_OLPMHFEGAEP_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffAffectedLinesChanged(::BIKFPBGFCHP_DBCNMFLPFCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_DBCNMFLPFCK*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONBUFFAFFECTEDLINESCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffAffectedLinesChanged(::BIKFPBGFCHP_DBCNMFLPFCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_DBCNMFLPFCK*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONBUFFAFFECTEDLINESCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* CAPMECBHPFI()
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_CAPMECBHPFI_OFFSET))(this);
		}

		::System::Void GFNDEDMPJNA(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_GFNDEDMPJNA_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffAffectedCellsChanged(::BIKFPBGFCHP_JJPIPEJJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_JJPIPEJJOEG*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONBUFFAFFECTEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffAffectedCellsChanged(::BIKFPBGFCHP_JJPIPEJJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_JJPIPEJJOEG*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONBUFFAFFECTEDCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* JGBCOCFKLIG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JGBCOCFKLIG_OFFSET))(this);
		}

		::System::Void DCMDIHKONNM(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DCMDIHKONNM_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffPreviewCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONBUFFPREVIEWCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffPreviewCellsChanged(::BIKFPBGFCHP_HIEDPDLIHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_HIEDPDLIHKF*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONBUFFPREVIEWCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* AJGOGDOMEPK()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AJGOGDOMEPK_OFFSET))(this);
		}

		::System::Void KJAPFLDHJLD(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_KJAPFLDHJLD_OFFSET))(this, a1);
		}

		::System::Void add_OnTutorialTargetCellsChanged(::BIKFPBGFCHP_AGPDDEPAAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_AGPDDEPAAPE*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_ONTUTORIALTARGETCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTutorialTargetCellsChanged(::BIKFPBGFCHP_AGPDDEPAAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP_AGPDDEPAAPE*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_ONTUTORIALTARGETCELLSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintPlaced(::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_HANDLEHINTPLACED_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintPlaced(::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_HANDLEHINTPLACED_OFFSET))(this, a1);
		}

		::System::Void add_HandleForceHintBuffed(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_ADD_HANDLEFORCEHINTBUFFED_OFFSET))(this, a1);
		}

		::System::Void remove_HandleForceHintBuffed(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_REMOVE_HANDLEFORCEHINTBUFFED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DISPOSE_OFFSET))(this);
		}

		::System::Void JAKPFDEJCDF(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JAKPFDEJCDF_OFFSET))(this, a1);
		}

		::System::Void LLEEKEOKKAI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_LLEEKEOKKAI_OFFSET))(this, a1);
		}

		::System::Void PIEAALBPDLG(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_PIEAALBPDLG_OFFSET))(this, a1);
		}

		::System::Void IKPHCHFGAHO(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_IKPHCHFGAHO_OFFSET))(this, a1);
		}

		::System::Void HKKHKBBONBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HKKHKBBONBC_OFFSET))(this);
		}

		::System::Void CCAFBBNIKJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_CCAFBBNIKJO_OFFSET))(this);
		}

		::System::Boolean __RefreshPreviewOverlappedCells_g__IsStillOverlappedEvenWhenConsideringDragged_89_0(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + BIKFPBGFCHP___REFRESHPREVIEWOVERLAPPEDCELLS_G__ISSTILLOVERLAPPEDEVENWHENCONSIDERINGDRAGGED_89_0_OFFSET))(this, a1);
		}

	};
