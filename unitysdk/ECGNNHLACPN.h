#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraGameModeType.h"
#include "unitysdk/System/Object.h"

#define ECGNNHLACPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D59D0)
#define ECGNNHLACPN_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0x1C3D5990)

inline static constexpr unsigned int ECGNNHLACPN_TypeDefinitionIndex = 64867;

	class ECGNNHLACPN : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraGameModeType FPCALMGPPIO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGNNHLACPN_CTOR_OFFSET))(this);
		}

		::System::Void KEAFKKMLOKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGNNHLACPN_KEAFKKMLOKE_OFFSET))(this);
		}

	};
