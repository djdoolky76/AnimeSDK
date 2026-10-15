#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define HKNFNDOKEDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C639600)

inline static constexpr unsigned int HKNFNDOKEDF_TypeDefinitionIndex = 36567;

	class HKNFNDOKEDF : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
	{
	public:
		::RPG::MVector2 BHCMCMADHBF; // 0x28
		::System::Single IDKONBFPBLH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFNDOKEDF_CTOR_OFFSET))(this);
		}

	};
