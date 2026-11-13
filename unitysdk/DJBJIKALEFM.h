#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
class ALKIDFGNGAH;
class OLKIGNMJDMA;

#define DJBJIKALEFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18EE18A0)
#define DJBJIKALEFM_CTOR_OFFSET UNITYSDK_OFFSET(0x18EE1890)

inline static constexpr unsigned int DJBJIKALEFM_TypeDefinitionIndex = 77078;

	class DJBJIKALEFM : public ::System::Object
	{
	public:
		::OLKIGNMJDMA* NAOOPJJJDJL; // 0x10
		::System::Void _ctor(::OLKIGNMJDMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLKIGNMJDMA*))((::PBYTE)hIl2Cpp + DJBJIKALEFM_CTOR_OFFSET))(this, a1);
		}

		::ALKIDFGNGAH* BPLPBPMEODA(::RPG::Client::ComicDessert::ComicDessertDeviceId a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::ALKIDFGNGAH*(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DJBJIKALEFM_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
