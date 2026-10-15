#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCOKLOGEKEL;
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }

#define DNIFAOHCOEL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x11962750)
#define DNIFAOHCOEL_CTOR_OFFSET UNITYSDK_OFFSET(0x11962830)

inline static constexpr unsigned int DNIFAOHCOEL_TypeDefinitionIndex = 67853;

	class DNIFAOHCOEL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIFAOHCOEL_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameSettleResultComposition* BPLPBPMEODA(::LCOKLOGEKEL* a1)
		{
			return ((::RPG::Client::IRogueTournGameSettleResultComposition*(*)(::PVOID, ::LCOKLOGEKEL*))((::PBYTE)hIl2Cpp + DNIFAOHCOEL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
