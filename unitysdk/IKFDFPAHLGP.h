#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEMBBOJGAON;
namespace RPG::Client { class UIController; }

#define IKFDFPAHLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1647A540)
#define IKFDFPAHLGP_EFCPNPIACIK_OFFSET UNITYSDK_OFFSET(0x1647A450)
#define IKFDFPAHLGP_IGLFJMACJNP_OFFSET UNITYSDK_OFFSET(0x1647A360)

inline static constexpr unsigned int IKFDFPAHLGP_TypeDefinitionIndex = 73125;

	class IKFDFPAHLGP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDFPAHLGP_CTOR_OFFSET))(this);
		}

		::BEMBBOJGAON* IGLFJMACJNP(::RPG::Client::UIController* a1)
		{
			return ((::BEMBBOJGAON*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + IKFDFPAHLGP_IGLFJMACJNP_OFFSET))(this, a1);
		}

		::BEMBBOJGAON* EFCPNPIACIK(::RPG::Client::UIController* a1)
		{
			return ((::BEMBBOJGAON*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + IKFDFPAHLGP_EFCPNPIACIK_OFFSET))(this, a1);
		}

	};
