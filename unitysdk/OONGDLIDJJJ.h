#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHNBMDPFNO;
class GKLLKNJFFJP;
class NOPLLNPJONB;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OONGDLIDJJJ_BGECKMKHDJD_OFFSET UNITYSDK_OFFSET(0xBF88F60)
#define OONGDLIDJJJ_CBMEEMKADFB_OFFSET UNITYSDK_OFFSET(0xBF8A130)
#define OONGDLIDJJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF88A80)
#define OONGDLIDJJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF88DF0)
#define OONGDLIDJJJ_DPDLCBNIBAP_OFFSET UNITYSDK_OFFSET(0xBF89870)
#define OONGDLIDJJJ_DPNPFBOBKLN_OFFSET UNITYSDK_OFFSET(0xBF8A8D0)
#define OONGDLIDJJJ_GET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xBF8A7C0)
#define OONGDLIDJJJ_GET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xBF8A830)
#define OONGDLIDJJJ_GET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xBF8A850)
#define OONGDLIDJJJ_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0xBF8A890)
#define OONGDLIDJJJ_GET_HASAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0xBF8A870)
#define OONGDLIDJJJ_GET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0xBF8A810)
#define OONGDLIDJJJ_GET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0xBF8A8B0)
#define OONGDLIDJJJ_GET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0xBF8A800)
#define OONGDLIDJJJ_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0xBF8A7E0)
#define OONGDLIDJJJ_GNFMCBFIEDD_OFFSET UNITYSDK_OFFSET(0xBF8A0A0)
#define OONGDLIDJJJ_HCPFCMALNLE_OFFSET UNITYSDK_OFFSET(0xBF89FF0)
#define OONGDLIDJJJ_IOBCFKNLJOK_OFFSET UNITYSDK_OFFSET(0xBF89C30)
#define OONGDLIDJJJ_JFFGJCJDOCK_OFFSET UNITYSDK_OFFSET(0xBF8A1A0)
#define OONGDLIDJJJ_KCCOOJIJIPA_OFFSET UNITYSDK_OFFSET(0xBF89A50)
#define OONGDLIDJJJ_LAOHGCAMDPH_OFFSET UNITYSDK_OFFSET(0xBF89F30)
#define OONGDLIDJJJ_LFGPDPIGIHM_OFFSET UNITYSDK_OFFSET(0xBF89DF0)
#define OONGDLIDJJJ_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xBF8A7A0)
#define OONGDLIDJJJ_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0xBF894A0)
#define OONGDLIDJJJ_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0xBF89930)
#define OONGDLIDJJJ_NGANINPLLJK_OFFSET UNITYSDK_OFFSET(0xBF892C0)
#define OONGDLIDJJJ_NJCOEMGBPJA_OFFSET UNITYSDK_OFFSET(0xBF89B70)
#define OONGDLIDJJJ_OGHOEIBAIOD_OFFSET UNITYSDK_OFFSET(0xBF89D50)
#define OONGDLIDJJJ_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0xBF890E0)
#define OONGDLIDJJJ_PFOPJNGPFBC_OFFSET UNITYSDK_OFFSET(0xBF89690)
#define OONGDLIDJJJ_SET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xBF8A7B0)
#define OONGDLIDJJJ_SET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xBF8A840)
#define OONGDLIDJJJ_SET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xBF8A860)
#define OONGDLIDJJJ_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0xBF8A8A0)
#define OONGDLIDJJJ_SET_HASAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0xBF8A880)
#define OONGDLIDJJJ_SET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0xBF8A820)
#define OONGDLIDJJJ_SET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0xBF8A8C0)
#define OONGDLIDJJJ_SET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0xBF8A7F0)
#define OONGDLIDJJJ_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0xBF8A7D0)

inline static constexpr unsigned int OONGDLIDJJJ_TypeDefinitionIndex = 54335;

	class OONGDLIDJJJ : public ::System::Object
	{
	public:
		::GKLLKNJFFJP* _GlobalVars_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AISequenceSkillIDList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* KEFAKHJCHLF; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* OJANELEACLE; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* FEONBGCCLBB; // 0x30
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38
		::System::String* _VariableAnimConfigRefKey_k__BackingField; // 0x40
		::System::String* _VariableForbidClearSkillUseRecordRefKey_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _AISkillTargetEntityList_k__BackingField; // 0x50
		::System::Collections::Generic::HashSet_1<::System::String*>* PPKBODLJJKD; // 0x58
		::System::Int32 _AIActionTurnCount_k__BackingField; // 0x60
		::System::Int32 _LastSequenceSkillIdx_k__BackingField; // 0x64
		::System::Boolean _OnlyUltraFlag_k__BackingField; // 0x68
		::System::Boolean _HasAvailableSkill_k__BackingField; // 0x69
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void BGECKMKHDJD(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_BGECKMKHDJD_OFFSET))(this, a1);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void NGANINPLLJK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_NGANINPLLJK_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::System::Void PFOPJNGPFBC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_PFOPJNGPFBC_OFFSET))(this, a1, a2);
		}

		::System::Void DPDLCBNIBAP(::System::String* a1, ::GKHNBMDPFNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GKHNBMDPFNO*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_DPDLCBNIBAP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::System::Int32 KCCOOJIJIPA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_KCCOOJIJIPA_OFFSET))(this, a1);
		}

		::System::Int32 IOBCFKNLJOK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_IOBCFKNLJOK_OFFSET))(this, a1);
		}

		::System::Boolean OGHOEIBAIOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_OGHOEIBAIOD_OFFSET))(this);
		}

		::System::Void LFGPDPIGIHM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_LFGPDPIGIHM_OFFSET))(this, a1, a2);
		}

		::System::Void HCPFCMALNLE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_HCPFCMALNLE_OFFSET))(this, a1);
		}

		::System::Void GNFMCBFIEDD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GNFMCBFIEDD_OFFSET))(this, a1);
		}

		::System::Boolean CBMEEMKADFB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_CBMEEMKADFB_OFFSET))(this, a1);
		}

		::System::Boolean JFFGJCJDOCK(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_JFFGJCJDOCK_OFFSET))(this, a1, a2);
		}

		::System::Void LAOHGCAMDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_LAOHGCAMDPH_OFFSET))(this);
		}

		::System::Void NJCOEMGBPJA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_NJCOEMGBPJA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_LHMKCOHPLMN_OFFSET))(this);
		}

		::System::Void set_AIActionTurnCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_AIACTIONTURNCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_AIActionTurnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_AIACTIONTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_VariableForbidClearSkillUseRecordRefKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this, a1);
		}

		::System::String* get_VariableForbidClearSkillUseRecordRefKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this);
		}

		::System::Void set_VariableAnimConfigRefKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this, a1);
		}

		::System::String* get_VariableAnimConfigRefKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this);
		}

		::System::Int32 get_LastSequenceSkillIdx()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_LASTSEQUENCESKILLIDX_OFFSET))(this);
		}

		::System::Void set_LastSequenceSkillIdx(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_LASTSEQUENCESKILLIDX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AISequenceSkillIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_AISEQUENCESKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_AISequenceSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_AISEQUENCESKILLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_AISkillTargetEntityList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_AISKILLTARGETENTITYLIST_OFFSET))(this);
		}

		::System::Void set_AISkillTargetEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_AISKILLTARGETENTITYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAvailableSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_HASAVAILABLESKILL_OFFSET))(this);
		}

		::System::Void set_HasAvailableSkill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_HASAVAILABLESKILL_OFFSET))(this, a1);
		}

		::GKLLKNJFFJP* get_GlobalVars()
		{
			return ((::GKLLKNJFFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_GLOBALVARS_OFFSET))(this);
		}

		::System::Void set_GlobalVars(::GKLLKNJFFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKLLKNJFFJP*))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_GLOBALVARS_OFFSET))(this, a1);
		}

		::System::Boolean get_OnlyUltraFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_GET_ONLYULTRAFLAG_OFFSET))(this);
		}

		::System::Void set_OnlyUltraFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_SET_ONLYULTRAFLAG_OFFSET))(this, a1);
		}

		::NOPLLNPJONB* DPNPFBOBKLN()
		{
			return ((::NOPLLNPJONB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_DPNPFBOBKLN_OFFSET))(this);
		}

	};
