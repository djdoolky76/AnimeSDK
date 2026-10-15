#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define CDFIPACKDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC763B40)
#define CDFIPACKDAC_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xC763AA0)

inline static constexpr unsigned int CDFIPACKDAC_TypeDefinitionIndex = 55121;

	class CDFIPACKDAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFIPACKDAC_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDFIPACKDAC_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
