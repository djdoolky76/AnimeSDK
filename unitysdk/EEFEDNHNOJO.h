#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftChipMoldFilterItemType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EEFEDNHNOJO;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EEFEDNHNOJO_ADD_ONCLICKREQUESTED_OFFSET UNITYSDK_OFFSET(0x147EB190)
#define EEFEDNHNOJO_ADD_ONISSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x147EB290)
#define EEFEDNHNOJO_BFPGGHFAHCA_OFFSET UNITYSDK_OFFSET(0x147EB350)
#define EEFEDNHNOJO_CTOR_OFFSET UNITYSDK_OFFSET(0x147EB3B0)
#define EEFEDNHNOJO_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x147EB020)
#define EEFEDNHNOJO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x147EB080)
#define EEFEDNHNOJO_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x147EB170)
#define EEFEDNHNOJO_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x147EB0A0)
#define EEFEDNHNOJO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x147EB060)
#define EEFEDNHNOJO_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x147EB040)
#define EEFEDNHNOJO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x147EB000)
#define EEFEDNHNOJO_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x147EB0C0)
#define EEFEDNHNOJO_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x147EB100)
#define EEFEDNHNOJO_REMOVE_ONCLICKREQUESTED_OFFSET UNITYSDK_OFFSET(0x147EB210)
#define EEFEDNHNOJO_REMOVE_ONISSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x147EB2F0)
#define EEFEDNHNOJO_SET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x147EB030)
#define EEFEDNHNOJO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x147EB090)
#define EEFEDNHNOJO_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x147EB180)
#define EEFEDNHNOJO_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x147EB0B0)
#define EEFEDNHNOJO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x147EB070)
#define EEFEDNHNOJO_SET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x147EB050)
#define EEFEDNHNOJO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x147EB010)

inline static constexpr unsigned int EEFEDNHNOJO_TypeDefinitionIndex = 82298;

	class EEFEDNHNOJO : public ::System::Object
	{
	public:
		::System::Action* OnIsSelectedChanged; // 0x10
		::System::Action_1<::EEFEDNHNOJO*>* OnClickRequested; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::MechCraft::MechCraftAttributeType _AttributeType_k__BackingField; // 0x28
		::RPG::Client::MechCraft::MechCraftChipTraitType _TraitType_k__BackingField; // 0x2C
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::Boolean _IsAvailable_k__BackingField; // 0x40
		::System::Boolean _IsRecommended_k__BackingField; // 0x41
		::System::Boolean FHBNNGCEPFD; // 0x42
		::System::Byte _padding0[0x1];
		::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType _Type_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType get_Type()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType get_AttributeType()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::Void set_AttributeType(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_ATTRIBUTETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType get_TraitType()
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_TRAITTYPE_OFFSET))(this);
		}

		::System::Void set_TraitType(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_TRAITTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_ISRECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsRecommended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_ISRECOMMENDED_OFFSET))(this, a1);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_SET_ISAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void add_OnClickRequested(::System::Action_1<::EEFEDNHNOJO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EEFEDNHNOJO*>*))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_ADD_ONCLICKREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClickRequested(::System::Action_1<::EEFEDNHNOJO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EEFEDNHNOJO*>*))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_REMOVE_ONCLICKREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_OnIsSelectedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_ADD_ONISSELECTEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsSelectedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_REMOVE_ONISSELECTEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void BFPGGHFAHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFEDNHNOJO_BFPGGHFAHCA_OFFSET))(this);
		}

	};
