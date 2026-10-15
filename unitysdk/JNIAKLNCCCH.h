#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JNIAKLNCCCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB282AF0)
#define JNIAKLNCCCH_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xB282AA0)

inline static constexpr unsigned int JNIAKLNCCCH_TypeDefinitionIndex = 57602;

	class JNIAKLNCCCH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIAKLNCCCH_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNIAKLNCCCH_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
