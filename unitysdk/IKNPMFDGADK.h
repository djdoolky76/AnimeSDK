#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class AAFIACIMMHE;
class AKMFECNJFBG;
class BOJOBHMEEIH;
class CCEIJBFAOAI;
class CEEGMMCFCBG;
class IKNPMFDGADK_AIJMLMNGDEB;
class OBJANKHLNGO;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IKNPMFDGADK_ADD_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1648FE90)
#define IKNPMFDGADK_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1648FF50)
#define IKNPMFDGADK_ADD_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FD10)
#define IKNPMFDGADK_ADD_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1648FC50)
#define IKNPMFDGADK_ADD_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FDD0)
#define IKNPMFDGADK_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1648FB90)
#define IKNPMFDGADK_CTOR_OFFSET UNITYSDK_OFFSET(0x16490050)
#define IKNPMFDGADK_DBBPEJCMDOG_OFFSET UNITYSDK_OFFSET(0x16490390)
#define IKNPMFDGADK_DGMHADMFHMF_OFFSET UNITYSDK_OFFSET(0x16490C70)
#define IKNPMFDGADK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16490120)
#define IKNPMFDGADK_GET__CANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1648FA80)
#define IKNPMFDGADK_IAECDEILOHO_OFFSET UNITYSDK_OFFSET(0x1648FA90)
#define IKNPMFDGADK_JHJGKPPCPIL_OFFSET UNITYSDK_OFFSET(0x164901F0)
#define IKNPMFDGADK_LCJPNGKAALE_OFFSET UNITYSDK_OFFSET(0x16490190)
#define IKNPMFDGADK_PDDIIOBCENC_OFFSET UNITYSDK_OFFSET(0x16490400)
#define IKNPMFDGADK_PGLJCNMNIJC_OFFSET UNITYSDK_OFFSET(0x1648FAD0)
#define IKNPMFDGADK_REMOVE_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1648FEF0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1648FFD0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FD70)
#define IKNPMFDGADK_REMOVE_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1648FCB0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FE30)
#define IKNPMFDGADK_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1648FBF0)
#define IKNPMFDGADK__GET_SUBMITCOMMAND_B__10_0_OFFSET UNITYSDK_OFFSET(0x16491990)
#define IKNPMFDGADK___SUBMIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x16491B20)

inline static constexpr unsigned int IKNPMFDGADK_TypeDefinitionIndex = 79587;

	class IKNPMFDGADK : public ::System::Object
	{
	public:
		::System::Action* HandleHintRequiredConstraintsNotMet; // 0x10
		::AAFIACIMMHE* KAKBLCLNGAO; // 0x18
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x20
		::System::Action* HandleDeselect; // 0x28
		::CEEGMMCFCBG* DIGPBKLALJE; // 0x30
		::System::Action* HandleHintImproperPlacement; // 0x38
		::System::Action* HandleHintAttrTraitTargetNotMet; // 0x40
		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* __CanSubmit_k__BackingField; // 0x48
		::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleHintAsymmetricCells; // 0x50
		::BOJOBHMEEIH* GJALMBBNNOF; // 0x58
		::System::Action_1<::System::Boolean>* HandleSetExitAfterTransition; // 0x60
		::System::Void _ctor(::CCEIJBFAOAI* a1, ::AAFIACIMMHE* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*, ::AAFIACIMMHE*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* get__CanSubmit()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_GET__CANSUBMIT_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* IAECDEILOHO()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_IAECDEILOHO_OFFSET))(this);
		}

		::CEEGMMCFCBG* PGLJCNMNIJC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_PGLJCNMNIJC_OFFSET))(this);
		}

		::System::Void add_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void remove_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintImproperPlacement(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEHINTIMPROPERPLACEMENT_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintImproperPlacement(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEHINTIMPROPERPLACEMENT_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintAttrTraitTargetNotMet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintAttrTraitTargetNotMet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintRequiredConstraintsNotMet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintRequiredConstraintsNotMet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET))(this, a1);
		}

		::System::Void add_HandleDeselect(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEDESELECT_OFFSET))(this, a1);
		}

		::System::Void remove_HandleDeselect(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEDESELECT_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_DISPOSE_OFFSET))(this);
		}

		::System::Void LCJPNGKAALE(::System::Object* a1, ::IKNPMFDGADK_AIJMLMNGDEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::IKNPMFDGADK_AIJMLMNGDEB*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_LCJPNGKAALE_OFFSET))(this, a1, a2);
		}

		::System::Void JHJGKPPCPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_JHJGKPPCPIL_OFFSET))(this);
		}

		::AKMFECNJFBG* PDDIIOBCENC()
		{
			return ((::AKMFECNJFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_PDDIIOBCENC_OFFSET))(this);
		}

		::System::Void DBBPEJCMDOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKNPMFDGADK_DBBPEJCMDOG_OFFSET))(this, a1);
		}

		::System::Boolean DGMHADMFHMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_DGMHADMFHMF_OFFSET))(this);
		}

		::System::Void _get_SubmitCommand_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK__GET_SUBMITCOMMAND_B__10_0_OFFSET))(this);
		}

		::System::Void __Submit_b__33_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKNPMFDGADK___SUBMIT_B__33_0_OFFSET))(this, a1);
		}

	};
