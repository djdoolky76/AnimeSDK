#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ShotAnimType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ShotAnimMovementData; }

#define GNBHHBLMAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFC270)

	class GNBHHBLMAIM : public ::System::Object
	{
	public:
		::RPG::Client::ShotAnimMovementData* JNIMPIPCILC; // 0x10
		::RPG::Client::ShotAnimType HOPGLHFIPML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBHHBLMAIM_CTOR_OFFSET))(this);
		}

	};
