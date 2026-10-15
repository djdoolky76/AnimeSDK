#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfBaseMissionData.h"
namespace RPG::Client { class SilverWolfImgPath; }

#define RPG_CLIENT_SILVERWOLFEXPLOREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C4A00)

namespace RPG::Client
{
	class SilverWolfExploreData : public ::RPG::Client::SilverWolfBaseMissionData
	{
	public:
		::RPG::Client::SilverWolfImgPath* ImgPath; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFEXPLOREDATA_CTOR_OFFSET))(this, a1);
		}

	};
}
