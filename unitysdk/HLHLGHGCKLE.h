#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SilverWolfGroupData; }

#define HLHLGHGCKLE_CNPACGMNOJA_OFFSET UNITYSDK_OFFSET(0x15D5FB80)

	class HLHLGHGCKLE : public ::System::Object
	{
	public:
		static ::RPG::Client::SilverWolfGroupData* CNPACGMNOJA(::System::UInt32 a1)
		{
			return ((::RPG::Client::SilverWolfGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLHLGHGCKLE_CNPACGMNOJA_OFFSET))(a1);
		}

	};
