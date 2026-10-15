#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPHINJGCEAO.h"
namespace RPG::GameCore { class GameEntity; }

#define LNKELDMEAAJ_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xB7DE3E0)
#define LNKELDMEAAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DE6D0)
#define LNKELDMEAAJ_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB7DE3C0)
#define LNKELDMEAAJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB7DE430)
#define LNKELDMEAAJ_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB7DE3D0)

inline static constexpr unsigned int LNKELDMEAAJ_TypeDefinitionIndex = 56221;

	class LNKELDMEAAJ
	{
	public:
		::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKELDMEAAJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKELDMEAAJ_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LNKELDMEAAJ_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKELDMEAAJ_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::KPHINJGCEAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHINJGCEAO))((::PBYTE)hIl2Cpp + LNKELDMEAAJ_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
