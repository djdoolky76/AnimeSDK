#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLink; }
namespace RPG::Client::Compliance::Ftc::DropLink { class GachaFtcDropLinkFactory; }

#define NIIIDGPJADK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBEC5D0)
#define NIIIDGPJADK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEC580)

	class NIIIDGPJADK : public ::System::Object
	{
	public:
		::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory* ADHGPMBAAFG; // 0x10
		::System::Void _ctor(::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory*))((::PBYTE)hIl2Cpp + NIIIDGPJADK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIIIDGPJADK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
