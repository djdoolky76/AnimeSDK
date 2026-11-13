#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultiLightEffectMatBlockType.h"
#include "unitysdk/System/Object.h"

#define JKNJBPBDOBE_HJKIEKODDAL_OFFSET UNITYSDK_OFFSET(0x17B2FA30)

inline static constexpr unsigned int JKNJBPBDOBE_TypeDefinitionIndex = 72665;

	class JKNJBPBDOBE : public ::System::Object
	{
	public:
		static ::System::Boolean HJKIEKODDAL(::RPG::Client::MultiLightEffectMatBlockType a1, ::RPG::Client::MultiLightEffectMatBlockType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MultiLightEffectMatBlockType, ::RPG::Client::MultiLightEffectMatBlockType))((::PBYTE)hIl2Cpp + JKNJBPBDOBE_HJKIEKODDAL_OFFSET))(a1, a2);
		}

	};
