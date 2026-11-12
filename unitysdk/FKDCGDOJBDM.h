#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIAKLNCCCH.h"
namespace RPG::GameCore { class GameEntity; }

#define FKDCGDOJBDM_CTOR_OFFSET UNITYSDK_OFFSET(0x16753710)
#define FKDCGDOJBDM_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x167535C0)

inline static constexpr unsigned int FKDCGDOJBDM_TypeDefinitionIndex = 56302;

	class FKDCGDOJBDM : public ::JNIAKLNCCCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDCGDOJBDM_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FKDCGDOJBDM_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
