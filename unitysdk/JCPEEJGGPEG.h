#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class JCPEEJGGPEG;

#define JCPEEJGGPEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8ED240)
#define JCPEEJGGPEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8ED2F0)
#define JCPEEJGGPEG_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB8ED230)

inline static constexpr unsigned int JCPEEJGGPEG_TypeDefinitionIndex = 80792;

	class JCPEEJGGPEG
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + JCPEEJGGPEG_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPEEJGGPEG_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::JCPEEJGGPEG* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::JCPEEJGGPEG*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + JCPEEJGGPEG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
