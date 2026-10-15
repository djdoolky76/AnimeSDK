#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/InputNoteType.h"
#include "unitysdk/RPG/GameCore/NoteType.h"
#include "unitysdk/System/Object.h"
class HMABMBCFEJH;
class JOKBBIDAKOF;
class PLKOBHJHPEM;
namespace RPG::GameCore { class NoteConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMABMBCFEJH_CMKPHPAILMP_OFFSET UNITYSDK_OFFSET(0x15D6B510)
#define HMABMBCFEJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D696D0)
#define HMABMBCFEJH_FAPFNECBGKL_OFFSET UNITYSDK_OFFSET(0x15D6BB60)
#define HMABMBCFEJH_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCE0)
#define HMABMBCFEJH_GET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x15D6BC20)
#define HMABMBCFEJH_GET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x15D6BC40)
#define HMABMBCFEJH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D6BBE0)
#define HMABMBCFEJH_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD20)
#define HMABMBCFEJH_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15D6BC00)
#define HMABMBCFEJH_GET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC60)
#define HMABMBCFEJH_GET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC80)
#define HMABMBCFEJH_GET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD00)
#define HMABMBCFEJH_GET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x15D6BCA0)
#define HMABMBCFEJH_GET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x15D6BD40)
#define HMABMBCFEJH_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCC0)
#define HMABMBCFEJH_IGHEJONENJH_OFFSET UNITYSDK_OFFSET(0x15D6A9C0)
#define HMABMBCFEJH_JEMHLHGJFHM_OFFSET UNITYSDK_OFFSET(0x15D6B470)
#define HMABMBCFEJH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15D6A4D0)
#define HMABMBCFEJH_KBADALMFDJH_OFFSET UNITYSDK_OFFSET(0x15D6B3C0)
#define HMABMBCFEJH_KLOMMNGBMDL_OFFSET UNITYSDK_OFFSET(0x15D6B750)
#define HMABMBCFEJH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15D6B550)
#define HMABMBCFEJH_OHBMPHAJKEP_OFFSET UNITYSDK_OFFSET(0x15D6B980)
#define HMABMBCFEJH_PIGHCJOFJMF_OFFSET UNITYSDK_OFFSET(0x15D6B4D0)
#define HMABMBCFEJH_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCF0)
#define HMABMBCFEJH_SET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x15D6BC30)
#define HMABMBCFEJH_SET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x15D6BC50)
#define HMABMBCFEJH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D6BBF0)
#define HMABMBCFEJH_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD30)
#define HMABMBCFEJH_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15D6BC10)
#define HMABMBCFEJH_SET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC70)
#define HMABMBCFEJH_SET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC90)
#define HMABMBCFEJH_SET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD10)
#define HMABMBCFEJH_SET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x15D6BCB0)
#define HMABMBCFEJH_SET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x15D6BD50)
#define HMABMBCFEJH_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCD0)

inline static constexpr unsigned int HMABMBCFEJH_TypeDefinitionIndex = 60176;

	class HMABMBCFEJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* LFHMFMNDBNF; // 0x10
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* DKMAANGBIAO; // 0x18
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* HBNCHDPEDGG; // 0x20
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* JGBHKIKKABP; // 0x28
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* LMOHCFMKIIE; // 0x30
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* BHEFFFDPGHM; // 0x38
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* LKJJFEFJGID; // 0x40
		::JOKBBIDAKOF* _OwnerGroup_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* JKHGCKDHAAN; // 0x50
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* AOCOFKCFFHE; // 0x58
		::System::Single _StartTime_k__BackingField; // 0x60
		::System::Single _EndTime_k__BackingField; // 0x64
		::System::Single _PressTime_k__BackingField; // 0x68
		::System::Boolean DDDMMHJBCHO; // 0x6C
		::System::Boolean _HasKeyUp_k__BackingField; // 0x6D
		::System::Boolean _IsActive_k__BackingField; // 0x6E
		::System::Boolean _HasKeyDown_k__BackingField; // 0x6F
		::System::Int32 _Index_k__BackingField; // 0x70
		::RPG::Client::NoteInputResult _KeyDownResult_k__BackingField; // 0x74
		::RPG::GameCore::NoteType _NoteType_k__BackingField; // 0x78
		::RPG::GameCore::InputNoteType _InputType_k__BackingField; // 0x7C
		::RPG::Client::NoteInputResult _KeyUpResult_k__BackingField; // 0x80
		::System::Single NJOLMHEDFGM; // 0x84
		::System::Void _ctor(::JOKBBIDAKOF* a1, ::RPG::GameCore::NoteConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOKBBIDAKOF*, ::RPG::GameCore::NoteConfig*))((::PBYTE)hIl2Cpp + HMABMBCFEJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KBADALMFDJH(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_KBADALMFDJH_OFFSET))(this, a1);
		}

		::System::Boolean JEMHLHGJFHM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_JEMHLHGJFHM_OFFSET))(this, a1);
		}

		::System::Void PIGHCJOFJMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_PIGHCJOFJMF_OFFSET))(this);
		}

		::System::Void CMKPHPAILMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_CMKPHPAILMP_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::HMABMBCFEJH* KLOMMNGBMDL(::System::Single a1)
		{
			return ((::HMABMBCFEJH*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_KLOMMNGBMDL_OFFSET))(this, a1);
		}

		::System::Boolean OHBMPHAJKEP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_OHBMPHAJKEP_OFFSET))(this, a1);
		}

		::System::Single FAPFNECBGKL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_FAPFNECBGKL_OFFSET))(this);
		}

		::System::Void IGHEJONENJH(::RPG::Client::NoteInputResult a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HMABMBCFEJH_IGHEJONENJH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasKeyDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_HASKEYDOWN_OFFSET))(this);
		}

		::System::Void set_HasKeyDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_HASKEYDOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_HasKeyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_HASKEYUP_OFFSET))(this);
		}

		::System::Void set_HasKeyUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_HASKEYUP_OFFSET))(this, a1);
		}

		::RPG::Client::NoteInputResult get_KeyDownResult()
		{
			return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_KEYDOWNRESULT_OFFSET))(this);
		}

		::System::Void set_KeyDownResult(::RPG::Client::NoteInputResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_KEYDOWNRESULT_OFFSET))(this, a1);
		}

		::RPG::Client::NoteInputResult get_KeyUpResult()
		{
			return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_KEYUPRESULT_OFFSET))(this);
		}

		::System::Void set_KeyUpResult(::RPG::Client::NoteInputResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_KEYUPRESULT_OFFSET))(this, a1);
		}

		::JOKBBIDAKOF* get_OwnerGroup()
		{
			return ((::JOKBBIDAKOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_OWNERGROUP_OFFSET))(this);
		}

		::System::Void set_OwnerGroup(::JOKBBIDAKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOKBBIDAKOF*))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_OWNERGROUP_OFFSET))(this, a1);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_ENDTIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::NoteType get_NoteType()
		{
			return ((::RPG::GameCore::NoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_NOTETYPE_OFFSET))(this);
		}

		::System::Void set_NoteType(::RPG::GameCore::NoteType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteType))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_NOTETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::InputNoteType get_InputType()
		{
			return ((::RPG::GameCore::InputNoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_InputType(::RPG::GameCore::InputNoteType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InputNoteType))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_INPUTTYPE_OFFSET))(this, a1);
		}

		::System::Single get_PressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HMABMBCFEJH_GET_PRESSTIME_OFFSET))(this);
		}

		::System::Void set_PressTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMABMBCFEJH_SET_PRESSTIME_OFFSET))(this, a1);
		}

	};
