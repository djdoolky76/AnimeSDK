#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_GAME_MONOGAMEENTRY_B8BC14E355EF5009_OFFSET UNITYSDK_OFFSET(0x1BF7B40)
#define ABC_GAME_MONOGAMEENTRY_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1BF7B90)
#define ABC_GAME_MONOGAMEENTRY_F417BC287AF6B4AF_OFFSET UNITYSDK_OFFSET(0x1BF7A10)
#define ABC_GAME_MONOGAMEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Game
{
	inline static constexpr unsigned int MonoGameEntry_TypeDefinitionIndex = 339;

	class MonoGameEntry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt64 E74114E86741C415; // 0x20

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMEENTRY_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void B8BC14E355EF5009()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMEENTRY_B8BC14E355EF5009_OFFSET))(this);
		}

		::System::Void F417BC287AF6B4AF(::System::Boolean AAA502417CBF4C0E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMEENTRY_F417BC287AF6B4AF_OFFSET))(this, AAA502417CBF4C0E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMEENTRY__CTOR_OFFSET))(this);
		}
	};
}
