#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define AMBAAIEGGBL_CDCMJBOMMLC_OFFSET UNITYSDK_OFFSET(0x155747E0)

	class AMBAAIEGGBL : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntity* CDCMJBOMMLC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AMBAAIEGGBL_CDCMJBOMMLC_OFFSET))(a1);
		}

	};
