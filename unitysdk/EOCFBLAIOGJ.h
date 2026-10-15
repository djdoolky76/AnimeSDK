#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }

#define EOCFBLAIOGJ_DHCALFFFLCH_OFFSET UNITYSDK_OFFSET(0x155AFAE0)
#define EOCFBLAIOGJ_IKPONCFJCEE_OFFSET UNITYSDK_OFFSET(0x155B0060)
#define EOCFBLAIOGJ_OFPNFHKDOKG_OFFSET UNITYSDK_OFFSET(0x155AFF90)

inline static constexpr unsigned int EOCFBLAIOGJ_TypeDefinitionIndex = 77380;

	class EOCFBLAIOGJ : public ::System::Object
	{
	public:
		static ::BCLKDMAHONE* DHCALFFFLCH(::IOGNBKGNPFD* a1)
		{
			return ((::BCLKDMAHONE*(*)(::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + EOCFBLAIOGJ_DHCALFFFLCH_OFFSET))(a1);
		}

		static ::BCLKDMAHONE* OFPNFHKDOKG(::Entitas::IEntity* a1)
		{
			return ((::BCLKDMAHONE*(*)(::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EOCFBLAIOGJ_OFPNFHKDOKG_OFFSET))(a1);
		}

		static ::BCLKDMAHONE* IKPONCFJCEE(::Entitas::IEntity* a1)
		{
			return ((::BCLKDMAHONE*(*)(::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EOCFBLAIOGJ_IKPONCFJCEE_OFFSET))(a1);
		}

	};
