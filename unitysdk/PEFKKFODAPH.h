#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class JKLMMFFKNFH;
class NPECKAJCCAH;
class OOBCBPNPOLG;
class PEFKKFODAPH;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define PEFKKFODAPH_BJKELAFPMON_OFFSET UNITYSDK_OFFSET(0xC031B10)
#define PEFKKFODAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xC031580)
#define PEFKKFODAPH_DENOJDPJKJD_OFFSET UNITYSDK_OFFSET(0xC031590)
#define PEFKKFODAPH_DOPAELDLDPO_OFFSET UNITYSDK_OFFSET(0xC0313B0)
#define PEFKKFODAPH_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC0323E0)
#define PEFKKFODAPH_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC031310)
#define PEFKKFODAPH_GET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xC031370)
#define PEFKKFODAPH_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC0312B0)
#define PEFKKFODAPH_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC0312D0)
#define PEFKKFODAPH_GET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xC031350)
#define PEFKKFODAPH_GET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xC031390)
#define PEFKKFODAPH_GET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xC031330)
#define PEFKKFODAPH_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC0312F0)
#define PEFKKFODAPH_KJPABMFHGBK_OFFSET UNITYSDK_OFFSET(0xC031EF0)
#define PEFKKFODAPH_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xC031F90)
#define PEFKKFODAPH_PCAEFEEJIEP_OFFSET UNITYSDK_OFFSET(0xC031610)
#define PEFKKFODAPH_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC031320)
#define PEFKKFODAPH_SET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xC031380)
#define PEFKKFODAPH_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC0312C0)
#define PEFKKFODAPH_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC0312E0)
#define PEFKKFODAPH_SET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xC031360)
#define PEFKKFODAPH_SET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xC0313A0)
#define PEFKKFODAPH_SET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xC031340)
#define PEFKKFODAPH_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC031300)

inline static constexpr unsigned int PEFKKFODAPH_TypeDefinitionIndex = 79380;

	class PEFKKFODAPH : public ::System::Object
	{
	public:
		::JKLMMFFKNFH* IFAHBJDHGFH; // 0x10
		::NPECKAJCCAH* KALACGGGCDE; // 0x18
		::RPG::GameCore::FixPoint _ChargePower_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _MultiPower_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _BurnPower_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _JamPower_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _DamagePower_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _HastePower_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _ShieldPower_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _CoolDown_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CoolDown()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_CoolDown(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DamagePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Void set_DamagePower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_DAMAGEPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ShieldPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Void set_ShieldPower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_SHIELDPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BurnPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Void set_BurnPower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_BURNPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MultiPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_MULTIPOWER_OFFSET))(this);
		}

		::System::Void set_MultiPower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_MULTIPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HastePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_HASTEPOWER_OFFSET))(this);
		}

		::System::Void set_HastePower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_HASTEPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ChargePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_CHARGEPOWER_OFFSET))(this);
		}

		::System::Void set_ChargePower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_CHARGEPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_JamPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GET_JAMPOWER_OFFSET))(this);
		}

		::System::Void set_JamPower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEFKKFODAPH_SET_JAMPOWER_OFFSET))(this, a1);
		}

		static ::PEFKKFODAPH* DOPAELDLDPO(::RPG::Client::PixAir::PixAirEquipLevelData* a1)
		{
			return ((::PEFKKFODAPH*(*)(::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_DOPAELDLDPO_OFFSET))(a1);
		}

		static ::PEFKKFODAPH* PCAEFEEJIEP(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::PEFKKFODAPH*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_PCAEFEEJIEP_OFFSET))(a1);
		}

		static ::PEFKKFODAPH* BJKELAFPMON(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::RPG::Client::PixAir::PixAirEquipLevelData* a2)
		{
			return ((::PEFKKFODAPH*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_BJKELAFPMON_OFFSET))(a1, a2);
		}

		::System::Void DENOJDPJKJD(::OOBCBPNPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBCBPNPOLG*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_DENOJDPJKJD_OFFSET))(this, a1);
		}

		::System::Void KJPABMFHGBK(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_KJPABMFHGBK_OFFSET))(this, a1);
		}

		::System::String* MNGGAOFNGIP(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PEFKKFODAPH_GETCONTEXT_OFFSET))(this, a1);
		}

	};
