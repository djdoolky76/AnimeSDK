#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine::UI { class Image; }

#define OFEHBOPPMIH_CGHDIANPOFF_OFFSET UNITYSDK_OFFSET(0xBE3E930)
#define OFEHBOPPMIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3E9A0)
#define OFEHBOPPMIH_GDBFPCFAEIF_OFFSET UNITYSDK_OFFSET(0xBE3E8E0)
#define OFEHBOPPMIH_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE3E980)
#define OFEHBOPPMIH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBE3E720)
#define OFEHBOPPMIH_MHAPPGHMOPN_OFFSET UNITYSDK_OFFSET(0xBE3E770)
#define OFEHBOPPMIH_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE3E990)
#define OFEHBOPPMIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE3E6C0)

	class OFEHBOPPMIH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::RPG::GameCore::AetherSpiritTypeRow* ILOALKEMFJO; // 0x68
		::UnityEngine::UI::Image* NBOHBGJDNKF; // 0x70
		::System::Boolean _IsUltraMode_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEHBOPPMIH__ONBIND_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void GDBFPCFAEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_GDBFPCFAEIF_OFFSET))(this, a1);
		}

		::System::Void MHAPPGHMOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_MHAPPGHMOPN_OFFSET))(this);
		}

		::System::Void CGHDIANPOFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_CGHDIANPOFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUltraMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_GET_ISULTRAMODE_OFFSET))(this);
		}

		::System::Void set_IsUltraMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFEHBOPPMIH_SET_ISULTRAMODE_OFFSET))(this, a1);
		}

	};
