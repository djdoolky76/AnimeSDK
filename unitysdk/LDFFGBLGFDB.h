#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertOutlineDepthMode.h"
#include "unitysdk/System/Object.h"

#define LDFFGBLGFDB_IFKFOFABJOC_OFFSET UNITYSDK_OFFSET(0x1AC7AD40)

inline static constexpr unsigned int LDFFGBLGFDB_TypeDefinitionIndex = 79928;

	class LDFFGBLGFDB : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode IFKFOFABJOC(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDFFGBLGFDB_IFKFOFABJOC_OFFSET))(a1);
		}

	};
