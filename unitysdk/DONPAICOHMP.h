#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetLineup; }

#define DONPAICOHMP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x11FF3D40)
#define DONPAICOHMP_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x11FF3DF0)

inline static constexpr unsigned int DONPAICOHMP_TypeDefinitionIndex = 75656;

	class DONPAICOHMP : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::IPetInstance* ACMKLFOMPFC(::RPG::Client::Pet::IPetLineup* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::RPG::Client::Pet::IPetLineup*, ::System::UInt32))((::PBYTE)hIl2Cpp + DONPAICOHMP_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		static ::System::Boolean LCJMKJPECAP(::RPG::Client::Pet::IPetLineup* a1, ::RPG::Client::Pet::PetInstanceIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPetLineup*, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + DONPAICOHMP_LCJMKJPECAP_OFFSET))(a1, a2);
		}

	};
