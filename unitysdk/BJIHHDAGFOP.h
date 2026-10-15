#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
class DAKDIABDGKN;
class OODEOHIDMEG;

#define BJIHHDAGFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D870)

inline static constexpr unsigned int BJIHHDAGFOP_TypeDefinitionIndex = 43778;

	class BJIHHDAGFOP : public ::System::Object
	{
	public:
		::OODEOHIDMEG* EJJOKPFJBDE; // 0x10
		::DAKDIABDGKN* FKIBGPJNCIJ; // 0x18
		::RPG::GameCore::CakeRaceMoveState NPDNEEPHEKN; // 0x20
		::RPG::GameCore::CakeRaceMoveState LMEFGJFMCIF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHHDAGFOP_CTOR_OFFSET))(this);
		}

	};
