#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define FDAGJGPPPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796C00)

inline static constexpr unsigned int FDAGJGPPPBC_TypeDefinitionIndex = 37496;

	class FDAGJGPPPBC : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
	{
	public:
		::RPG::MVector2 BHCMCMADHBF; // 0x28
		::System::Single HBAMPJPOOLM; // 0x30
		::System::Single NKPKPNKBBAP; // 0x34
		::System::Single CONJAMJKHBI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDAGJGPPPBC_CTOR_OFFSET))(this);
		}

	};
