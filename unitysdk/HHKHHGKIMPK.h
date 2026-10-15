#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define HHKHHGKIMPK_ACDKLCAOMII_OFFSET UNITYSDK_OFFSET(0x15CC3E80)
#define HHKHHGKIMPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC4820)
#define HHKHHGKIMPK_FJNEGJCHAMP_OFFSET UNITYSDK_OFFSET(0x15CC3B40)
#define HHKHHGKIMPK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15CC3AC0)
#define HHKHHGKIMPK_HBPDEMFHCGA_OFFSET UNITYSDK_OFFSET(0x15CC3C40)
#define HHKHHGKIMPK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CC39C0)
#define HHKHHGKIMPK_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x15CC3A20)

inline static constexpr unsigned int HHKHHGKIMPK_TypeDefinitionIndex = 72365;

	class HHKHHGKIMPK : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x10
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void FJNEGJCHAMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_FJNEGJCHAMP_OFFSET))(this, a1);
		}

		::System::Void HBPDEMFHCGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_HBPDEMFHCGA_OFFSET))(this);
		}

		::System::Void ACDKLCAOMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKHHGKIMPK_ACDKLCAOMII_OFFSET))(this);
		}

	};
