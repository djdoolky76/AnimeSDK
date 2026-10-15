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
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IKNPMFDGADK_ADD_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1649D580)
#define IKNPMFDGADK_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1649D640)
#define IKNPMFDGADK_ADD_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1649D400)
#define IKNPMFDGADK_ADD_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1649D340)
#define IKNPMFDGADK_ADD_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1649D4C0)
#define IKNPMFDGADK_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1649D280)
#define IKNPMFDGADK_CTOR_OFFSET UNITYSDK_OFFSET(0x1649D740)
#define IKNPMFDGADK_DBBPEJCMDOG_OFFSET UNITYSDK_OFFSET(0x1649DA80)
#define IKNPMFDGADK_DGMHADMFHMF_OFFSET UNITYSDK_OFFSET(0x1649E360)
#define IKNPMFDGADK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1649D810)
#define IKNPMFDGADK_GET__CANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1649D170)
#define IKNPMFDGADK_IAECDEILOHO_OFFSET UNITYSDK_OFFSET(0x1649D180)
#define IKNPMFDGADK_JHJGKPPCPIL_OFFSET UNITYSDK_OFFSET(0x1649D8E0)
#define IKNPMFDGADK_LCJPNGKAALE_OFFSET UNITYSDK_OFFSET(0x1649D880)
#define IKNPMFDGADK_PDDIIOBCENC_OFFSET UNITYSDK_OFFSET(0x1649DAF0)
#define IKNPMFDGADK_PGLJCNMNIJC_OFFSET UNITYSDK_OFFSET(0x1649D1C0)
#define IKNPMFDGADK_REMOVE_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1649D5E0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1649D6C0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1649D460)
#define IKNPMFDGADK_REMOVE_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1649D3A0)
#define IKNPMFDGADK_REMOVE_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1649D520)
#define IKNPMFDGADK_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1649D2E0)
#define IKNPMFDGADK__GET_SUBMITCOMMAND_B__10_0_OFFSET UNITYSDK_OFFSET(0x1649F080)
#define IKNPMFDGADK___SUBMIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x1649F210)

inline static constexpr unsigned int IKNPMFDGADK_TypeDefinitionIndex = 79588;

	class IKNPMFDGADK : public ::System::Object
	{
	public:
		::BOJOBHMEEIH* GJALMBBNNOF; // 0x10
		::System::Action* HandleHintAsymmetricCells; // 0x18
		::System::Action* HandleDeselect; // 0x20
		::System::Action* HandleHintImproperPlacement; // 0x28
		::System::Action* HandleHintAttrTraitTargetNotMet; // 0x30
		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* __CanSubmit_k__BackingField; // 0x38
		::System::Action* HandleSetExitAfterTransition; // 0x40
		::System::Action* HandleHintRequiredConstraintsNotMet; // 0x48
		::CEEGMMCFCBG* DIGPBKLALJE; // 0x50
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x58
		::AAFIACIMMHE* KAKBLCLNGAO; // 0x60
		::System::Void _ctor(::CCEIJBFAOAI* a1, ::AAFIACIMMHE* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*, ::AAFIACIMMHE*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* get__CanSubmit()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_GET__CANSUBMIT_OFFSET))(this);
		}

		::R3::Observable* IAECDEILOHO()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_IAECDEILOHO_OFFSET))(this);
		}

		::CEEGMMCFCBG* PGLJCNMNIJC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNPMFDGADK_PGLJCNMNIJC_OFFSET))(this);
		}

		::System::Void add_HandleSetExitAfterTransition(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void remove_HandleSetExitAfterTransition(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
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

		::System::Void add_HandleHintAsymmetricCells(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintAsymmetricCells(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKNPMFDGADK_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
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
