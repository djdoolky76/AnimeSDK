#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"

#define PIJEFEJMFFA_NFECDPGDBMO_OFFSET UNITYSDK_OFFSET(0xC261E80)

inline static constexpr unsigned int PIJEFEJMFFA_TypeDefinitionIndex = 69812;

	class PIJEFEJMFFA : public ::System::Object
	{
	public:
		static ::System::Boolean NFECDPGDBMO(::RPG::Client::MaterialProppertySetWay a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + PIJEFEJMFFA_NFECDPGDBMO_OFFSET))(a1);
		}

	};
