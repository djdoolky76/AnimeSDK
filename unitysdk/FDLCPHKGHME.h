#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

#define FDLCPHKGHME_CTOR_OFFSET UNITYSDK_OFFSET(0x156DE140)

	class FDLCPHKGHME : public ::System::Object
	{
	public:
		::RPG::Client::TextID DKLKGHFLMDO; // 0x10
		::RPG::GameCore::ControlSkillType GMLGNNPDCJG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLCPHKGHME_CTOR_OFFSET))(this);
		}

	};
