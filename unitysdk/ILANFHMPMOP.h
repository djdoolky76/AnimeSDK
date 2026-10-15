#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define ILANFHMPMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E19B0)

	class ILANFHMPMOP : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
	{
	public:
		::RPG::MVector2 FJIOOLKFJPL; // 0x28
		::RPG::MVector2 BOHPLLMNCHE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILANFHMPMOP_CTOR_OFFSET))(this);
		}

	};
