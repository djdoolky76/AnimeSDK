#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GHCECAKHKJP;
class MBBBCMLOCFI;
namespace System { class Object; }
namespace System { class String; }

#define MBBBCMLOCFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8593D0)
#define MBBBCMLOCFI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB8592F0)
#define MBBBCMLOCFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB8590E0)
#define MBBBCMLOCFI_EQUALS_OFFSET UNITYSDK_OFFSET(0xB859050)
#define MBBBCMLOCFI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB859210)
#define MBBBCMLOCFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB8591D0)
#define MBBBCMLOCFI_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB859030)
#define MBBBCMLOCFI_GET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB858FF0)
#define MBBBCMLOCFI_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB858FD0)
#define MBBBCMLOCFI_GET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB858F50)
#define MBBBCMLOCFI_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xB859010)
#define MBBBCMLOCFI_GET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB858FB0)
#define MBBBCMLOCFI_GET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB858F90)
#define MBBBCMLOCFI_GET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB858F30)
#define MBBBCMLOCFI_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB858F10)
#define MBBBCMLOCFI_GET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB858EF0)
#define MBBBCMLOCFI_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB858ED0)
#define MBBBCMLOCFI_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB858EB0)
#define MBBBCMLOCFI_GET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB858F70)
#define MBBBCMLOCFI_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB859040)
#define MBBBCMLOCFI_SET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB859000)
#define MBBBCMLOCFI_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB858FE0)
#define MBBBCMLOCFI_SET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB858F60)
#define MBBBCMLOCFI_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xB859020)
#define MBBBCMLOCFI_SET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB858FC0)
#define MBBBCMLOCFI_SET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB858FA0)
#define MBBBCMLOCFI_SET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB858F40)
#define MBBBCMLOCFI_SET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB858F20)
#define MBBBCMLOCFI_SET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB858F00)
#define MBBBCMLOCFI_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB858EE0)
#define MBBBCMLOCFI_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB858EC0)
#define MBBBCMLOCFI_SET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB858F80)

inline static constexpr unsigned int MBBBCMLOCFI_TypeDefinitionIndex = 51967;

	class MBBBCMLOCFI : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x18
		::System::UInt32 _PropertyInstructionID_k__BackingField; // 0x28
		::System::UInt32 _PropertyClassify_k__BackingField; // 0x2C
		::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x30
		::System::Boolean _IsBattleDisplay_k__BackingField; // 0x40
		::System::Boolean _IsDisplay_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x44
		::System::UInt32 _MainRelicFilter_k__BackingField; // 0x48
		::System::UInt32 _SubRelicFilter_k__BackingField; // 0x4C
		::System::UInt32 _Order_k__BackingField; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _PropertyNameFilter_k__BackingField; // 0x58
		::RPG::Client::TextID _PropertyNameSkillTree_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyNameSkillTree()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYNAMESKILLTREE_OFFSET))(this);
		}

		::System::Void set_PropertyNameSkillTree(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYNAMESKILLTREE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyNameRelic()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYNAMERELIC_OFFSET))(this);
		}

		::System::Void set_PropertyNameRelic(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYNAMERELIC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyNameFilter()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYNAMEFILTER_OFFSET))(this);
		}

		::System::Void set_PropertyNameFilter(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYNAMEFILTER_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainRelicFilter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_MAINRELICFILTER_OFFSET))(this);
		}

		::System::Void set_MainRelicFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_MAINRELICFILTER_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubRelicFilter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_SUBRELICFILTER_OFFSET))(this);
		}

		::System::Void set_SubRelicFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_SUBRELICFILTER_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropertyInstructionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYINSTRUCTIONID_OFFSET))(this);
		}

		::System::Void set_PropertyInstructionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYINSTRUCTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropertyClassify()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_PROPERTYCLASSIFY_OFFSET))(this);
		}

		::System::Void set_PropertyClassify(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_PROPERTYCLASSIFY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_ISDISPLAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_ISBATTLEDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsBattleDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_ISBATTLEDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_ORDER_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::GHCECAKHKJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::MBBBCMLOCFI* a1, ::MBBBCMLOCFI* a2)
		{
			return ((::System::Boolean(*)(::MBBBCMLOCFI*, ::MBBBCMLOCFI*))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::MBBBCMLOCFI* a1, ::MBBBCMLOCFI* a2)
		{
			return ((::System::Boolean(*)(::MBBBCMLOCFI*, ::MBBBCMLOCFI*))((::PBYTE)hIl2Cpp + MBBBCMLOCFI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
