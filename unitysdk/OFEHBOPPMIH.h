#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine::UI { class Image; }

#define OFEHBOPPMIH_CGHDIANPOFF_OFFSET UNITYSDK_OFFSET(0xBE37080)
#define OFEHBOPPMIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE370F0)
#define OFEHBOPPMIH_GDBFPCFAEIF_OFFSET UNITYSDK_OFFSET(0xBE37030)
#define OFEHBOPPMIH_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE370D0)
#define OFEHBOPPMIH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBE36E70)
#define OFEHBOPPMIH_MHAPPGHMOPN_OFFSET UNITYSDK_OFFSET(0xBE36EC0)
#define OFEHBOPPMIH_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE370E0)
#define OFEHBOPPMIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE36E10)

inline static constexpr unsigned int OFEHBOPPMIH_TypeDefinitionIndex = 71396;

	class OFEHBOPPMIH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* NBOHBGJDNKF; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::GameCore::AetherSpiritTypeRow* ILOALKEMFJO; // 0x70
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
