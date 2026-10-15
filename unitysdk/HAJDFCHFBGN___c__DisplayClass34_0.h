#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;

#define HAJDFCHFBGN___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B79D10)
#define HAJDFCHFBGN___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET UNITYSDK_OFFSET(0x15B7A880)

	class HAJDFCHFBGN___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamType team; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectTeamField_b__0(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET))(this, a1);
		}

	};
