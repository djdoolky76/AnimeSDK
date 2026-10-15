#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define DJIGFHMOPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xF230650)

inline static constexpr unsigned int DJIGFHMOPIG_TypeDefinitionIndex = 55840;

	class DJIGFHMOPIG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint ENPFGCMCLPI; // 0x10
		::RPG::GameCore::FixPoint AAPOHKBAPFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIGFHMOPIG_CTOR_OFFSET))(this);
		}

	};
