#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraGameModeType.h"
#include "unitysdk/System/Object.h"

#define ECGNNHLACPN_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0C190)
#define ECGNNHLACPN_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0x12D0C150)

inline static constexpr unsigned int ECGNNHLACPN_TypeDefinitionIndex = 63429;

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
