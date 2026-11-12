#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/System/Object.h"

#define OELBINFHAGL_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xC6E8F70)

inline static constexpr unsigned int OELBINFHAGL_TypeDefinitionIndex = 73202;

	class OELBINFHAGL : public ::System::Object
	{
	public:
		static ::System::Boolean LCJMKJPECAP(::RPG::Client::ActionItemType a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActionItemType, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + OELBINFHAGL_LCJMKJPECAP_OFFSET))(a1, a2);
		}

	};
