#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class TransportFlightSettings; }
namespace System { class String; }

#define FKFGNAHIOPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1675BE20)

inline static constexpr unsigned int FKFGNAHIOPO_TypeDefinitionIndex = 80052;

	class FKFGNAHIOPO : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::RPG::Client::LittleGame::ComicDessert::TransportFlightSettings* FEKBOMGKANN; // 0x18
		::System::Single NIAPNGDKBDA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFGNAHIOPO_CTOR_OFFSET))(this);
		}

	};
