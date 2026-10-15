#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }

#define DONPAICOHMP___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEEC60)
#define DONPAICOHMP___C__DISPLAYCLASS1_0__CONTAINS_B__0_OFFSET UNITYSDK_OFFSET(0x11FEEC70)

inline static constexpr unsigned int DONPAICOHMP___c__DisplayClass1_0_TypeDefinitionIndex = 75656;

	class DONPAICOHMP___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::PetInstanceIdentifier identifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONPAICOHMP___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Contains_b__0(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + DONPAICOHMP___C__DISPLAYCLASS1_0__CONTAINS_B__0_OFFSET))(this, a1);
		}

	};
