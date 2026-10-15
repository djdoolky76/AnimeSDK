#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/System/Object.h"
class BMFJFABKKFE;

#define KOEJPJACFDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71D990)

	class KOEJPJACFDD : public ::System::Object
	{
	public:
		::BMFJFABKKFE* BLOPONOMFBD; // 0x10
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType JMNJLFACCLM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEJPJACFDD_CTOR_OFFSET))(this);
		}

	};
