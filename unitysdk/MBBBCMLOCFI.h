#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GHCECAKHKJP;
class MBBBCMLOCFI;
namespace System { class Object; }
namespace System { class String; }

#define MBBBCMLOCFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB852B90)
#define MBBBCMLOCFI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB852AB0)
#define MBBBCMLOCFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB8528A0)
#define MBBBCMLOCFI_EQUALS_OFFSET UNITYSDK_OFFSET(0xB852810)
#define MBBBCMLOCFI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB8529D0)
#define MBBBCMLOCFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB852990)
#define MBBBCMLOCFI_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB8527F0)
#define MBBBCMLOCFI_GET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527B0)
#define MBBBCMLOCFI_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB852790)
#define MBBBCMLOCFI_GET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852710)
#define MBBBCMLOCFI_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xB8527D0)
#define MBBBCMLOCFI_GET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB852770)
#define MBBBCMLOCFI_GET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB852750)
#define MBBBCMLOCFI_GET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB8526F0)
#define MBBBCMLOCFI_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB8526D0)
#define MBBBCMLOCFI_GET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB8526B0)
#define MBBBCMLOCFI_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB852690)
#define MBBBCMLOCFI_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB852670)
#define MBBBCMLOCFI_GET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852730)
#define MBBBCMLOCFI_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB852800)
#define MBBBCMLOCFI_SET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527C0)
#define MBBBCMLOCFI_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527A0)
#define MBBBCMLOCFI_SET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852720)
#define MBBBCMLOCFI_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xB8527E0)
#define MBBBCMLOCFI_SET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB852780)
#define MBBBCMLOCFI_SET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB852760)
#define MBBBCMLOCFI_SET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB852700)
#define MBBBCMLOCFI_SET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB8526E0)
#define MBBBCMLOCFI_SET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB8526C0)
#define MBBBCMLOCFI_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB8526A0)
#define MBBBCMLOCFI_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB852680)
#define MBBBCMLOCFI_SET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852740)

inline static constexpr unsigned int MBBBCMLOCFI_TypeDefinitionIndex = 51967;

	class MBBBCMLOCFI : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _PropertyNameFilter_k__BackingField; // 0x18
		::System::UInt32 _SubRelicFilter_k__BackingField; // 0x28
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x2C
		::System::UInt32 _PropertyClassify_k__BackingField; // 0x30
		::System::UInt32 _PropertyInstructionID_k__BackingField; // 0x34
		::System::UInt32 _Order_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x40
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x50
		::RPG::Client::TextID _PropertyNameSkillTree_k__BackingField; // 0x60
		::System::Boolean _IsBattleDisplay_k__BackingField; // 0x70
		::System::Boolean _IsDisplay_k__BackingField; // 0x71
		::System::Byte _padding1[0x2];
		::System::UInt32 _MainRelicFilter_k__BackingField; // 0x74
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
