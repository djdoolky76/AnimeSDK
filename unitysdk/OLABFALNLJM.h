#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/ALCOGHNNPMF.h"
#include "unitysdk/RPG/MVector3.h"
class ECCOABLBMCE;
class EKFMIDBJDIA;
class OLABFALNLJM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLABFALNLJM_CLNLFILGDFE_OFFSET UNITYSDK_OFFSET(0xBEFCF40)
#define OLABFALNLJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFDBC0)
#define OLABFALNLJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEFD170)
#define OLABFALNLJM_EDCBDLMKFLO_OFFSET UNITYSDK_OFFSET(0xBEFCF50)
#define OLABFALNLJM_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xBEFDBA0)
#define OLABFALNLJM_GET_LEADER_OFFSET UNITYSDK_OFFSET(0xBEFDB40)
#define OLABFALNLJM_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xBEFDB60)
#define OLABFALNLJM_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xBEFDB20)
#define OLABFALNLJM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBEFDB80)
#define OLABFALNLJM_GMMFAKECPBC_OFFSET UNITYSDK_OFFSET(0xBEFD410)
#define OLABFALNLJM_HACLPIOHMBF_OFFSET UNITYSDK_OFFSET(0xBEFD110)
#define OLABFALNLJM_HEMJBALNMKB_OFFSET UNITYSDK_OFFSET(0xBEFD480)
#define OLABFALNLJM_HJPMCIHBBCH_OFFSET UNITYSDK_OFFSET(0xBEFD980)
#define OLABFALNLJM_JKPAPEHMNAJ_OFFSET UNITYSDK_OFFSET(0xBEFD000)
#define OLABFALNLJM_KGOLFHKCFBF_OFFSET UNITYSDK_OFFSET(0xBEFD6F0)
#define OLABFALNLJM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBEFCC30)
#define OLABFALNLJM_LNECHCOKKAB_OFFSET UNITYSDK_OFFSET(0xBEFD7A0)
#define OLABFALNLJM_NLDEGNCBGEM_OFFSET UNITYSDK_OFFSET(0xBEFD090)
#define OLABFALNLJM_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xBEFDBB0)
#define OLABFALNLJM_SET_LEADER_OFFSET UNITYSDK_OFFSET(0xBEFDB50)
#define OLABFALNLJM_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xBEFDB70)
#define OLABFALNLJM_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xBEFDB30)
#define OLABFALNLJM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBEFDB90)
#define OLABFALNLJM__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBEFCBE0)

inline static constexpr unsigned int OLABFALNLJM_TypeDefinitionIndex = 56944;

	class OLABFALNLJM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _MemberName_k__BackingField; // 0x18
		::ECCOABLBMCE* KMPEBDPFHDH; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x28
		::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x30
		::System::Int32 BDHPOJCKPIM; // 0x38
		::System::Single NONGGEIOGLE; // 0x3C
		::System::Int32 JCCANEMFCND; // 0x40
		::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x44
		::System::Boolean LJLBJGABCOD; // 0x48
		::System::Boolean DNHLIJEGPBG; // 0x49
		::System::Boolean DMHOLOEKCLD; // 0x4A
		::System::Boolean OFOCDNMJGDF; // 0x4B
		::System::Boolean _IsWeakBinding_k__BackingField; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLABFALNLJM_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::OLABFALNLJM* EDCBDLMKFLO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OLABFALNLJM*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLABFALNLJM_EDCBDLMKFLO_OFFSET))(this, a1);
		}

		::System::Void JKPAPEHMNAJ(::System::Collections::Generic::List_1<::ALCOGHNNPMF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ALCOGHNNPMF>*))((::PBYTE)hIl2Cpp + OLABFALNLJM_JKPAPEHMNAJ_OFFSET))(this, a1);
		}

		::System::Void NLDEGNCBGEM(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLABFALNLJM_NLDEGNCBGEM_OFFSET))(this, a1, a2);
		}

		::System::Void HACLPIOHMBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_HACLPIOHMBF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_DISPOSE_OFFSET))(this);
		}

		::System::Void GMMFAKECPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GMMFAKECPBC_OFFSET))(this);
		}

		::System::Void HEMJBALNMKB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OLABFALNLJM_HEMJBALNMKB_OFFSET))(this, a1);
		}

		::System::Void KGOLFHKCFBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLABFALNLJM_KGOLFHKCFBF_OFFSET))(this, a1);
		}

		::System::Void LNECHCOKKAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_LNECHCOKKAB_OFFSET))(this);
		}

		::System::Void HJPMCIHBBCH(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + OLABFALNLJM_HJPMCIHBBCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OLABFALNLJM_SET_MEMBERS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Leader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GET_LEADER_OFFSET))(this);
		}

		::System::Void set_Leader(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLABFALNLJM_SET_LEADER_OFFSET))(this, a1);
		}

		::System::Boolean CLNLFILGDFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_CLNLFILGDFE_OFFSET))(this);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLABFALNLJM_SET_MEMBERNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterGroupMemberType get_Type()
		{
			return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + OLABFALNLJM_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWeakBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLABFALNLJM_GET_ISWEAKBINDING_OFFSET))(this);
		}

		::System::Void set_IsWeakBinding(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLABFALNLJM_SET_ISWEAKBINDING_OFFSET))(this, a1);
		}

	};
