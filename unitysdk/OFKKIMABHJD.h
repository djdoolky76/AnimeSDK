#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateGameData; }

#define OFKKIMABHJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE45E10)

	class OFKKIMABHJD : public ::System::Object
	{
	public:
		::RPG::Client::FateGameData* NHJHHOLAOHD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKKIMABHJD_CTOR_OFFSET))(this);
		}

	};
