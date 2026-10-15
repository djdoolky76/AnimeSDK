#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"
class IDEJGLMNJAC;

#define IDEJGLMNJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC4540)
#define IDEJGLMNJAC_DLCJDMAKOIK_OFFSET UNITYSDK_OFFSET(0x15EC4460)
#define IDEJGLMNJAC_HMAONENFGHD_OFFSET UNITYSDK_OFFSET(0x15EC4450)
#define IDEJGLMNJAC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EC4470)

inline static constexpr unsigned int IDEJGLMNJAC_TypeDefinitionIndex = 53695;

	class IDEJGLMNJAC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixVec2 DAMDFJMHDCM; // 0x10
		::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEJGLMNJAC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::Collision2DShapeType HMAONENFGHD()
		{
			return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEJGLMNJAC_HMAONENFGHD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DLCJDMAKOIK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEJGLMNJAC_DLCJDMAKOIK_OFFSET))(this);
		}

		::IDEJGLMNJAC* KPJGDHLENIP(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::IDEJGLMNJAC*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IDEJGLMNJAC_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

	};
