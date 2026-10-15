#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IGamePhase; }

#define GCMAAOPFGLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15983960)
#define GCMAAOPFGLK_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x15983980)
#define GCMAAOPFGLK_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0x15983B20)

	class GCMAAOPFGLK : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMAAOPFGLK_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + GCMAAOPFGLK_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMAAOPFGLK_NPJGONHMEOD_OFFSET))(this);
		}

	};
