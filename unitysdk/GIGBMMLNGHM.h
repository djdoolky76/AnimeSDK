#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GIGBMMLNGHM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIGBMMLNGHM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A2A9D0)
#define GIGBMMLNGHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2AED0)
#define GIGBMMLNGHM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15A2AF40)
#define GIGBMMLNGHM_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x15A2AFA0)
#define GIGBMMLNGHM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x15A2AF60)
#define GIGBMMLNGHM_GET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0x15A2AF20)
#define GIGBMMLNGHM_GET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0x15A2AF80)
#define GIGBMMLNGHM_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x15A2AF00)
#define GIGBMMLNGHM_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15A2AEE0)
#define GIGBMMLNGHM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15A2AF50)
#define GIGBMMLNGHM_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x15A2AFB0)
#define GIGBMMLNGHM_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x15A2AF70)
#define GIGBMMLNGHM_SET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0x15A2AF30)
#define GIGBMMLNGHM_SET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0x15A2AF90)
#define GIGBMMLNGHM_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x15A2AF10)
#define GIGBMMLNGHM_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15A2AEF0)

inline static constexpr unsigned int GIGBMMLNGHM_TypeDefinitionIndex = 47187;

	class GIGBMMLNGHM : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _PropertyFactorConfigs_k__BackingField; // 0x18
		::System::Boolean _IsDisplay_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 _Order_k__BackingField; // 0x24
		::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x30
		::RPG::Client::TextID _PropertyDesc_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_CTOR_OFFSET))(this);
		}

		static ::GIGBMMLNGHM* BPLPBPMEODA(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::GIGBMMLNGHM*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_PROPERTYDESC_OFFSET))(this);
		}

		::System::Void set_PropertyDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_PROPERTYDESC_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_ORDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* get_PropertyFactorConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_PROPERTYFACTORCONFIGS_OFFSET))(this);
		}

		::System::Void set_PropertyFactorConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_PROPERTYFACTORCONFIGS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIGBMMLNGHM_SET_ISDISPLAY_OFFSET))(this, a1);
		}

	};
