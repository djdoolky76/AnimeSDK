#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class HIAHLINDEHP;
namespace RPG::GameCore { class IdleLiveEquipPropertyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIAHLINDEHP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CDB5C0)
#define HIAHLINDEHP_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x15CDB540)
#define HIAHLINDEHP_CGCDDHBEIEO_OFFSET UNITYSDK_OFFSET(0x15CDBE30)
#define HIAHLINDEHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15CDBAE0)
#define HIAHLINDEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CDB6E0)
#define HIAHLINDEHP_GET_IDLELIVEPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15CDB5A0)
#define HIAHLINDEHP_IHEFFDKFAOA_OFFSET UNITYSDK_OFFSET(0x15CDB500)
#define HIAHLINDEHP_OBLBGMKAIFD_OFFSET UNITYSDK_OFFSET(0x15CDC860)
#define HIAHLINDEHP_PAALJDJAMDK_OFFSET UNITYSDK_OFFSET(0x15CDCDA0)
#define HIAHLINDEHP_SET_IDLELIVEPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15CDB5B0)

inline static constexpr unsigned int HIAHLINDEHP_TypeDefinitionIndex = 75330;

	class HIAHLINDEHP : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal NHKBABFADEK; // 0x10
		::System::String* FADILKPGCEM; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal MLCCAFBJIJD; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal BCGEKLGHMFI; // 0x48
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal BECGKKEKNGI; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* ILOBNLFGNBM; // 0x78
		::RPG::GameCore::IdleLiveAvatarPropertyType _IdleLivePropertyType_k__BackingField; // 0x80
		::System::Boolean GFLDACJFAAO; // 0x84
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID FKFFDCCCGFE; // 0x88
		::RPG::GameCore::FixPoint IFFGPNJIIJI; // 0x98
		::System::Void _ctor(::RPG::GameCore::IdleLiveEquipPropertyRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipPropertyRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + HIAHLINDEHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HIAHLINDEHP_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* IHEFFDKFAOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHLINDEHP_IHEFFDKFAOA_OFFSET))(this);
		}

		::RPG::Client::TextID CBJLPOGLLOG()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHLINDEHP_CBJLPOGLLOG_OFFSET))(this);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyType get_IdleLivePropertyType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHLINDEHP_GET_IDLELIVEPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_IdleLivePropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + HIAHLINDEHP_SET_IDLELIVEPROPERTYTYPE_OFFSET))(this, a1);
		}

		static ::HIAHLINDEHP* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::HIAHLINDEHP*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HIAHLINDEHP_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CGCDDHBEIEO(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + HIAHLINDEHP_CGCDDHBEIEO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal OBLBGMKAIFD(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + HIAHLINDEHP_OBLBGMKAIFD_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal PAALJDJAMDK()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHLINDEHP_PAALJDJAMDK_OFFSET))(this);
		}

	};
