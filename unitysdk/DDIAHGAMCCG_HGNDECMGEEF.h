#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflatableFighterSide.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DDIAHGAMCCG_HGNDECMGEEF_CTOR_OFFSET UNITYSDK_OFFSET(0xF56A0)

	struct alignas(4) DDIAHGAMCCG_HGNDECMGEEF
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::RPG::Client::EInflatableFighterSide EGHDMDEJICM; // 0x1C
		::System::Boolean GBIPEDLCOKN; // 0x20
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_HGNDECMGEEF_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
