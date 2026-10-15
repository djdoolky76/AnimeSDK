#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CAMCBEODKFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC48C880)
#define CAMCBEODKFO_DLCJDMAKOIK_OFFSET UNITYSDK_OFFSET(0xC48C840)
#define CAMCBEODKFO_HMAONENFGHD_OFFSET UNITYSDK_OFFSET(0xC48C830)

inline static constexpr unsigned int CAMCBEODKFO_TypeDefinitionIndex = 53693;

	class CAMCBEODKFO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMCBEODKFO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::Collision2DShapeType HMAONENFGHD()
		{
			return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMCBEODKFO_HMAONENFGHD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DLCJDMAKOIK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMCBEODKFO_DLCJDMAKOIK_OFFSET))(this);
		}

	};
