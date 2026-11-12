#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
class DAKDIABDGKN;
class OODEOHIDMEG;

#define BJIHHDAGFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3C6D0)

inline static constexpr unsigned int BJIHHDAGFOP_TypeDefinitionIndex = 44853;

	class BJIHHDAGFOP : public ::System::Object
	{
	public:
		::DAKDIABDGKN* FKIBGPJNCIJ; // 0x10
		::OODEOHIDMEG* EJJOKPFJBDE; // 0x18
		::RPG::GameCore::CakeRaceMoveState NPDNEEPHEKN; // 0x20
		::RPG::GameCore::CakeRaceMoveState LMEFGJFMCIF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHHDAGFOP_CTOR_OFFSET))(this);
		}

	};
