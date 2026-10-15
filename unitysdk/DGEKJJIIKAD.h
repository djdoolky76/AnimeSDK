#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BoxingClubLevelInstance; }

#define DGEKJJIIKAD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE845FB0)
#define DGEKJJIIKAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE8460F0)

	class DGEKJJIIKAD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKJJIIKAD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BoxingClubLevelInstance* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::BoxingClubLevelInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGEKJJIIKAD_BPLPBPMEODA_OFFSET))(a1);
		}

	};
