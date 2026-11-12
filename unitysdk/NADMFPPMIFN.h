#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class NADMFPPMIFN;

#define NADMFPPMIFN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC319AE0)
#define NADMFPPMIFN_CTOR_OFFSET UNITYSDK_OFFSET(0xC319B90)
#define NADMFPPMIFN_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xC319AD0)

inline static constexpr unsigned int NADMFPPMIFN_TypeDefinitionIndex = 80793;

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
