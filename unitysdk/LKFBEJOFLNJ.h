#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardPreCheckType.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/ChenLingGridStatus.h"
#include "unitysdk/System/Object.h"
class LKFBEJOFLNJ;
namespace RPG::GameCore { class ChenLingCardPreCheckRow; }

#define LKFBEJOFLNJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB72BD70)
#define LKFBEJOFLNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB72BE20)
#define LKFBEJOFLNJ_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB72BD30)
#define LKFBEJOFLNJ_GET_ID_OFFSET UNITYSDK_OFFSET(0xB72BCB0)
#define LKFBEJOFLNJ_GET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xB72BD10)
#define LKFBEJOFLNJ_GET_TOAST_OFFSET UNITYSDK_OFFSET(0xB72BD50)
#define LKFBEJOFLNJ_GET_USECARDID_OFFSET UNITYSDK_OFFSET(0xB72BCF0)
#define LKFBEJOFLNJ_GET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0xB72BCD0)
#define LKFBEJOFLNJ_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB72BD40)
#define LKFBEJOFLNJ_SET_ID_OFFSET UNITYSDK_OFFSET(0xB72BCC0)
#define LKFBEJOFLNJ_SET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xB72BD20)
#define LKFBEJOFLNJ_SET_TOAST_OFFSET UNITYSDK_OFFSET(0xB72BD60)
#define LKFBEJOFLNJ_SET_USECARDID_OFFSET UNITYSDK_OFFSET(0xB72BD00)
#define LKFBEJOFLNJ_SET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0xB72BCE0)

inline static constexpr unsigned int LKFBEJOFLNJ_TypeDefinitionIndex = 76343;

	class LKFBEJOFLNJ : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGridStatus _TargetGridType_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::RPG::GameCore::ChenLingCardType _UseCardType_k__BackingField; // 0x18
		::System::UInt32 _UseCardID_k__BackingField; // 0x1C
		::RPG::GameCore::ChenLingCardPreCheckType _ConditionType_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Toast_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingCardType get_UseCardType()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_USECARDTYPE_OFFSET))(this);
		}

		::System::Void set_UseCardType(::RPG::GameCore::ChenLingCardType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_USECARDTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UseCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_USECARDID_OFFSET))(this);
		}

		::System::Void set_UseCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_USECARDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingGridStatus get_TargetGridType()
		{
			return ((::RPG::GameCore::ChenLingGridStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_TARGETGRIDTYPE_OFFSET))(this);
		}

		::System::Void set_TargetGridType(::RPG::GameCore::ChenLingGridStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGridStatus))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_TARGETGRIDTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingCardPreCheckType get_ConditionType()
		{
			return ((::RPG::GameCore::ChenLingCardPreCheckType(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::System::Void set_ConditionType(::RPG::GameCore::ChenLingCardPreCheckType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardPreCheckType))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_CONDITIONTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Toast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_GET_TOAST_OFFSET))(this);
		}

		::System::Void set_Toast(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_SET_TOAST_OFFSET))(this, a1);
		}

		static ::LKFBEJOFLNJ* BPLPBPMEODA(::RPG::GameCore::ChenLingCardPreCheckRow* a1)
		{
			return ((::LKFBEJOFLNJ*(*)(::RPG::GameCore::ChenLingCardPreCheckRow*))((::PBYTE)hIl2Cpp + LKFBEJOFLNJ_BPLPBPMEODA_OFFSET))(a1);
		}

	};
