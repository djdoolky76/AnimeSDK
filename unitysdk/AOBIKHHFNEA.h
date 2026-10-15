#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"

#define AOBIKHHFNEA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFFC0)

inline static constexpr unsigned int AOBIKHHFNEA_TypeDefinitionIndex = 72380;

	struct alignas(4) AOBIKHHFNEA
	{
		::RPG::Client::TextID NMMKDFFHOLL; // 0x10
		::System::UInt32 NBAHBKCPOGF; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOBIKHHFNEA_CTOR_OFFSET))(this, a1, a2);
		}

	};
