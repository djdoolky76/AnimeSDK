#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingDisplayCarType.h"
#include "unitysdk/System/Object.h"

#define PLEKDDGOMHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F0890)
#define PLEKDDGOMHO_GET_DIAPLAYCARTYPE_OFFSET UNITYSDK_OFFSET(0xC2F08A0)

inline static constexpr unsigned int PLEKDDGOMHO_TypeDefinitionIndex = 81700;

	class PLEKDDGOMHO : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingDisplayCarType _DiaplayCarType_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::B51RacingDisplayCarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingDisplayCarType))((::PBYTE)hIl2Cpp + PLEKDDGOMHO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::B51RacingDisplayCarType get_DiaplayCarType()
		{
			return ((::RPG::GameCore::B51RacingDisplayCarType(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKDDGOMHO_GET_DIAPLAYCARTYPE_OFFSET))(this);
		}

	};
