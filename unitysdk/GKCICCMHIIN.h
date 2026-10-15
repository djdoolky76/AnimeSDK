#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define GKCICCMHIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A783B0)
#define GKCICCMHIIN_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x15A78330)

inline static constexpr unsigned int GKCICCMHIIN_TypeDefinitionIndex = 55119;

	class GKCICCMHIIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCICCMHIIN_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCICCMHIIN_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
