#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class NADMFPPMIFN;

#define NADMFPPMIFN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA569B0)
#define NADMFPPMIFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA56A60)
#define NADMFPPMIFN_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xBA569A0)

	class NADMFPPMIFN
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + NADMFPPMIFN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMFPPMIFN_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::NADMFPPMIFN* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::NADMFPPMIFN*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + NADMFPPMIFN_BPLPBPMEODA_OFFSET))(a1);
		}

	};
