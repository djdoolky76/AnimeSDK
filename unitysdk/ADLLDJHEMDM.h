#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCOKLOGEKEL;
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }

#define ADLLDJHEMDM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB143D90)
#define ADLLDJHEMDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB143E50)

inline static constexpr unsigned int ADLLDJHEMDM_TypeDefinitionIndex = 67842;

	class ADLLDJHEMDM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLLDJHEMDM_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameSettleResultComposition* BPLPBPMEODA(::LCOKLOGEKEL* a1)
		{
			return ((::RPG::Client::IRogueTournGameSettleResultComposition*(*)(::PVOID, ::LCOKLOGEKEL*))((::PBYTE)hIl2Cpp + ADLLDJHEMDM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
