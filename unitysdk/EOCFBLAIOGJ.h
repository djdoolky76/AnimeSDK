#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }

#define EOCFBLAIOGJ_DHCALFFFLCH_OFFSET UNITYSDK_OFFSET(0x155BB4D0)
#define EOCFBLAIOGJ_IKPONCFJCEE_OFFSET UNITYSDK_OFFSET(0x155BBA50)
#define EOCFBLAIOGJ_OFPNFHKDOKG_OFFSET UNITYSDK_OFFSET(0x155BB980)

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
