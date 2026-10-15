#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAGKECNIKFL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournHexData; }
namespace System { class Object; }

#define IKINOMMOFAD_CTOR_OFFSET UNITYSDK_OFFSET(0x16480BA0)
#define IKINOMMOFAD_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x16480BB0)
#define IKINOMMOFAD_JODGOMFLEIJ_OFFSET UNITYSDK_OFFSET(0x16480C40)

inline static constexpr unsigned int IKINOMMOFAD_TypeDefinitionIndex = 67253;

	class IKINOMMOFAD : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* NOHFFHLEGPO; // 0x10
		::LAGKECNIKFL LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::LAGKECNIKFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAGKECNIKFL))((::PBYTE)hIl2Cpp + IKINOMMOFAD_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKINOMMOFAD_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexData* JODGOMFLEIJ()
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKINOMMOFAD_JODGOMFLEIJ_OFFSET))(this);
		}

	};
