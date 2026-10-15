#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define OAFKGIIMCBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD20220)

	class OAFKGIIMCBL : public ::System::Object
	{
	public:
		::RPG::Client::TextID MJOOFPBABEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFKGIIMCBL_CTOR_OFFSET))(this);
		}

	};
