#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOAKMDKBOJJ;
namespace RPG::GameCore { class RtDamageConstConfig; }

#define KLMOPOMAPLH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB528D00)
#define KLMOPOMAPLH_KJBDNPJAHOP_OFFSET UNITYSDK_OFFSET(0xB528A50)

inline static constexpr unsigned int KLMOPOMAPLH_TypeDefinitionIndex = 54201;

	class KLMOPOMAPLH : public ::System::Object
	{
	public:
		static ::FOAKMDKBOJJ* KJBDNPJAHOP(::FOAKMDKBOJJ* a1, ::RPG::GameCore::RtDamageConstConfig* a2)
		{
			return ((::FOAKMDKBOJJ*(*)(::FOAKMDKBOJJ*, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + KLMOPOMAPLH_KJBDNPJAHOP_OFFSET))(a1, a2);
		}

		static ::FOAKMDKBOJJ* BPLPBPMEODA()
		{
			return ((::FOAKMDKBOJJ*(*)())((::PBYTE)hIl2Cpp + KLMOPOMAPLH_BPLPBPMEODA_OFFSET))();
		}

	};
