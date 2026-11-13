#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBGDEFLFLMI;
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightDraftItemData; }
namespace RPG::Client { class GridFightDraftSelectAction; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D5A36A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4130)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_BOTTOMDROPLIST_OFFSET UNITYSDK_OFFSET(0x1D5A47E0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D5A4320)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1D5A47A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1D5A4300)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1D5A4720)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1D5A4370)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x1D5A43D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0x1D5A4550)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1D5A4780)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_TOPDROP_OFFSET UNITYSDK_OFFSET(0x1D5A47C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_BOTTOMDROPLIST_OFFSET UNITYSDK_OFFSET(0x1D5A47F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1D5A47B0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1D5A4310)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x1D5A4790)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_TOPDROP_OFFSET UNITYSDK_OFFSET(0x1D5A47D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D5A4140)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D5A4800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftItemData_TypeDefinitionIndex = 66075;

	class GridFightDraftItemData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x10
		::RPG::Client::GridFightDraftSelectAction* _OwnerAction; // 0x18
		::RPG::Client::GridFightBonusDropData* _TopDrop_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _BottomDropList_k__BackingField; // 0x30
		::System::Int32 _Index_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightDraftItemData* Create(::NBGDEFLFLMI* a1, ::System::Int32 a2, ::RPG::Client::GridFightDraftSelectAction* a3)
		{
			return ((::RPG::Client::GridFightDraftItemData*(*)(::NBGDEFLFLMI*, ::System::Int32, ::RPG::Client::GridFightDraftSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean _CheckCanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET))(this);
		}

		::System::Void set_EquipList(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBonusDropData* get_TopDrop()
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_TOPDROP_OFFSET))(this);
		}

		::System::Void set_TopDrop(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_TOPDROP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_BottomDropList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_BOTTOMDROPLIST_OFFSET))(this);
		}

		::System::Void set_BottomDropList(::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_BOTTOMDROPLIST_OFFSET))(this, a1);
		}

		::System::Boolean __CheckCanRoleUpdate_b__1_0(::RPG::Client::GridFightDraftItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDraftItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET))(this, a1);
		}

	};
}
