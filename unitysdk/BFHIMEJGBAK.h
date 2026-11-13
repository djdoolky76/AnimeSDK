#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BFHIMEJGBAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A958850)
#define BFHIMEJGBAK_GMKENGMMLKP_OFFSET UNITYSDK_OFFSET(0x1A958840)

inline static constexpr unsigned int BFHIMEJGBAK_TypeDefinitionIndex = 56575;

	class BFHIMEJGBAK : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint IBNGJKBPMOO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHIMEJGBAK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DawnsEyeWeatherUIType GMKENGMMLKP()
		{
			return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHIMEJGBAK_GMKENGMMLKP_OFFSET))(this);
		}

	};
