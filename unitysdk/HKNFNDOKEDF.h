#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define HKNFNDOKEDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667990)

inline static constexpr unsigned int HKNFNDOKEDF_TypeDefinitionIndex = 36567;

	class HKNFNDOKEDF : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
	{
	public:
		::System::Single IDKONBFPBLH; // 0x28
		::RPG::MVector2 BHCMCMADHBF; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFNDOKEDF_CTOR_OFFSET))(this);
		}

	};
