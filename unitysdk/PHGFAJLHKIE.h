#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PHGFAJLHKIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9AD3E0)

inline static constexpr unsigned int PHGFAJLHKIE_TypeDefinitionIndex = 83329;

	class PHGFAJLHKIE : public ::System::Object
	{
	public:
		::RPG::Client::TextID GBBGMEMBFJA; // 0x10
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PHGFAJLHKIE_CTOR_OFFSET))(this, a1);
		}

	};
